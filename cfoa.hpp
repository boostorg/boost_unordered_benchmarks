/* Fast open-addressing hash table.
 *
 * Copyright 2022 Joaquin M Lopez Munoz.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * See https://www.boost.org/libs/unordered for library home page.
 */

#ifndef BOOST_UNORDERED_DETAIL_CFOA_HPP
#define BOOST_UNORDERED_DETAIL_CFOA_HPP

#include <array>
#include <atomic>
#include <boost/assert.hpp>
#include <boost/config.hpp>
#include <boost/config/workaround.hpp>
#include <boost/core/allocator_traits.hpp>
#include <boost/core/bit.hpp>
#include <boost/core/empty_value.hpp>
#include <boost/core/no_exceptions_support.hpp>
#include <boost/core/pointer_traits.hpp>
#include <boost/cstdint.hpp>
#include <boost/predef.h>
#include <boost/type_traits/has_trivial_copy.hpp>
#include <boost/type_traits/is_nothrow_swappable.hpp>
#include <boost/unordered/detail/narrow_cast.hpp>
#include <boost/unordered/detail/xmx.hpp>
#include <boost/unordered/hash_traits.hpp>
#include <boost/smart_ptr/detail/sp_thread_pause.hpp>
#include <boost/smart_ptr/detail/sp_thread_sleep.hpp>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <iterator>
#include <limits>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <tuple>
#include <type_traits>
#include <utility>
#include "rw_spinlock.hpp"
#include "oneapi/tbb/spin_rw_mutex.h"

#if defined(__SSE2__)||\
    defined(_M_X64)||(defined(_M_IX86_FP)&&_M_IX86_FP>=2)
#define BOOST_UNORDERED_SSE2
#include <emmintrin.h>
#elif defined(__ARM_NEON)&&!defined(__ARM_BIG_ENDIAN)
#define BOOST_UNORDERED_LITTLE_ENDIAN_NEON
#include <arm_neon.h>
#endif

#ifdef __has_builtin
#define BOOST_UNORDERED_HAS_BUILTIN(x) __has_builtin(x)
#else
#define BOOST_UNORDERED_HAS_BUILTIN(x) 0
#endif

#if !defined(NDEBUG)
#define BOOST_UNORDERED_ASSUME(cond) BOOST_ASSERT(cond)
#elif BOOST_UNORDERED_HAS_BUILTIN(__builtin_assume)
#define BOOST_UNORDERED_ASSUME(cond) __builtin_assume(cond)
#elif defined(__GNUC__) || BOOST_UNORDERED_HAS_BUILTIN(__builtin_unreachable)
#define BOOST_UNORDERED_ASSUME(cond)    \
  do{                                   \
    if(!(cond))__builtin_unreachable(); \
  }while(0)
#elif defined(_MSC_VER)
#define BOOST_UNORDERED_ASSUME(cond) __assume(cond)
#else
#define BOOST_UNORDERED_ASSUME(cond)  \
  do{                                 \
    static_cast<void>(false&&(cond)); \
  }while(0)
#endif

#define BOOST_UNORDERED_STATIC_ASSERT_HASH_PRED(Hash, Pred)                    \
  static_assert(boost::is_nothrow_swappable<Hash>::value,                      \
    "Template parameter Hash is required to be nothrow Swappable.");           \
  static_assert(boost::is_nothrow_swappable<Pred>::value,                      \
    "Template parameter Pred is required to be nothrow Swappable");

namespace boost{
namespace unordered{
namespace detail{
namespace cfoa{

static const std::size_t default_bucket_count = 0;

/* foa::table is an open-addressing hash table serving as the foundational core
 * of boost::unordered_[flat|node]_[map|set]. Its main internal design aspects
 * are:
 * 
 *   - Element slots are logically split into groups of size N=15. The number
 *     of groups is always a power of two, so the number of allocated slots
       is of the form (N*2^n)-1 (final slot reserved for a sentinel mark).
 *   - Positioning is done at the group level rather than the slot level, that
 *     is, for any given element its hash value is used to locate a group and
 *     insertion is performed on the first available element of that group;
 *     if the group is full (overflow), further groups are tried using
 *     quadratic probing.
 *   - Each group has an associated 16B metadata word holding reduced hash
 *     values and overflow information. Reduced hash values are used to
 *     accelerate lookup within the group by using 128-bit SIMD or 64-bit word
 *     operations.
 */

/* group15 controls metadata information of a group of N=15 element slots.
 * The 16B metadata word is organized as follows (LSB depicted rightmost):
 *
 *   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
 *   |ofw|h14|h13|h13|h11|h10|h09|h08|h07|h06|h05|h04|h03|h02|h01|h00|
 *   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
 *
 * hi is 0 if the i-th element slot is avalaible, 1 to mark a sentinel and,
 * when the slot is occupied, a value in the range [2,255] obtained from the
 * element's original hash value.
 * ofw is the so-called overflow byte. If insertion of an element with hash
 * value h is tried on a full group, then the (h%8)-th bit of the overflow
 * byte is set to 1 and a further group is probed. Having an overflow byte
 * brings two advantages:
 * 
 *   - There's no need to reserve a special value of hi to mark tombstone
 *     slots; each reduced hash value keeps then log2(254)=7.99 bits of the
 *     original hash (alternative approaches reserve one full bit to mark
 *     if the slot is available/deleted, so their reduced hash values are 7 bit
 *     strong only).
 *   - When doing an unsuccessful lookup (i.e. the element is not present in
 *     the table), probing stops at the first non-overflowed group. Having 8
 *     bits for signalling overflow makes it very likely that we stop at the
 *     current group (this happens when no element with the same (h%8) value
 *     has overflowed in the group), saving us an additional group check even
 *     under high-load/high-erase conditions. It is critical that hash
 *     reduction is invariant under modulo 8 (see maybe_caused_overflow).
 *
 * When looking for an element with hash value h, match(h) returns a bitmask
 * signalling which slots have the same reduced hash value. If available,
 * match uses SSE2 or (little endian) Neon 128-bit SIMD operations. On non-SIMD
 * scenarios, the logical layout described above is physically mapped to two
 * 64-bit words with *bit interleaving*, i.e. the least significant 16 bits of
 * the first 64-bit word contain the least significant bits of each byte in the
 * "logical" 128-bit word, and so forth. With this layout, match can be
 * implemented with 4 ANDs, 3 shifts, 2 XORs, 1 OR and 1 NOT.
 * 
 * group15 has no user-defined ctor so that it's a trivial type and can be
 * initialized via memset etc. Where needed, group15::initialize sets the
 * metadata to all zeros.
 */

struct group_access
{
  struct dummy_group_access_type
  {
    boost::uint32_t storage[2]={0,0};
  };

  inline auto shared_access()
  {
    return std::shared_lock<rw_spinlock>(mtx);
  }

  inline auto exclusive_access()
  {
    return std::scoped_lock<rw_spinlock>(mtx);
  }

  inline auto& counter(){return cnt;}

private:
  rw_spinlock          mtx;
  std::atomic_uint32_t cnt;
};

template<typename Group>
struct protected_group:Group,group_access
{
  struct dummy_group_type
  {
    typename Group::dummy_group_type      group_storage;
    group_access::dummy_group_access_type access_storage;
  };
};

#if defined(BOOST_UNORDERED_SSE2)

static_assert(sizeof(std::atomic<unsigned char>)==1);

struct group15
{
  static constexpr int N=15;

  struct dummy_group_type
  {
    alignas(16) unsigned char storage[N+1]=
      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  };

  inline void initialize()
  {
    _mm_store_si128(
      reinterpret_cast<__m128i*>(m),_mm_setzero_si128());
  }

  inline std::atomic_uchar& at(std::size_t pos)
  {
    return m[pos];
  }

  inline const std::atomic_uchar& at(std::size_t pos)const
  {
    return m[pos];
  }

  inline void set(std::size_t pos,std::size_t hash)
  {
    BOOST_ASSERT(pos<N);
    at(pos)=reduced_hash(hash);
  }

  inline void reset(std::size_t pos)
  {
    BOOST_ASSERT(pos<N);
    at(pos)=available_;
  }

  static inline void reset(unsigned char* pc)
  {
    *pc=available_;
  }

  inline int match(std::size_t hash)const
  {
    auto w=_mm_load_si128(reinterpret_cast<const __m128i*>(m));
    return
      _mm_movemask_epi8(_mm_cmpeq_epi8(w,_mm_set1_epi32(match_word(hash))))&0x7FFF;
  }

  inline bool is_not_overflowed(std::size_t hash)const
  {
    static constexpr unsigned char shift[]={1,2,4,8,16,32,64,128};

    return !(overflow()&shift[hash%8]);
  }

  inline void mark_overflow(std::size_t hash)
  {
    overflow()|=static_cast<unsigned char>(1<<(hash%8));
  }

  static inline bool maybe_caused_overflow(unsigned char* pc)
  {
    std::size_t pos=reinterpret_cast<uintptr_t>(pc)%sizeof(group15);
    group15    *pg=reinterpret_cast<group15*>(pc-pos);
    return !pg->is_not_overflowed(*pc);
  };

  inline int match_available()const
  {
    auto w=_mm_load_si128(reinterpret_cast<const __m128i*>(m));
    return _mm_movemask_epi8(
      _mm_cmpeq_epi8(w,_mm_setzero_si128()))&0x7FFF;
  }

  inline int match_occupied()const
  {
    return (~match_available())&0x7FFF;
  }

private:
  static constexpr unsigned char available_=0,
                                 sentinel_=1;

  inline static int match_word(std::size_t hash)
  {
    static constexpr boost::uint32_t word[]=
    {
      0x08080808u,0x09090909u,0x02020202u,0x03030303u,0x04040404u,0x05050505u,0x06060606u,0x07070707u,
      0x08080808u,0x09090909u,0x0A0A0A0Au,0x0B0B0B0Bu,0x0C0C0C0Cu,0x0D0D0D0Du,0x0E0E0E0Eu,0x0F0F0F0Fu,
      0x10101010u,0x11111111u,0x12121212u,0x13131313u,0x14141414u,0x15151515u,0x16161616u,0x17171717u,
      0x18181818u,0x19191919u,0x1A1A1A1Au,0x1B1B1B1Bu,0x1C1C1C1Cu,0x1D1D1D1Du,0x1E1E1E1Eu,0x1F1F1F1Fu,
      0x20202020u,0x21212121u,0x22222222u,0x23232323u,0x24242424u,0x25252525u,0x26262626u,0x27272727u,
      0x28282828u,0x29292929u,0x2A2A2A2Au,0x2B2B2B2Bu,0x2C2C2C2Cu,0x2D2D2D2Du,0x2E2E2E2Eu,0x2F2F2F2Fu,
      0x30303030u,0x31313131u,0x32323232u,0x33333333u,0x34343434u,0x35353535u,0x36363636u,0x37373737u,
      0x38383838u,0x39393939u,0x3A3A3A3Au,0x3B3B3B3Bu,0x3C3C3C3Cu,0x3D3D3D3Du,0x3E3E3E3Eu,0x3F3F3F3Fu,
      0x40404040u,0x41414141u,0x42424242u,0x43434343u,0x44444444u,0x45454545u,0x46464646u,0x47474747u,
      0x48484848u,0x49494949u,0x4A4A4A4Au,0x4B4B4B4Bu,0x4C4C4C4Cu,0x4D4D4D4Du,0x4E4E4E4Eu,0x4F4F4F4Fu,
      0x50505050u,0x51515151u,0x52525252u,0x53535353u,0x54545454u,0x55555555u,0x56565656u,0x57575757u,
      0x58585858u,0x59595959u,0x5A5A5A5Au,0x5B5B5B5Bu,0x5C5C5C5Cu,0x5D5D5D5Du,0x5E5E5E5Eu,0x5F5F5F5Fu,
      0x60606060u,0x61616161u,0x62626262u,0x63636363u,0x64646464u,0x65656565u,0x66666666u,0x67676767u,
      0x68686868u,0x69696969u,0x6A6A6A6Au,0x6B6B6B6Bu,0x6C6C6C6Cu,0x6D6D6D6Du,0x6E6E6E6Eu,0x6F6F6F6Fu,
      0x70707070u,0x71717171u,0x72727272u,0x73737373u,0x74747474u,0x75757575u,0x76767676u,0x77777777u,
      0x78787878u,0x79797979u,0x7A7A7A7Au,0x7B7B7B7Bu,0x7C7C7C7Cu,0x7D7D7D7Du,0x7E7E7E7Eu,0x7F7F7F7Fu,
      0x80808080u,0x81818181u,0x82828282u,0x83838383u,0x84848484u,0x85858585u,0x86868686u,0x87878787u,
      0x88888888u,0x89898989u,0x8A8A8A8Au,0x8B8B8B8Bu,0x8C8C8C8Cu,0x8D8D8D8Du,0x8E8E8E8Eu,0x8F8F8F8Fu,
      0x90909090u,0x91919191u,0x92929292u,0x93939393u,0x94949494u,0x95959595u,0x96969696u,0x97979797u,
      0x98989898u,0x99999999u,0x9A9A9A9Au,0x9B9B9B9Bu,0x9C9C9C9Cu,0x9D9D9D9Du,0x9E9E9E9Eu,0x9F9F9F9Fu,
      0xA0A0A0A0u,0xA1A1A1A1u,0xA2A2A2A2u,0xA3A3A3A3u,0xA4A4A4A4u,0xA5A5A5A5u,0xA6A6A6A6u,0xA7A7A7A7u,
      0xA8A8A8A8u,0xA9A9A9A9u,0xAAAAAAAAu,0xABABABABu,0xACACACACu,0xADADADADu,0xAEAEAEAEu,0xAFAFAFAFu,
      0xB0B0B0B0u,0xB1B1B1B1u,0xB2B2B2B2u,0xB3B3B3B3u,0xB4B4B4B4u,0xB5B5B5B5u,0xB6B6B6B6u,0xB7B7B7B7u,
      0xB8B8B8B8u,0xB9B9B9B9u,0xBABABABAu,0xBBBBBBBBu,0xBCBCBCBCu,0xBDBDBDBDu,0xBEBEBEBEu,0xBFBFBFBFu,
      0xC0C0C0C0u,0xC1C1C1C1u,0xC2C2C2C2u,0xC3C3C3C3u,0xC4C4C4C4u,0xC5C5C5C5u,0xC6C6C6C6u,0xC7C7C7C7u,
      0xC8C8C8C8u,0xC9C9C9C9u,0xCACACACAu,0xCBCBCBCBu,0xCCCCCCCCu,0xCDCDCDCDu,0xCECECECEu,0xCFCFCFCFu,
      0xD0D0D0D0u,0xD1D1D1D1u,0xD2D2D2D2u,0xD3D3D3D3u,0xD4D4D4D4u,0xD5D5D5D5u,0xD6D6D6D6u,0xD7D7D7D7u,
      0xD8D8D8D8u,0xD9D9D9D9u,0xDADADADAu,0xDBDBDBDBu,0xDCDCDCDCu,0xDDDDDDDDu,0xDEDEDEDEu,0xDFDFDFDFu,
      0xE0E0E0E0u,0xE1E1E1E1u,0xE2E2E2E2u,0xE3E3E3E3u,0xE4E4E4E4u,0xE5E5E5E5u,0xE6E6E6E6u,0xE7E7E7E7u,
      0xE8E8E8E8u,0xE9E9E9E9u,0xEAEAEAEAu,0xEBEBEBEBu,0xECECECECu,0xEDEDEDEDu,0xEEEEEEEEu,0xEFEFEFEFu,
      0xF0F0F0F0u,0xF1F1F1F1u,0xF2F2F2F2u,0xF3F3F3F3u,0xF4F4F4F4u,0xF5F5F5F5u,0xF6F6F6F6u,0xF7F7F7F7u,
      0xF8F8F8F8u,0xF9F9F9F9u,0xFAFAFAFAu,0xFBFBFBFBu,0xFCFCFCFCu,0xFDFDFDFDu,0xFEFEFEFEu,0xFFFFFFFFu,
    };

    return (int)word[narrow_cast<unsigned char>(hash)];
  }

  inline static unsigned char reduced_hash(std::size_t hash)
  {
    return narrow_cast<unsigned char>(match_word(hash));
  }

  inline std::atomic_uchar& overflow()
  {
    return at(N);
  }

  inline const std::atomic_uchar& overflow()const
  {
    return at(N);
  }

  alignas(16) std::atomic_uchar m[16];
};

#elif defined(BOOST_UNORDERED_LITTLE_ENDIAN_NEON)

#error Neon not supported yet

#else /* non-SIMD */

#error Non-SIMD not supported yet

#endif

/* foa::table uses a size policy to obtain the permissible sizes of the group
 * array (and, by implication, the element array) and to do the hash->group
 * mapping.
 * 
 *   - size_index(n) returns an unspecified "index" number used in other policy
 *     operations.
 *   - size(size_index_) returns the number of groups for the given index. It is
 *     guaranteed that size(size_index(n)) >= n.
 *   - min_size() is the minimum number of groups permissible, i.e.
 *     size(size_index(0)).
 *   - position(hash,size_index_) maps hash to a position in the range
 *     [0,size(size_index_)).
 * 
 * The reason we're introducing the intermediate index value for calculating
 * sizes and positions is that it allows us to optimize the implementation of
 * position, which is in the hot path of lookup and insertion operations:
 * pow2_size_policy, the actual size policy used by foa::table, returns 2^n
 * (n>0) as permissible sizes and returns the n most significant bits
 * of the hash value as the position in the group array; using a size index
 * defined as i = (bits in std::size_t) - n, we have an unbeatable
 * implementation of position(hash) as hash>>i.
 * There's a twofold reason for choosing the high bits of hash for positioning:
 *   - Multiplication-based mixing tends to yield better entropy in the high
 *     part of its result.
 *   - group15 reduced-hash values take the *low* bits of hash, and we want
 *     these values and positioning to be as uncorrelated as possible.
 */

struct pow2_size_policy
{
  static inline std::size_t size_index(std::size_t n)
  {
    // TODO: min size is 2, see if we can bring it down to 1 without loss
    // of performance

    return sizeof(std::size_t)*CHAR_BIT-
      (n<=2?1:((std::size_t)(boost::core::bit_width(n-1))));
  }

  static inline std::size_t size(std::size_t size_index_)
  {
     return std::size_t(1)<<(sizeof(std::size_t)*CHAR_BIT-size_index_);  
  }
    
  static constexpr std::size_t min_size(){return 2;}

  static inline std::size_t position(std::size_t hash,std::size_t size_index_)
  {
    return hash>>size_index_;
  }
};

/* size index of a group array for a given *element* capacity */

template<typename Group,typename SizePolicy>
static inline std::size_t size_index_for(std::size_t n)
{
  /* n/N+1 == ceil((n+1)/N) (extra +1 for the sentinel) */
  return SizePolicy::size_index(n/Group::N+1);
}

/* Quadratic prober over a power-of-two range using triangular numbers.
 * mask in next(mask) must be the range size minus one (and since size is 2^n,
 * mask has exactly its n first bits set to 1).
 */

struct pow2_quadratic_prober
{
  pow2_quadratic_prober(std::size_t pos_):pos{pos_}{}

  inline std::size_t get()const{return pos;}

  /* next returns false when the whole array has been traversed, which ends
   * probing (in practice, full-table probing will only happen with very small
   * arrays).
   */

  inline bool next(std::size_t mask)
  {
    step+=1;
    pos=(pos+step)&mask;
    return step<=mask;
  }

private:
  std::size_t pos,step=0;
};

/* Mixing policies: no_mix is the identity function and xmx_mix uses the
 * xmx function defined in <boost/unordered/detail/xmx.hpp>.
 * foa::table mixes hash results with xmx_mix unless the hash is marked as
 * avalanching, i.e. of good quality (see <boost/unordered/hash_traits.hpp>).
 */

struct no_mix
{
  template<typename Hash,typename T>
  static inline std::size_t mix(const Hash& h,const T& x)
  {
    return h(x);
  }
};

struct xmx_mix
{
  template<typename Hash,typename T>
  static inline std::size_t mix(const Hash& h,const T& x)
  {
    return xmx(h(x));
  }
};

/* boost::core::countr_zero has a potentially costly check for
 * the case x==0.
 */

inline unsigned int unchecked_countr_zero(int x)
{
#if defined(BOOST_MSVC)
  unsigned long r;
  _BitScanForward(&r,(unsigned long)x);
  return (unsigned int)r;
#else
  BOOST_UNORDERED_ASSUME(x!=0);
  return (unsigned int)boost::core::countr_zero((unsigned int)x);
#endif
}

template<typename,typename,typename,typename,typename>
class table;

/* table_iterator keeps two pointers:
 * 
 *   - A pointer p to the element slot.
 *   - A pointer pc to the n-th byte of the associated group metadata, where n
 *     is the position of the element in the group.
 *
 * A simpler solution would have been to keep a pointer p to the element, a
 * pointer pg to the group, and the position n, but that would increase
 * sizeof(table_iterator) by 4/8 bytes. In order to make this compact
 * representation feasible, it is required that group objects are aligned
 * to their size, so that we can recover pg and n as
 * 
 *   - n = pc%sizeof(group)
 *   - pg = pc-n
 * 
 * (for explanatory purposes pg and pc are treated above as if they were memory
 * addresses rather than pointers).The main drawback of this two-pointer
 * representation is that iterator increment is relatively slow.
 * 
 * p = nullptr is conventionally used to mark end() iterators.
 *
 * TypePolicy encodes the element type and the actual value_type, which are
 * different for node containers. See below for a full explanation of type
 * policies.
 */

/* internal conversion from const_iterator to iterator */
class const_iterator_cast_tag {}; 

template<typename TypePolicy,typename Group,bool Const>
class table_iterator
{
  using type_policy=TypePolicy;

  /* "element_type" is taken by the homonym pointer trait */
  using table_element_type=typename type_policy::element_type;

public:
  using difference_type=std::ptrdiff_t;
  using value_type=typename type_policy::value_type;
  using pointer=
    typename std::conditional<Const,value_type const*,value_type*>::type;
  using reference=
    typename std::conditional<Const,value_type const&,value_type&>::type;
  using iterator_category=std::forward_iterator_tag;
  using element_type=
    typename std::conditional<Const,value_type const,value_type>::type;

  table_iterator()=default;
  template<bool Const2,typename std::enable_if<!Const2>::type* =nullptr>
  table_iterator(const table_iterator<TypePolicy,Group,Const2>& x):
    pc{x.pc},p{x.p}{}
  table_iterator(
    const_iterator_cast_tag, const table_iterator<TypePolicy,Group,true>& x):
    pc{x.pc},p{x.p}{}

  inline reference operator*()const noexcept
    {return type_policy::value_from(*p);}
  inline pointer operator->()const noexcept
    {return std::addressof(type_policy::value_from(*p));}
  inline table_iterator& operator++()noexcept{increment();return *this;}
  inline table_iterator operator++(int)noexcept
    {auto x=*this;increment();return x;}
  friend inline bool operator==(
    const table_iterator& x,const table_iterator& y)
    {return x.p==y.p;}
  friend inline bool operator!=(
    const table_iterator& x,const table_iterator& y)
    {return !(x==y);}

private:
  template<typename,typename,bool> friend class table_iterator;
  template<typename,typename,typename,typename,typename> friend class table;

  table_iterator(Group* pg,std::size_t n,const table_element_type* p_):
    pc{reinterpret_cast<unsigned char*>(const_cast<Group*>(pg))+n},
    p{const_cast<table_element_type*>(p_)}
    {}

  inline std::size_t rebase() noexcept
  {
    std::size_t off=reinterpret_cast<uintptr_t>(pc)%sizeof(Group);
    pc-=off;
    return off;
  }

  inline void increment()noexcept
  {
    std::size_t n0=rebase();

    int mask=(reinterpret_cast<Group*>(pc)->match_occupied()>>(n0+1))<<(n0+1);
    if(!mask){
      do{
        pc+=sizeof(Group);
        p+=Group::N;
      }
      while((mask=reinterpret_cast<Group*>(pc)->match_occupied())==0);
    }

    auto n=unchecked_countr_zero(mask);
    if(BOOST_UNLIKELY(reinterpret_cast<Group*>(pc)->is_sentinel(n))){
      p=nullptr;
    }
    else{
      pc+=n;
      p-=n0;
      p+=n;
    }
  }

  unsigned char      *pc=nullptr;
  table_element_type *p=nullptr;
};

/* table_arrays controls allocation, initialization and deallocation of
 * paired arrays of groups and element slots. Only one chunk of memory is
 * allocated to place both arrays: this is not done for efficiency reasons,
 * but in order to be able to properly align the group array without storing
 * additional offset information --the alignment required (16B) is usually
 * greater than alignof(std::max_align_t) and thus not guaranteed by
 * allocators.
 */

template<typename Group,std::size_t Size>
Group* dummy_groups()
{
  /* Dummy storage initialized as if in an empty container (actually, each
   * of its groups is initialized like a separate empty container).
   * We make table_arrays::groups point to this when capacity()==0, so that
   * we are not allocating any dynamic memory and yet lookup can be implemented
   * without checking for groups==nullptr. This space won't ever be used for
   * insertion as the container's capacity is precisely zero.
   */

  static constexpr typename Group::dummy_group_type
  storage[Size]={typename Group::dummy_group_type(),};

  return reinterpret_cast<Group*>(
    const_cast<typename Group::dummy_group_type*>(storage));
}

template<typename Element,typename Group,typename SizePolicy>
struct table_arrays
{
  using element_type=Element;
  using group_type=protected_group<Group>;
  static constexpr auto N=group_type::N;
  using size_policy=SizePolicy;

  template<typename Allocator>
  static table_arrays new_(Allocator& al,std::size_t n)
  {
    using alloc_traits=boost::allocator_traits<Allocator>;

    auto         groups_size_index=size_index_for<group_type,size_policy>(n);
    auto         groups_size=size_policy::size(groups_size_index);
#ifdef CFOA_EMBEDDED_GROUP_ACCESS
    table_arrays arrays{groups_size_index,groups_size-1,nullptr,nullptr};
#else
    table_arrays arrays{groups_size_index,groups_size-1,nullptr,nullptr,nullptr};
#endif

    if(!n){
      arrays.groups=dummy_groups<group_type,size_policy::min_size()>();
    }
    else{
      arrays.elements=
        boost::to_address(alloc_traits::allocate(al,buffer_size(groups_size)));
      
      /* Align arrays.groups to sizeof(group_type). table_iterator critically
       * depends on such alignment for its increment operation.
       */

      auto p=reinterpret_cast<unsigned char*>(arrays.elements+groups_size*N/*-1*/); // WATCH OUT NO SENTINEL
      p+=(uintptr_t(sizeof(group_type))-
          reinterpret_cast<uintptr_t>(p))%sizeof(group_type);
      arrays.groups=reinterpret_cast<group_type*>(p);

      /* memset is faster/not slower than initializing groups individually.
       * This assumes all zeros is group_type's default layout. 
       */

      std::memset(arrays.groups,0,sizeof(group_type)*groups_size);

#ifndef CFOA_EMBEDDED_GROUP_ACCESS
      using group_access_allocator_type=
        allocator_rebind_t<Allocator,group_access>;
      group_access_allocator_type aal=al;
      arrays.group_accesses=
        boost::allocator_traits<group_access_allocator_type>::allocate(
          aal,groups_size);
      for(std::size_t n=0;n<groups_size;++n){
        boost::allocator_traits<group_access_allocator_type>::construct(
          aal,arrays.group_accesses+n);
      }
#endif
    }
    return arrays;
  }

  template<typename Allocator>
  static void delete_(Allocator& al,table_arrays& arrays)noexcept
  {
    using alloc_traits=boost::allocator_traits<Allocator>;
    using pointer=typename alloc_traits::pointer;
    using pointer_traits=boost::pointer_traits<pointer>;

    if(arrays.elements){
      alloc_traits::deallocate(
        al,pointer_traits::pointer_to(*arrays.elements),
        buffer_size(arrays.groups_size_mask+1));

#ifndef CFOA_EMBEDDED_GROUP_ACCESS
      using group_access_allocator_type=
        allocator_rebind_t<Allocator,group_access>;
      group_access_allocator_type aal=al;
      for(std::size_t n=0;n<arrays.groups_size_mask+1;++n){
        boost::allocator_traits<group_access_allocator_type>::destroy(
          aal,arrays.group_accesses+n);
      }
      boost::allocator_traits<group_access_allocator_type>::deallocate(
        aal,arrays.group_accesses,arrays.groups_size_mask+1);
#endif
    }
  }

  /* Combined space for elements and groups measured in
   * sizeof(element_type)s.
   */

  static std::size_t buffer_size(std::size_t groups_size)
  {
    auto buffer_bytes=
      /* space for elements (we subtract 1 because of the sentinel) */
      sizeof(element_type)*(groups_size*N/*-1*/)+ // WATCH OUT NO SENTINEL
      /* space for groups + padding for group alignment */
      sizeof(group_type)*(groups_size+1)-1;

    /* ceil(buffer_bytes/sizeof(element_type)) */
    return (buffer_bytes+sizeof(element_type)-1)/sizeof(element_type);
  }

  std::size_t   groups_size_index;
  std::size_t   groups_size_mask;
  group_type   *groups;
  element_type *elements;

#ifndef CFOA_EMBEDDED_GROUP_ACCESS
  group_access *group_accesses;
#endif
};

struct if_constexpr_void_else{void operator()()const{}};

template<bool B,typename F,typename G=if_constexpr_void_else>
void if_constexpr(F f,G g={})
{
  std::get<B?0:1>(std::forward_as_tuple(f,g))();
}

template<bool B,typename T,typename std::enable_if<B>::type* =nullptr>
void copy_assign_if(T& x,const T& y){x=y;}

template<bool B,typename T,typename std::enable_if<!B>::type* =nullptr>
void copy_assign_if(T&,const T&){}

template<bool B,typename T,typename std::enable_if<B>::type* =nullptr>
void move_assign_if(T& x,T& y){x=std::move(y);}

template<bool B,typename T,typename std::enable_if<!B>::type* =nullptr>
void move_assign_if(T&,T&){}

template<bool B,typename T,typename std::enable_if<B>::type* =nullptr>
void swap_if(T& x,T& y){using std::swap; swap(x,y);}

template<bool B,typename T,typename std::enable_if<!B>::type* =nullptr>
void swap_if(T&,T&){}

inline void prefetch(const void* p)
{
  (void) p;
#if defined(BOOST_GCC)||defined(BOOST_CLANG)
  __builtin_prefetch((const char*)p);
#elif defined(BOOST_UNORDERED_SSE2)
  _mm_prefetch((const char*)p,_MM_HINT_T0);
#endif    
}

struct try_emplace_args_t{};

template<typename Allocator>
struct is_std_allocator:std::false_type{};

template<typename T>
struct is_std_allocator<std::allocator<T>>:std::true_type{};

/* std::allocator::construct marked as deprecated */
#if defined(_LIBCPP_SUPPRESS_DEPRECATED_PUSH)
_LIBCPP_SUPPRESS_DEPRECATED_PUSH
#elif defined(_STL_DISABLE_DEPRECATED_WARNING)
_STL_DISABLE_DEPRECATED_WARNING
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif

template<typename Allocator,typename Ptr,typename... Args>
struct alloc_has_construct
{
private:
  template<typename Allocator2>
  static decltype(
    std::declval<Allocator2&>().construct(
      std::declval<Ptr>(),std::declval<Args&&>()...),
    std::true_type{}
  ) check(int);

  template<typename> static std::false_type check(...);

public:
  static constexpr bool value=decltype(check<Allocator>(0))::value;
};

template<typename T>
void swap_atomic(std::atomic<T>& x,std::atomic<T>& y)
{
  auto z=x;
  x=y;
  y=z;
}

#if defined(_LIBCPP_SUPPRESS_DEPRECATED_POP)
_LIBCPP_SUPPRESS_DEPRECATED_POP
#elif defined(_STL_RESTORE_DEPRECATED_WARNING)
_STL_RESTORE_DEPRECATED_WARNING
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#if defined(BOOST_GCC)
/* GCC's -Wshadow triggers at scenarios like this: 
 *
 *   struct foo{};
 *   template<typename Base>
 *   struct derived:Base
 *   {
 *     void f(){int foo;}
 *   };
 * 
 *   derived<foo>x;
 *   x.f(); // declaration of "foo" in derived::f shadows base type "foo"
 *
 * This makes shadowing warnings unavoidable in general when a class template
 * derives from user-provided classes, as is the case with table and
 * empty_value's below.
 */

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif

#if defined(BOOST_MSVC)
#pragma warning(push)
#pragma warning(disable:4714) /* marked as __forceinline not inlined */
#endif

#if BOOST_WORKAROUND(BOOST_MSVC,<=1900)
/* VS2015 marks as unreachable generic catch clauses around non-throwing
 * code.
 */
#pragma warning(push)
#pragma warning(disable:4702)
#endif

/* foa::table interface departs in a number of ways from that of C++ unordered
 * associative containers because it's not for end-user consumption
 * (boost::unordered_[flat|node]_[map|set] wrappers complete it as appropriate)
 * and, more importantly, because of fundamental restrictions imposed by open
 * addressing:
 * 
 *   - value_type must be moveable (flat containers).
 *   - Pointer stability is not kept under rehashing (flat containers).
 *   - begin() is not O(1).
 *   - No bucket API.
 *   - Load factor is fixed and can't be set by the user.
 *   - No extract API (implemented externally by wrapping node containers).
 * 
 * The TypePolicy template parameter is used to generate instantiations
 * suitable for each container, and introduces API-public, non-standard
 * init_type:
 * 
 *   - TypePolicy::key_type and TypePolicy::value_type have the obvious
 *     meaning.
 *   - TypePolicy::init_type is the type implicitly converted to when
 *     writing x.insert({...}). For maps, this is std::pair<Key,T> rather
 *     than std::pair<const Key,T> so that, for instance, x.insert({"hello",0})
 *     produces a cheaply moveable std::string&& ("hello") rather than
 *     a copyable const std::string&&. foa::table::insert is extended to accept
 *     both init_type and value_type references.
 *   - element_type is the type actually stored in buckets --value_type for
 *     flat containers and (something equivalent to) value_type* for node
 *     containers.
 *   - TypePolicy::value_from returns a reference to the value_type contained
 *     in an element_type object; for flat containers, this is the identity,
 *     whereas node containers dereference the stored pointer.
 *   - TypePolicy::move(element_type&) returns a temporary object for value
 *     transfer on rehashing, move copy/assignment, and merge. In general
 *     this resolves to std::move, except for flat maps, where the object
 *     returned is a std::pair<Key&&,T&&>, which is generally cheaper to move
 *     than std::pair<const Key,T>&& because of the constness in Key.
 *   - TypePolicy::construct(Allocator&,element_type*,Args&&...), where
 *     Allocator::value_type is value_type, constructs an element from the
 *     given arguments. For flat containers, this resolves to
 *     std::allocator_traits<Allocator>::construct, whereas node containers
 *     additionally do node allocation and/or transfer as appropriate.
 *   - TypePolicy::destroy(Allocator&,element_type*) is the destroying
 *     counterpart of the above.
 *   - TypePolicy::extract returns a const reference to the key part of a const
 *     reference to value_type, init_type, element_type or
 *     decltype(TypePolicy::move(...)).
 * 
 *  try_emplace, erase and find support heterogenous lookup by default, that
 *  is, without checking for any ::is_transparent typedefs --the checking is
 *  done by boost::unordered_[flat|node]_[map|set].
 * 
 *  At the moment, we're not supporting allocators with fancy pointers.
 *  Allocator::pointer must be convertible to/from regular pointers.
 */

/* We pull this out so the tests don't have to rely on a magic constant or
 * instantiate the table class template as it can be quite gory.
 */
constexpr static float const mlf = 0.875f;

template<
  typename TypePolicy,typename Hash,typename Pred,typename Allocator,
  typename Mutex=rw_spinlock
>
class 

#if defined(_MSC_VER)&&_MSC_FULL_VER>=190023918
__declspec(empty_bases) /* activate EBO with multiple inheritance */
#endif

table:empty_value<Hash,0>,empty_value<Pred,1>,empty_value<Allocator,2>
{
  using hash_base=empty_value<Hash,0>;
  using pred_base=empty_value<Pred,1>;
  using allocator_base=empty_value<Allocator,2>;
  using type_policy=TypePolicy;
  using group_type=group15;
  static constexpr auto N=group_type::N;
  using size_policy=pow2_size_policy;
  using prober=pow2_quadratic_prober;
  using mix_policy=typename std::conditional<
    hash_is_avalanching<Hash>::value,
    no_mix,
    xmx_mix
  >::type;
  using alloc_traits=boost::allocator_traits<Allocator>;

public:
  using key_type=typename type_policy::key_type;
  using init_type=typename type_policy::init_type;
  using value_type=typename type_policy::value_type;

private:
  static constexpr bool has_mutable_iterator=
    !std::is_same<key_type,value_type>::value;

public:
  using hasher=Hash;
  using key_equal=Pred;
  using allocator_type=Allocator;
  using pointer=value_type*;
  using const_pointer=const value_type*;
  using reference=value_type&;
  using const_reference=const value_type&;
  using size_type=std::size_t;
  using difference_type=std::ptrdiff_t;
  using const_iterator=table_iterator<type_policy,group_type,true>;
  using iterator=typename std::conditional<
    has_mutable_iterator,
    table_iterator<type_policy,group_type,false>,
    const_iterator>::type;

  table(
    std::size_t n=354000,const Hash& h_=Hash(),const Pred& pred_=Pred(),
    const Allocator& al_=Allocator()):
    hash_base{empty_init,h_},pred_base{empty_init,pred_},
    allocator_base{empty_init,al_},size_{0},arrays(new_arrays(n)),
    ml{initial_max_load()}
    {}

  table(const table& x):
    table{x,alloc_traits::select_on_container_copy_construction(x.al())}{}

  table(table&& x)
    noexcept(
      std::is_nothrow_move_constructible<Hash>::value&&
      std::is_nothrow_move_constructible<Pred>::value&&
      std::is_nothrow_move_constructible<Allocator>::value):
    hash_base{empty_init,std::move(x.h())},
    pred_base{empty_init,std::move(x.pred())},
    allocator_base{empty_init,std::move(x.al())},
    size_{x.size_},arrays(x.arrays),ml{x.ml}
  {
    x.size_=0;
    x.arrays=x.new_arrays(0);
    x.ml=x.initial_max_load();
  }

  table(const table& x,const Allocator& al_):
    table{std::size_t(std::ceil(float(x.size())/mlf)),x.h(),x.pred(),al_}
  {
    copy_elements_from(x);
  }

  table(table&& x,const Allocator& al_):
    table{0,std::move(x.h()),std::move(x.pred()),al_}
  {
    if(al()==x.al()){
      swap_atomic(size_,x.size_);
      std::swap(arrays,x.arrays);
      swap_atomic(ml,x.ml);
    }
    else{
      reserve(x.size());
      clear_on_exit c{x};
      (void)c; /* unused var warning */

      /* This works because subsequent x.clear() does not depend on the
       * elements' values.
       */
      x.for_all_elements([this](element_type* p){
        unchecked_insert(type_policy::move(*p));
      });
    }
  }

  ~table()noexcept
  {
    for_all_elements([this](element_type* p){
      destroy_element(p);
    });
    delete_arrays(arrays);
  }

  table& operator=(const table& x)
  {
    BOOST_UNORDERED_STATIC_ASSERT_HASH_PRED(Hash, Pred)

    static constexpr auto pocca=
      alloc_traits::propagate_on_container_copy_assignment::value;

    if(this!=std::addressof(x)){
      // if copy construction here winds up throwing, the container is still
      // left intact so we perform these operations first
      hasher    tmp_h=x.h();
      key_equal tmp_p=x.pred();

      // already noexcept, clear() before we swap the Hash, Pred just in case
      // the clear() impl relies on them at some point in the future
      clear(); 

      // because we've asserted at compile-time that Hash and Pred are nothrow
      // swappable, we can safely mutate our source container and maintain
      // consistency between the Hash, Pred compatibility
      using std::swap;
      swap(h(),tmp_h);
      swap(pred(),tmp_p);

      if_constexpr<pocca>([&,this]{
        if(al()!=x.al())reserve(0);
        copy_assign_if<pocca>(al(),x.al());
      });
      /* noshrink: favor memory reuse over tightness */
      noshrink_reserve(x.size());
      copy_elements_from(x);
    }
    return *this;
  }

#if defined(BOOST_MSVC)
#pragma warning(push)
#pragma warning(disable:4127) /* conditional expression is constant */
#endif

  table& operator=(table&& x)
    noexcept(
      alloc_traits::propagate_on_container_move_assignment::value||
      alloc_traits::is_always_equal::value)
  {
    BOOST_UNORDERED_STATIC_ASSERT_HASH_PRED(Hash, Pred)

    static constexpr auto pocma=
      alloc_traits::propagate_on_container_move_assignment::value;

    if(this!=std::addressof(x)){
      /* Given ambiguity in implementation strategies briefly discussed here:
       * https://www.open-std.org/jtc1/sc22/wg21/docs/lwg-active.html#2227
       *
       * we opt into requiring nothrow swappability and eschew the move
       * operations associated with Hash, Pred.
       *
       * To this end, we ensure that the user never has to consider the
       * moved-from state of their Hash, Pred objects
       */

      using std::swap;

      clear();
      swap(h(),x.h());
      swap(pred(),x.pred());

      if(pocma||al()==x.al()){
        reserve(0);
        move_assign_if<pocma>(al(),x.al());
        swap_atomic(size_,x.size_);
        swap(arrays,x.arrays);
        swap_atomic(ml,x.ml);
      }
      else{
        /* noshrink: favor memory reuse over tightness */
        noshrink_reserve(x.size());
        clear_on_exit c{x};
        (void)c; /* unused var warning */

        /* This works because subsequent x.clear() does not depend on the
         * elements' values.
         */
        x.for_all_elements([this](element_type* p){
          unchecked_insert(type_policy::move(*p));
        });
      }
    }
    return *this;
  }

#if defined(BOOST_MSVC)
#pragma warning(pop) /* C4127 */
#endif

  allocator_type get_allocator()const noexcept{return al();}

  iterator begin()noexcept
  {
    iterator it{arrays.groups,0,arrays.elements};
    if(!(arrays.groups[0].match_occupied()&0x1))++it;
    return it;
  }

  const_iterator begin()const noexcept
                   {return const_cast<table*>(this)->begin();}
  iterator       end()noexcept{return {};}
  const_iterator end()const noexcept{return const_cast<table*>(this)->end();}
  const_iterator cbegin()const noexcept{return begin();}
  const_iterator cend()const noexcept{return end();}

  bool        empty()const noexcept{return size()==0;}
  std::size_t size()const noexcept{return size_;}
  std::size_t max_size()const noexcept{return SIZE_MAX;}

  template<typename... Args>
  BOOST_FORCEINLINE std::pair<iterator,bool> emplace(Args&&... args)
  {
    using emplace_type = typename std::conditional<
      std::is_constructible<
        init_type, Args...
      >::value,
      init_type,
      value_type
    >::type;
    return emplace_impl(emplace_type(std::forward<Args>(args)...));
  }

  template<typename F,typename Key,typename... Args>
  BOOST_FORCEINLINE void try_emplace(F f,Key&& x,Args&&... args)
  {
    for(;;){
      std::size_t n;
      {
        auto lck=shared_access();
        n=capacity();
        if(emplace_impl(
          f,try_emplace_args_t{},std::forward<Key>(x),std::forward<Args>(args)...))return;
      }

      auto lck=exclusive_access();
      if(capacity()<=n)rehash(n+1);
    }
  }

  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(const init_type& x){return emplace_impl(x);}

  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(init_type&& x){return emplace_impl(std::move(x));}

  /* template<typename=void> tilts call ambiguities in favor of init_type */

  template<typename=void>
  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(const value_type& x){return emplace_impl(x);}

  template<typename=void>
  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(value_type&& x){return emplace_impl(std::move(x));}

  template<
    bool dependent_value=false,
    typename std::enable_if<
      has_mutable_iterator||dependent_value>::type* =nullptr
  >
  void erase(iterator pos)noexcept{return erase(const_iterator(pos));}

  BOOST_FORCEINLINE
  void erase(const_iterator pos)noexcept
  {
    destroy_element(pos.p);
    recover_slot(pos.pc);
  }

  template<typename Key>
  BOOST_FORCEINLINE
  auto erase(Key&& x) -> typename std::enable_if<
    !std::is_convertible<Key,iterator>::value&&
    !std::is_convertible<Key,const_iterator>::value, std::size_t>::type
  {
    auto it=find(x);
    if(it!=end()){
      erase(it);
      return 1;
    }
    else return 0;
  }

  void swap(table& x)
    noexcept(
      alloc_traits::propagate_on_container_swap::value||
      alloc_traits::is_always_equal::value)
  {
    BOOST_UNORDERED_STATIC_ASSERT_HASH_PRED(Hash, Pred)

    static constexpr auto pocs=
      alloc_traits::propagate_on_container_swap::value;

    using std::swap;
    if_constexpr<pocs>([&,this]{
      swap_if<pocs>(al(),x.al());
    },
    [&,this]{ /* else */
      BOOST_ASSERT(al()==x.al());
      (void)this; /* makes sure captured this is used */
    });

    swap(h(),x.h());
    swap(pred(),x.pred());
    swap_atomic(size_,x.size_);
    swap(arrays,x.arrays);
    swap_atomic(ml,x.ml);
  }

  void clear()noexcept
  {
    auto p=arrays.elements;
    if(p){
      for(auto pg=arrays.groups,last=pg+arrays.groups_size_mask+1;
          pg!=last;++pg,p+=N){
        auto mask=pg->match_really_occupied();
        while(mask){
          destroy_element(p+unchecked_countr_zero(mask));
          mask&=mask-1;
        }
        /* we wipe the entire metadata to reset the overflow byte as well */
        pg->initialize();
      }
      arrays.groups[arrays.groups_size_mask].set_sentinel();
      size_=0;
      ml=initial_max_load();
    }
  }

  // TODO: should we accept different allocator too?
  template<typename Hash2,typename Pred2>
  void merge(table<TypePolicy,Hash2,Pred2,Allocator>& x)
  {
    x.for_all_elements([&,this](group_type* pg,unsigned int n,element_type* p){
      if(emplace_impl(type_policy::move(*p)).second){
        x.erase(iterator{pg,n,p});
      }
    });
  }

  template<typename Hash2,typename Pred2>
  void merge(table<TypePolicy,Hash2,Pred2,Allocator>&& x){merge(x);}

  hasher hash_function()const{return h();}
  key_equal key_eq()const{return pred();}

  template<typename Key,typename F>
  BOOST_FORCEINLINE bool find(const Key& x,F f)
  {
    auto lck=shared_access();
    auto hash=hash_for(x);
    return find_impl(x,f,position_for(hash),hash);
  }

  template<typename Key,typename F>
  BOOST_FORCEINLINE bool find(const Key& x,F f)const
  {
    return const_cast<table*>(this)->find(x,f);
  }

  std::size_t capacity()const noexcept
  {
    return arrays.elements?(arrays.groups_size_mask+1)*N-1:0;
  }
  
  float load_factor()const noexcept
  {
    if (capacity() == 0) { return 0; }
    return float(size())/float(capacity());
  }

  float max_load_factor()const noexcept{return mlf;}

  std::size_t max_load()const noexcept{return ml;}

  void rehash(std::size_t n)
  {
    auto m=size_t(std::ceil(float(size())/mlf));
    if(m>n)n=m;
    if(n)n=capacity_for(n); /* exact resulting capacity */

    if(n!=capacity())unchecked_rehash(n);
  }

  void reserve(std::size_t n)
  {
    rehash(std::size_t(std::ceil(float(n)/mlf)));
  }

  template<typename Predicate>
  friend std::size_t erase_if(table& x,Predicate pr)
  {
    return x.erase_if_impl(pr);
  }

private:
  template<typename,typename,typename,typename,typename> friend class table;
  using element_type=typename type_policy::element_type;
  using element_allocator_type=allocator_rebind_t<Allocator,element_type>;
  using arrays_type=table_arrays<element_type,group_type,size_policy>;

  struct clear_on_exit
  {
    ~clear_on_exit(){x.clear();}
    table& x;
  };

  Hash&            h(){return hash_base::get();}
  const Hash&      h()const{return hash_base::get();}
  Pred&            pred(){return pred_base::get();}
  const Pred&      pred()const{return pred_base::get();}
  Allocator&       al(){return allocator_base::get();}
  const Allocator& al()const{return allocator_base::get();}


#ifdef CFOA_EMBEDDED_GROUP_ACCESS
  inline auto shared_access(std::size_t pos)const
  {
    return arrays.groups[pos].shared_access();
  }

  inline auto exclusive_access(std::size_t pos)const
  {
    return arrays.groups[pos].exclusive_access();
  }

  inline auto& counter(std::size_t pos)const
  {
    return arrays.groups[pos].counter();
  }
#else
  inline auto shared_access(std::size_t pos)const
  {
    return arrays.group_accesses[pos].shared_access();
  }

  inline auto exclusive_access(std::size_t pos)const
  {
    return arrays.group_accesses[pos].exclusive_access();
  }

  inline auto& counter(std::size_t pos)const
  {
    return arrays.group_accesses[pos].counter();
  }
#endif

  arrays_type new_arrays(std::size_t n)
  {
    element_allocator_type eal=al();
    return arrays_type::new_(eal,n);
  }

  void delete_arrays(arrays_type& arrays_)noexcept
  {
    element_allocator_type eal=al();
    arrays_type::delete_(eal,arrays_);
  }

  template<typename... Args>
  void construct_element(element_type* p,Args&&... args)
  {
    type_policy::construct(al(),p,std::forward<Args>(args)...);
  }

  template<typename... Args>
  void construct_element(element_type* p,try_emplace_args_t,Args&&... args)
  {
    construct_element_from_try_emplace_args(
      p,
      std::integral_constant<bool,std::is_same<key_type,value_type>::value>{},
      std::forward<Args>(args)...);
  }

  template<typename Key,typename... Args>
  void construct_element_from_try_emplace_args(
    element_type* p,std::false_type,Key&& x,Args&&... args)
  {
    type_policy::construct(
      al(),p,
      std::piecewise_construct,
      std::forward_as_tuple(std::forward<Key>(x)),
      std::forward_as_tuple(std::forward<Args>(args)...));
  }

  /* This overload allows boost::unordered_[flat|node]_set to internally use
   * try_emplace to implement heterogeneous insert (P2363).
   */

  template<typename Key>
  void construct_element_from_try_emplace_args(
    element_type* p,std::true_type,Key&& x)
  {
    type_policy::construct(al(),p,std::forward<Key>(x));
  }

  void destroy_element(element_type* p)noexcept
  {
    type_policy::destroy(al(),p);
  }

  struct destroy_element_on_exit
  {
    ~destroy_element_on_exit(){this_->destroy_element(p);}
    table        *this_;
    element_type *p;
  };

  void copy_elements_from(const table& x)
  {
    BOOST_ASSERT(empty());
    BOOST_ASSERT(this!=std::addressof(x));
    if(arrays.groups_size_mask==x.arrays.groups_size_mask){
      fast_copy_elements_from(x);
    }
    else{
      x.for_all_elements([this](const element_type* p){
        unchecked_insert(*p);
      });
    }
  }

  void fast_copy_elements_from(const table& x)
  {
    if(arrays.elements){
      copy_elements_array_from(x);
      std::memcpy(
        arrays.groups,x.arrays.groups,
        (arrays.groups_size_mask+1)*sizeof(group_type));
      size_=x.size();
    }
  }

  void copy_elements_array_from(const table& x)
  {
    copy_elements_array_from(
      x,
      std::integral_constant<
        bool,
        std::is_same<element_type,value_type>::value&&
#if BOOST_WORKAROUND(BOOST_LIBSTDCXX_VERSION,<50000)
        /* std::is_trivially_copy_constructible not provided */
        boost::has_trivial_copy<value_type>::value
#else
        std::is_trivially_copy_constructible<value_type>::value
#endif
        &&(
          is_std_allocator<Allocator>::value||
          !alloc_has_construct<Allocator,value_type*,const value_type&>::value)
      >{}
    );
  }

  void copy_elements_array_from(const table& x,std::true_type /* -> memcpy */)
  {
    /* reinterpret_cast: GCC may complain about element_type not being
     * trivially copy-assignable when we're relying on trivial copy
     * constructibility.
     */
    std::memcpy(
      reinterpret_cast<unsigned char*>(arrays.elements),
      reinterpret_cast<unsigned char*>(x.arrays.elements),
      x.capacity()*sizeof(element_type));
  }

  void copy_elements_array_from(const table& x,std::false_type /* -> manual */)
  {
    std::size_t num_constructed=0;
    BOOST_TRY{
      x.for_all_elements([&,this](const element_type* p){
        construct_element(arrays.elements+(p-x.arrays.elements),*p);
        ++num_constructed;
      });
    }
    BOOST_CATCH(...){
      if(num_constructed){
        x.for_all_elements_while([&,this](const element_type* p){
          destroy_element(arrays.elements+(p-x.arrays.elements));
          return --num_constructed!=0;
        });
      }
      BOOST_RETHROW
    }
    BOOST_CATCH_END
  }

  void recover_slot(unsigned char* pc)
  {
    /* If this slot potentially caused overflow, we decrease the maximum load so
     * that average probe length won't increase unboundedly in repeated
     * insert/erase cycles (drift).
     */
    ml-=group_type::maybe_caused_overflow(pc);
    group_type::reset(pc);
    --size_;
  }

  void recover_slot(group_type* pg,std::size_t pos)
  {
    recover_slot(reinterpret_cast<unsigned char*>(pg)+pos);
  }

  std::size_t initial_max_load()const
  {
    static constexpr std::size_t small_capacity=2*N-1;

    auto capacity_=capacity();
    if(capacity_<=small_capacity){
      return capacity_; /* we allow 100% usage */
    }
    else{
      return (std::size_t)(mlf*(float)(capacity_));
    }
  }

  template<typename T>
  static inline auto key_from(const T& x)
    ->decltype(type_policy::extract(x))
  {
    return type_policy::extract(x);
  }

  template<typename Key,typename... Args>
  static inline const Key& key_from(
    try_emplace_args_t,const Key& x,const Args&...)
  {
    return x;
  }

  template<typename Key>
  inline std::size_t hash_for(const Key& x)const
  {
    return mix_policy::mix(h(),x);
  }

  inline std::size_t position_for(std::size_t hash)const
  {
    return position_for(hash,arrays);
  }

  static inline std::size_t position_for(
    std::size_t hash,const arrays_type& arrays_)
  {
    return size_policy::position(hash,arrays_.groups_size_index);
  }

  static inline void prefetch_elements(const element_type* p)
  {
    /* We have experimentally confirmed that ARM architectures get a higher
     * speedup when around the first half of the element slots in a group are
     * prefetched, whereas for Intel just the first cache line is best.
     * Please report back if you find better tunings for some particular
     * architectures.
     */

#if BOOST_ARCH_ARM
    /* Cache line size can't be known at compile time, so we settle on
     * the very frequent value of 64B.
     */
    constexpr int  cache_line=64;
    const char    *p0=reinterpret_cast<const char*>(p),
                  *p1=p0+sizeof(element_type)*N/2;
    for(;p0<p1;p0+=cache_line)prefetch(p0);
#else
    prefetch(p);
#endif
  }

#if defined(BOOST_MSVC)
/* warning: forcing value to bool 'true' or 'false' in bool(pred()...) */
#pragma warning(push)
#pragma warning(disable:4800)
#endif

  template<typename Key,typename F>
  BOOST_FORCEINLINE bool find_impl(
    const Key& x,F f,std::size_t pos0,std::size_t hash)const
  {    
    prober pb(pos0);
    do{
      auto pos=pb.get();
      auto pg=arrays.groups+pos;
      auto mask=pg->match(hash);
      if(mask){
        auto p=arrays.elements+pos*N;
        prefetch_elements(p);
        auto lck=shared_access(pos);
        do{
          auto n=unchecked_countr_zero(mask);
          if(
            pg->at(n)!=0&&
            BOOST_LIKELY(bool(pred()(x,key_from(p[n]))))){
            f(p[n]);
            return true;
          }
          mask&=mask-1;
        }while(mask);
      }
      if(BOOST_LIKELY(pg->is_not_overflowed(hash))){
        return false;
      }
    }
    while(BOOST_LIKELY(pb.next(arrays.groups_size_mask)));
    return false;
  }

#if defined(BOOST_MSVC)
#pragma warning(pop) /* C4800 */
#endif

  template<typename F,typename... Args>
  BOOST_FORCEINLINE bool emplace_impl(F f,Args&&... args)
  {
    const auto       &k=key_from(std::forward<Args>(args)...);
    auto             hash=hash_for(k);
    auto             pos0=position_for(hash);

    for(;;){
    startover:;
      boost::uint32_t group_counter=counter(pos0);
      if(find_impl(
        k,[&](value_type& x){f(x,false);},pos0,hash))return true;

      if(BOOST_LIKELY(size_<ml)){
        for(prober pb(pos0);;pb.next(arrays.groups_size_mask)){
          auto pos=pb.get();
          auto pg=arrays.groups+pos;
          auto mask=pg->match_available();
          if(BOOST_LIKELY(mask!=0)){
            auto lck=exclusive_access(pos);
            do{
              auto n=unchecked_countr_zero(mask);
              if(pg->at(n)==0){
                pg->set(n,hash);
                if(BOOST_UNLIKELY(counter(pos0)++!=group_counter)){
                  /* some other thread inserted from p0, need to start over */
                  pg->reset(n);
                  goto startover;
                }
                auto p=arrays.elements+pos*N+n;
                construct_element(p,std::forward<Args>(args)...);
                ++size_;
                f(*p,true);
                return true;
              }
              mask&=mask-1;
            }while(mask);
          }
          pg->mark_overflow(hash);
        }
      }
      else return false;
    }
  }

  static std::size_t capacity_for(std::size_t n)
  {
    return size_policy::size(size_index_for<group_type,size_policy>(n))*N-1;
  }

  template<typename... Args>
  BOOST_NOINLINE iterator
  unchecked_emplace_with_rehash(std::size_t hash,Args&&... args)
  {
    /* Due to the anti-drift mechanism (see recover_slot), new_arrays_ may be
     * of the same size as the old arrays; in the limit, erasing one element at
     * full load and then inserting could bring us back to the same capacity
     * after a costly rehash. To avoid this, we jump to the next capacity level
     * when the number of erased elements is <= 10% of total elements at full
     * load, which is implemented by requesting additional F*size elements,
     * with F = P * 10% / (1 - P * 10%), where P is the probability of an
     * element having caused overflow; P has been measured as ~0.162 under
     * ideal conditions, yielding F ~ 0.0165 ~ 1/61.
     */
    auto     new_arrays_=new_arrays(std::size_t(
               std::ceil(static_cast<float>(size_+size_/61+1)/mlf)));
    iterator it;
    BOOST_TRY{
      /* strong exception guarantee -> try insertion before rehash */
      it=nosize_unchecked_emplace_at(
        new_arrays_,position_for(hash,new_arrays_),
        hash,std::forward<Args>(args)...);
    }
    BOOST_CATCH(...){
      delete_arrays(new_arrays_);
      BOOST_RETHROW
    }
    BOOST_CATCH_END

    /* new_arrays_ lifetime taken care of by unchecked_rehash */
    unchecked_rehash(new_arrays_);
    ++size_;
    return it;
  }

  BOOST_NOINLINE void unchecked_rehash(std::size_t n)
  {
    auto new_arrays_=new_arrays(n);
    unchecked_rehash(new_arrays_);
  }

  BOOST_NOINLINE void unchecked_rehash(arrays_type& new_arrays_)
  {
    std::size_t num_destroyed=0;
    BOOST_TRY{
      for_all_elements([&,this](element_type* p){
        nosize_transfer_element(p,new_arrays_,num_destroyed);
      });
    }
    BOOST_CATCH(...){
      if(num_destroyed){
        for_all_elements_while(
          [&,this](group_type* pg,unsigned int n,element_type*){
            recover_slot(pg,n);
            return --num_destroyed!=0;
          }
        );
      }
      for_all_elements(new_arrays_,[this](element_type* p){
        destroy_element(p);
      });
      delete_arrays(new_arrays_);
      BOOST_RETHROW
    }
    BOOST_CATCH_END

    /* either all moved and destroyed or all copied */
    BOOST_ASSERT(num_destroyed==size()||num_destroyed==0);
    if(num_destroyed!=size()){
      for_all_elements([this](element_type* p){
        destroy_element(p);
      });
    }
    delete_arrays(arrays);
    arrays=new_arrays_;
    ml=initial_max_load();
  }

  void noshrink_reserve(std::size_t n)
  {
    /* used only on assignment after element clearance */
    BOOST_ASSERT(empty());

    if(n){
      n=std::size_t(std::ceil(float(n)/mlf)); /* elements -> slots */
      n=capacity_for(n); /* exact resulting capacity */

      if(n>capacity()){
        auto new_arrays_=new_arrays(n);
        delete_arrays(arrays);
        arrays=new_arrays_;
        ml=initial_max_load();
      }
    }
  }

  template<typename Element>
  void unchecked_insert(Element&& x)
  {
    auto hash=hash_for(key_from(x));
    unchecked_emplace_at(position_for(hash),hash,std::forward<Element>(x));
  }

  void nosize_transfer_element(
    element_type* p,const arrays_type& arrays_,std::size_t& num_destroyed)
  {
    using moved_element_type=
      decltype(type_policy::move(std::declval<element_type&>()));

    nosize_transfer_element(
      p,hash_for(key_from(*p)),arrays_,num_destroyed,
      std::integral_constant< /* std::move_if_noexcept semantics */
        bool,

        /* Node containers: nothrow move-constructible checks to true even
         * though type_policy::construct is used in place of actual move ctor.
         */
        std::is_nothrow_constructible<element_type,moved_element_type>::value||
        !std::is_copy_constructible<element_type>::value>{});
  }

  void nosize_transfer_element(
    element_type* p,std::size_t hash,const arrays_type& arrays_,
    std::size_t& num_destroyed,std::true_type /* ->move */)
  {
    /* Destroy p even if an an exception is thrown in the middle of move
     * construction, which could leave the source half-moved.
     */
    ++num_destroyed;
    destroy_element_on_exit d{this,p};
    (void)d; /* unused var warning */
    nosize_unchecked_emplace_at(
      arrays_,position_for(hash,arrays_),hash,type_policy::move(*p));
  }

  void nosize_transfer_element(
    element_type* p,std::size_t hash,const arrays_type& arrays_,
    std::size_t& /*num_destroyed*/,std::false_type /* ->copy */)
  {
    nosize_unchecked_emplace_at(
      arrays_,position_for(hash,arrays_),hash,
      const_cast<const element_type&>(*p));
  }

  template<typename... Args>
  iterator unchecked_emplace_at(
    std::size_t pos0,std::size_t hash,Args&&... args)
  {
    auto res=nosize_unchecked_emplace_at(
      arrays,pos0,hash,std::forward<Args>(args)...);
    ++size_;
    return res;
  }

  template<typename... Args>
  iterator nosize_unchecked_emplace_at(
    const arrays_type& arrays_,std::size_t pos0,std::size_t hash,
    Args&&... args)
  {
    for(prober pb(pos0);;pb.next(arrays_.groups_size_mask)){
      auto pos=pb.get();
      auto pg=arrays_.groups+pos;
      for(;;){
        auto mask=pg->match_available();
        if(BOOST_UNLIKELY(mask==0))break;
        auto n=unchecked_countr_zero(mask);
        auto p=arrays_.elements+pos*N+n;
        construct_element(p,std::forward<Args>(args)...);
        pg->set(n,hash);
        return {pg,n,p};
      }
      pg->mark_overflow(hash);
    }
  }

  template<typename Predicate>
  std::size_t erase_if_impl(Predicate pr)
  {
    std::size_t s=size();
    for_all_elements([&,this](group_type* pg,unsigned int n,element_type* p){
      if(pr(*p)) erase(iterator{pg,n,p});
    });
    return std::size_t(s-size());
  }

  template<typename F>
  void for_all_elements(F f)const
  {
    for_all_elements(arrays,f);
  }

  template<typename F>
  static auto for_all_elements(const arrays_type& arrays_,F f)
    ->decltype(f(nullptr),void())
  {
    for_all_elements_while(arrays_,[&](element_type* p){f(p);return true;});
  }

  template<typename F>
  static auto for_all_elements(const arrays_type& arrays_,F f)
    ->decltype(f(nullptr,0,nullptr),void())
  {
    for_all_elements_while(
      arrays_,[&](group_type* pg,unsigned int n,element_type* p)
        {f(pg,n,p);return true;});
  }

  template<typename F>
  void for_all_elements_while(F f)const
  {
    for_all_elements_while(arrays,f);
  }

  template<typename F>
  static auto for_all_elements_while(const arrays_type& arrays_,F f)
    ->decltype(f(nullptr),void())
  {
    for_all_elements_while(
      arrays_,[&](group_type*,unsigned int,element_type* p){return f(p);});
  }

  template<typename F>
  static auto for_all_elements_while(const arrays_type& arrays_,F f)
    ->decltype(f(nullptr,0,nullptr),void())
  {
    auto p=arrays_.elements;
    if(!p){return;}
    for(auto pg=arrays_.groups,last=pg+arrays_.groups_size_mask+1;
        pg!=last;++pg,p+=N){
      auto mask=pg->match_occupied();
      while(mask){
        auto n=unchecked_countr_zero(mask);
        if(!f(pg,n,p+n))return;
        mask&=mask-1;
      }
    }
  }

  std::atomic<std::size_t> size_;
  arrays_type              arrays;
  std::atomic<std::size_t> ml;

  using mutex_type=Mutex;
  static constexpr std::size_t num_mutexes=128;
  struct aligned_mutex
  {
    alignas(64) mutable mutex_type mtx;
  };

  std::shared_lock<mutex_type> shared_access()const
  {
    thread_local auto       id=(++thread_counter)%num_mutexes;
    //thread_local auto id=std::hash<std::thread::id>()(std::this_thread::get_id())%num_mutexes;

    return std::shared_lock<mutex_type>{mutexes[id].mtx};
  }

  struct exclusive_access_struct
  {
    exclusive_access_struct(const aligned_mutex* mutexes_):mutexes{mutexes_}
    {
      for(int i=0;i<num_mutexes;)mutexes[i++].mtx.lock();
    }

    ~exclusive_access_struct()
    {
      for(int i=num_mutexes;i>0;)mutexes[--i].mtx.unlock();
    }

    const aligned_mutex* mutexes;
  };

  auto exclusive_access()const
  {
    return exclusive_access_struct(mutexes.data());
  }

  mutable std::atomic_uint              thread_counter=0;
  std::array<aligned_mutex,num_mutexes> mutexes;
};

#if BOOST_WORKAROUND(BOOST_MSVC,<=1900)
#pragma warning(pop) /* C4702 */
#endif

#if defined(BOOST_MSVC)
#pragma warning(pop) /* C4714 */
#endif

#if defined(BOOST_GCC)
#pragma GCC diagnostic pop /* ignored "-Wshadow" */
#endif

} /* namespace cfoa */
} /* namespace detail */
} /* namespace unordered */
} /* namespace boost */

#undef BOOST_UNORDERED_ASSUME
#undef BOOST_UNORDERED_HAS_BUILTIN
#undef BOOST_UNORDERED_STATIC_ASSERT_HASH_PRED
#ifdef BOOST_UNORDERED_LITTLE_ENDIAN_NEON
#undef BOOST_UNORDERED_LITTLE_ENDIAN_NEON
#endif
#ifdef BOOST_UNORDERED_SSE2
#undef BOOST_UNORDERED_SSE2
#endif
#endif
