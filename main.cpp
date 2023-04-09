// Copyright 2021, 2022 Peter Dimov.
// Copyright 2022-2023 Joaquin M Lopez Munoz.
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#define _SILENCE_CXX17_OLD_ALLOCATOR_MEMBERS_DEPRECATION_WARNING
#define _SILENCE_CXX20_CISO646_REMOVED_WARNING

#include <boost/unordered/unordered_flat_map.hpp>
#include <boost/unordered/detail/foa/concurrent_table.hpp>
#include <boost/regex.hpp>
#include <vector>
#include <memory>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <fstream>
#include <string_view>
#include <string>
#include <mutex>
#include <thread>
#include <atomic>
#include <shared_mutex>
#include "rw_spinlock.hpp"
#include "cfoa.hpp"
#include "cuckoohash_map.hh"
#include "oneapi/tbb/concurrent_hash_map.h"
#include "oneapi/tbb/spin_rw_mutex.h"
#include "gtl/phmap.hpp"

#ifdef NUM_THREADS
int const Th = NUM_THREADS;
#else
int const Th = 16;
#endif

int const Sh = 512; // number of shards

using namespace std::chrono_literals;

static void print_time( std::chrono::steady_clock::time_point & t1, char const* label, std::size_t s, std::size_t size )
{
    auto t2 = std::chrono::steady_clock::now();

    std::cout << label << ": " << ( t2 - t1 ) / 1ms << " ms (s=" << s << ", size=" << size << ")\n";

    t1 = t2;
}

static std::vector<std::string> words;

static void init_words()
{
#if SIZE_MAX > UINT32_MAX

    char const* fn = "enwik9"; // http://mattmahoney.net/dc/textdata

#else

    char const* fn = "enwik8"; // ditto

#endif

    auto t1 = std::chrono::steady_clock::now();

    std::ifstream is( fn );
    std::string in( std::istreambuf_iterator<char>( is ), std::istreambuf_iterator<char>{} );

    boost::regex re( "[a-zA-Z]+");
    boost::sregex_token_iterator it( in.begin(), in.end(), re, 0 ), end;

    words.assign( it, end );

    auto t2 = std::chrono::steady_clock::now();

    std::cout << fn << ": " << words.size() << " words, " << ( t2 - t1 ) / 1ms << " ms\n\n";
}

//

template<typename Key,typename T>
struct map_policy
{
  using key_type = Key;
  using raw_key_type = typename std::remove_const<Key>::type;
  using raw_mapped_type = typename std::remove_const<T>::type;

  using init_type = std::pair<raw_key_type, raw_mapped_type>;
  using moved_type = std::pair<raw_key_type&&, raw_mapped_type&&>;
  using value_type = std::pair<Key const, T>;

  using element_type = value_type;

  static value_type& value_from(element_type& x) { return x; }

  template <class K, class V>
  static raw_key_type const& extract(std::pair<K, V> const& kv)
  {
    return kv.first;
  }

  static moved_type move(init_type& x)
  {
    return {std::move(x.first), std::move(x.second)};
  }

  static moved_type move(element_type& x)
  {
    // TODO: we probably need to launder here
    return {std::move(const_cast<raw_key_type&>(x.first)),
      std::move(const_cast<raw_mapped_type&>(x.second))};
  }

  template <class A, class... Args>
  static void construct(A& al, init_type* p, Args&&... args)
  {
    boost::allocator_construct(al, p, std::forward<Args>(args)...);
  }

  template <class A, class... Args>
  static void construct(A& al, value_type* p, Args&&... args)
  {
    boost::allocator_construct(al, p, std::forward<Args>(args)...);
  }

  template <class A> static void destroy(A& al, init_type* p) noexcept
  {
    boost::allocator_destroy(al, p);
  }

  template <class A> static void destroy(A& al, value_type* p) noexcept
  {
    boost::allocator_destroy(al, p);
  }
};

// map types

using ufm_map_type = boost::unordered_flat_map<std::string_view, std::size_t>;

using cfoa_map_type = boost::unordered::detail::cfoa::table<map_policy<std::string_view, std::size_t>, boost::hash<std::string_view>, std::equal_to<std::string_view>, std::allocator<std::pair<const std::string_view,int>>>;
using cfoa_tbb_map_type = boost::unordered::detail::cfoa::table<map_policy<std::string_view, std::size_t>, boost::hash<std::string_view>, std::equal_to<std::string_view>, std::allocator<std::pair<const std::string_view,int>>, tbb::spin_rw_mutex>;
using cfoa_shm_map_type = boost::unordered::detail::cfoa::table<map_policy<std::string_view, std::size_t>, boost::hash<std::string_view>, std::equal_to<std::string_view>, std::allocator<std::pair<const std::string_view,int>>, std::shared_mutex>;

using cfm_map_type = boost::unordered::detail::foa::concurrent_table<map_policy<std::string_view, std::size_t>, boost::hash<std::string_view>, std::equal_to<std::string_view>, std::allocator<std::pair<const std::string_view,int>>>;

using cuckoo_map_type = libcuckoo::cuckoohash_map<std::string_view, std::size_t, boost::hash<std::string_view>, std::equal_to<std::string_view>, std::allocator<std::pair<const std::string_view,int>>>;

struct tbb_hash_compare
{
    std::size_t hash( std::string_view const& x ) const
    {
        return boost::hash<std::string_view>()( x );
    }

    bool equal( std::string_view const& x, std::string_view const& y ) const
    {
        return x == y;
    }
};

using tbb_map_type = tbb::concurrent_hash_map<std::string_view, std::size_t, tbb_hash_compare>;

template<class Mutex> using gtl_map_type = gtl::parallel_flat_hash_map<std::string_view, std::size_t, boost::hash<std::string_view>, std::equal_to<std::string_view>, std::allocator<std::pair<const std::string_view, int>>, 9, Mutex>;

// map operations

inline void increment_element( ufm_map_type& map, std::string_view key )
{
    ++map[ key ];
}

inline bool contains_element( ufm_map_type const& map, std::string_view key )
{
    return map.contains( key );
}

inline void increment_element( cfoa_map_type& map, std::string_view key )
{
    map.try_emplace(
        []( auto& x, bool ){ ++x.second; },
        key, 0 );
}

inline bool contains_element( cfoa_map_type const& map, std::string_view key )
{
    return map.find( key, [&]( auto& ){} );
}

inline void increment_element( cfoa_tbb_map_type& map, std::string_view key )
{
    map.try_emplace(
        []( auto& x, bool ){ ++x.second; },
        key, 0 );
}

inline bool contains_element( cfoa_tbb_map_type const& map, std::string_view key )
{
    return map.find( key, [&]( auto& ){} );
}

inline void increment_element( cfoa_shm_map_type& map, std::string_view key )
{
    map.try_emplace(
        []( auto& x, bool ){ ++x.second; },
        key, 0 );
}

inline bool contains_element( cfoa_shm_map_type const& map, std::string_view key )
{
    return map.find( key, [&]( auto& ){} );
}

inline void increment_element( cfm_map_type& map, std::string_view key )
{
    map.try_emplace_or_visit( key, 0, []( auto& x ){ ++x.second; } );
}

inline bool contains_element( cfm_map_type const& map, std::string_view key )
{
    return map.contains( key );
}

inline void increment_element( cuckoo_map_type& map, std::string_view key )
{
    map.uprase_fn(
        key,
        []( auto& x){ ++x; return false; },
        0 );
}

inline bool contains_element( cuckoo_map_type const& map, std::string_view key )
{
    return map.contains( key );
}

inline void increment_element( tbb_map_type& map, std::string_view key )
{
    tbb_map_type::accessor acc;

    map.emplace( acc, key, 0 );
    ++acc->second;
}

inline bool contains_element( tbb_map_type const& map, std::string_view key )
{
    return map.count( key ) != 0;
}

template<class Mutex> inline void increment_element( gtl_map_type<Mutex>& map, std::string_view key )
{
    map.lazy_emplace_l(
        key,
        []( auto& x ){ ++x.second; },
        [&]( auto const& ctor ){ ctor(key, 0); });
}

template<class Mutex> inline bool contains_element( gtl_map_type<Mutex> const& map, std::string_view key )
{
    return map.contains( key );
}

//

struct null_mutex
{
    void lock() {}
    void unlock() {}
    void lock_shared() {}
    void unlock_shared() {}
};

template<class Mutex> class shared_lock
{
private:

    Mutex& mx_;

public:

    shared_lock( Mutex& mx ): mx_( mx )
    {
        mx_.lock_shared();
    }

    ~shared_lock()
    {
        mx_.unlock_shared();
    }
};

template<> class shared_lock<std::mutex>
{
private:

    using Mutex = std::mutex;

    Mutex& mx_;

public:

    shared_lock( Mutex& mx ): mx_( mx )
    {
        mx_.lock();
    }

    ~shared_lock()
    {
        mx_.unlock();
    }
};

//

template<class Map, class Mutex = null_mutex> struct single_threaded
{
    Map map;
    Mutex mtx;

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::size_t s = 0;

        for( auto const& word: words )
        {
            std::lock_guard<Mutex> lock( mtx );

            increment_element( map, word );
            ++s;
        }

        print_time( t1, "Word count", s, map.size() );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::size_t s = 0;

        for( auto const& word: words )
        {
            std::string_view w2( word );
            w2.remove_prefix( 1 );

            ::shared_lock<Mutex> lock( mtx );

            s += contains_element( map, w2 );
        }

        print_time( t1, "Contains", s, map.size() );

        std::cout << std::endl;
    }
};

//

template<class Mutex> struct ufm_locked
{
    alignas(64) boost::unordered_flat_map<std::string_view, std::size_t> map;
    alignas(64) Mutex mtx;

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    std::lock_guard<Mutex> lock( mtx );

                    ++map[ words[j] ];
                    ++s2;
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        print_time( t1, "Word count", s, map.size() );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    ::shared_lock<Mutex> lock(mtx);

                    std::string_view w2( words[j] );
                    w2.remove_prefix( 1 );

                    s2 += map.contains( w2 );
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        print_time( t1, "Contains", s, map.size() );

        std::cout << std::endl;
    }
};

template<class Mutex> struct sync_map
{
    alignas(64) boost::unordered_flat_map<std::string_view, std::size_t> map;
    alignas(64) Mutex mtx;
};

template<class Mutex> struct ufm_sharded
{
    sync_map<Mutex> sync[ Sh ];

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    auto const& word = words[ j ];

                    std::size_t hash = boost::hash<std::string_view>()( word );
                    std::size_t shard = hash % Sh;

                    std::lock_guard<Mutex> lock( sync[ shard ].mtx );

                    ++sync[ shard ].map[ word ];
                    ++s2;
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Sh; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Word count", s, n );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    std::string_view w2( words[j] );
                    w2.remove_prefix( 1 );

                    std::size_t hash = boost::hash<std::string_view>()( w2 );
                    std::size_t shard = hash % Sh;

                    std::lock_guard<Mutex> lock( sync[ shard ].mtx );

                    s2 += sync[ shard ].map.contains( w2 );
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Sh; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Contains", s, n );

        std::cout << std::endl;
    }
};

//

struct prehashed
{
    std::string_view x;
    std::size_t h;

    explicit prehashed( std::string_view x_ ): x( x_ ), h( boost::hash<std::string_view>()( x_ ) ) { }

    operator std::string_view () const
    {
        return x;
    }

    friend bool operator==( prehashed const& x, prehashed const& y )
    {
        return x.x == y.x;
    }

    friend bool operator==( prehashed const& x, std::string_view y )
    {
        return x.x == y;
    }

    friend bool operator==( std::string_view x, prehashed const& y )
    {
        return x == y.x;
    }
};

template<>
struct boost::hash< prehashed >
{
    using is_transparent = void;

    std::size_t operator()( prehashed const& x ) const
    {
        return x.h;
    }

    std::size_t operator()( std::string_view x ) const
    {
        return boost::hash<std::string_view>()( x );
    }
};

template<class Mutex> struct sync_map_prehashed
{
    alignas(64) boost::unordered_flat_map< std::string_view, std::size_t, boost::hash<prehashed>, std::equal_to<> > map;
    alignas(64) Mutex mtx;
};

template<class Mutex> struct ufm_sharded_prehashed
{
    sync_map_prehashed<Mutex> sync[ Sh ];

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    std::string_view word = words[ j ];

                    prehashed x( word );
                    std::size_t shard = x.h % Sh;

                    std::lock_guard<Mutex> lock( sync[ shard ].mtx );

                    ++sync[ shard ].map[ x ];
                    ++s2;
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Sh; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Word count", s, n );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    std::string_view w2( words[j] );
                    w2.remove_prefix( 1 );

                    prehashed x( w2 );
                    std::size_t shard = x.h % Sh;

                    ::shared_lock<Mutex> lock( sync[ shard ].mtx );

                    s2 += sync[ shard ].map.contains( x );
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Sh; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Contains", s, n );

        std::cout << std::endl;
    }
};

//

struct ufm_sharded_isolated
{
    struct
    {
        alignas(64) boost::unordered_flat_map<std::string_view, std::size_t> map;
    }
    sync[ Th ];

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, &s]{

                std::size_t s2 = 0;

                for( std::size_t j = 0; j < words.size(); ++j )
                {
                    auto const& word = words[ j ];

                    std::size_t hash = boost::hash<std::string_view>()( word );
                    std::size_t shard = hash % Th;

                    if( shard == i )
                    {
                        ++sync[ i ].map[ word ];
                        ++s2;
                    }
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Th; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Word count", s, n );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, &s]{

                std::size_t s2 = 0;

                for( std::size_t j = 0; j < words.size(); ++j )
                {
                    std::string_view w2( words[j] );
                    w2.remove_prefix( 1 );

                    std::size_t hash = boost::hash<std::string_view>()( w2 );
                    std::size_t shard = hash % Th;

                    if( shard == i )
                    {
                        s2 += sync[ i ].map.contains( w2 );
                    }
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Th; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Contains", s, n );

        std::cout << std::endl;
    }
};

struct ufm_sharded_isolated_prehashed
{
    struct
    {
        alignas(64) boost::unordered_flat_map<std::string_view, std::size_t, boost::hash<prehashed>, std::equal_to<>> map;
    }
    sync[ Th ];

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, &s]{

                std::size_t s2 = 0;

                for( std::size_t j = 0; j < words.size(); ++j )
                {
                    std::string_view word = words[ j ];

                    prehashed x( word );
                    std::size_t shard = x.h % Th;

                    if( shard == i )
                    {
                        ++sync[ i ].map[ x ];
                        ++s2;
                    }
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Th; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Word count", s, n );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, &s]{

                std::size_t s2 = 0;

                for( std::size_t j = 0; j < words.size(); ++j )
                {
                    std::string_view w2( words[j] );
                    w2.remove_prefix( 1 );

                    prehashed x( w2 );
                    std::size_t shard = x.h % Th;

                    if( shard == i )
                    {
                        s2 += sync[ i ].map.contains( x );
                    }
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        std::size_t n = 0;

        for( std::size_t i = 0; i < Th; ++i )
        {
            n += sync[ i ].map.size();
        }

        print_time( t1, "Contains", s, n );

        std::cout << std::endl;
    }
};

template<class Map> struct parallel
{
    Map map;

    BOOST_NOINLINE void test_word_count( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    increment_element( map, words[j] );
                    ++s2;
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        print_time( t1, "Word count", s, map.size() );

        std::cout << std::endl;
    }

    BOOST_NOINLINE void test_contains( std::chrono::steady_clock::time_point & t1 )
    {
        std::atomic<std::size_t> s = 0;

        std::thread th[ Th ];

        std::size_t m = words.size() / Th;

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ] = std::thread( [this, i, m, &s]{

                std::size_t s2 = 0;

                std::size_t start = i * m;
                std::size_t end = i == Th-1? words.size(): (i + 1) * m;

                for( std::size_t j = start; j < end; ++j )
                {
                    std::string_view w2( words[j] );
                    w2.remove_prefix( 1 );

                    s2 += contains_element( map, w2 );
                }

                s += s2;
            });
        }

        for( std::size_t i = 0; i < Th; ++i )
        {
            th[ i ].join();
        }

        print_time( t1, "Contains", s, map.size() );

        std::cout << std::endl;
    }
};

//

struct record
{
    std::string label_;
    long long time_;
};

static std::vector<record> times;

template<class Map> BOOST_NOINLINE void test( char const* label )
{
    std::cout << label << ":\n\n";

    Map map;

    auto t0 = std::chrono::steady_clock::now();
    auto t1 = t0;

    record rec = { label, 0 };

    map.test_word_count( t1 );
    map.test_contains( t1 );

    auto tN = std::chrono::steady_clock::now();
    std::cout << "Total: " << ( tN - t0 ) / 1ms << " ms\n\n";

    rec.time_ = ( tN - t0 ) / 1ms;
    times.push_back( rec );
}

//

int main()
{
    init_words();

    test<single_threaded<ufm_map_type>>( "boost::unordered_flat_map, single threaded" );
    // test<single_threaded<ufm_map_type, std::mutex>>( "boost::unordered_flat_map, single threaded, mutex" );
    test<single_threaded<ufm_map_type, std::shared_mutex>>( "boost::unordered_flat_map, single threaded, shared_mutex" );
    test<single_threaded<ufm_map_type, rw_spinlock>>( "boost::unordered_flat_map, single threaded, rw_spinlock" );
    test<single_threaded<cfoa_map_type>>( "cfoa, single threaded" );
    test<single_threaded<cfoa_tbb_map_type>>( "cfoa, tbb::spin_rw_mutex, single threaded" );
    test<single_threaded<cfoa_shm_map_type>>( "cfoa, std::shared_mutex, single threaded" );
    test<single_threaded<cfm_map_type>>( "foa::concurrent_table, single threaded" );
    // test<single_threaded<cuckoo_map_type>>( "libcuckoo::cuckoohash_map, single threaded" );
    test<single_threaded<tbb_map_type>>( "tbb::concurrent_hash_map, single threaded" );
    // test<single_threaded<gtl_map_type<rw_spinlock>>>( "gtl::parallel_flat_hash_map<rw_spinlock>, single threaded" );

    // test<ufm_locked<std::mutex>>( "boost::unordered_flat_map, locked<mutex>" );
    // test<ufm_locked<std::shared_mutex>>( "boost::unordered_flat_map, locked<shared_mutex>" );
    // test<ufm_locked<rw_spinlock>>( "boost::unordered_flat_map, locked<rw_spinlock>" );

    // test<ufm_sharded<std::mutex>>( "boost::unordered_flat_map, sharded<mutex>" );
    test<ufm_sharded_prehashed<std::mutex>>( "boost::unordered_flat_map, sharded_prehashed<mutex>" );
    // test<ufm_sharded<std::shared_mutex>>("boost::unordered_flat_map, sharded<shared_mutex>");
    test<ufm_sharded_prehashed<std::shared_mutex>>( "boost::unordered_flat_map, sharded_prehashed<shared_mutex>" );
    // test<ufm_sharded<rw_spinlock>>( "boost::unordered_flat_map, sharded<rw_spinlock>" );
    test<ufm_sharded_prehashed<rw_spinlock>>( "boost::unordered_flat_map, sharded_prehashed<rw_spinlock>" );

    // test<ufm_sharded_isolated>( "boost::unordered_flat_map, sharded isolated" );
    test<ufm_sharded_isolated_prehashed>( "boost::unordered_flat_map, sharded isolated, prehashed" );

    test<parallel<cfoa_map_type>>( "cfoa" );
    test<parallel<cfoa_tbb_map_type>>( "cfoa, tbb::spin_rw_mutex" );
    test<parallel<cfoa_shm_map_type>>( "cfoa, std::shared_mutex" );
    test<parallel<cfm_map_type>>( "foa::concurrent_table" );

    // test<parallel<cuckoo_map_type>>( "libcuckoo::cuckoohash_map" );
    test<parallel<tbb_map_type>>( "tbb::concurrent_hash_map" );
    test<parallel<gtl_map_type<std::mutex>>>( "gtl::parallel_flat_hash_map<std::mutex>" );
    test<parallel<gtl_map_type<std::shared_mutex>>>( "gtl::parallel_flat_hash_map<std::shared_mutex>" );
    test<parallel<gtl_map_type<rw_spinlock>>>( "gtl::parallel_flat_hash_map<rw_spinlock>" );

    std::cout << "---\n\n";

    std::cout << "Number of threads: " << Th << "\n";

    for( auto const& x: times )
    {
        std::cout << std::setw( 60 ) << ( x.label_ + ": " ) << std::setw( 5 ) << x.time_ << " ms\n";
    }
}
