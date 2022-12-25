/* PoC of a potential boost::unordered_node_map.
 *
 * Copyright 2022 Joaquin M Lopez Munoz.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * See https://www.boost.org/libs/unordered for library home page.
 */

#ifndef POC_BOOST_UNORDERED_NODE_MAP_HPP
#define POC_BOOST_UNORDERED_NODE_MAP_HPP

#include <boost/config.hpp>
#include <boost/container_hash/hash.hpp>
#include <memory>
#include <memory_resource>
#include <utility>
#include <type_traits>
#include "foa2.hpp"

template<typename T>
struct poc_unordered_node_policy
{
  using value_type=T;

  /* We don't use T* directly to avoid ambiguities in element construction
   * if value_type had a value_type(value_type*) ctor.
   */
  struct element_type{value_type* p;};

  static value_type& value_from(element_type& x)
  {
    return *(x.p);
  }

  static element_type&& move(element_type& x)
  {
    return std::move(x);
  }

  template<typename Allocator>
  static void construct(Allocator& al,element_type* p,const element_type& x)
  {
    construct(al,p,*(x.p));
  }

  template<typename Allocator>
  static void construct(Allocator&,element_type* p,element_type&& x)
  {
    p->p=x.p;
    x.p=nullptr;
  }

  template<typename Allocator,typename... Args>
  static void construct(Allocator& al,element_type* p,Args&&... args)
  {
    using alloc_traits=boost::allocator_traits<Allocator>;

    p->p=alloc_traits::allocate(al,1);
    BOOST_TRY{
      alloc_traits::construct(al,p->p,std::forward<Args>(args)...);
    }
    BOOST_CATCH(...){
      alloc_traits::deallocate(al,p->p,1);
      BOOST_RETHROW
    }
    BOOST_CATCH_END
  }

  template<typename Allocator>
  static void destroy(Allocator& al,element_type* p)noexcept
  {
    using alloc_traits=boost::allocator_traits<Allocator>;

    if(p->p){
      alloc_traits::destroy(al,p->p);
      alloc_traits::deallocate(al,p->p,1);
    }
  }
};

template<typename Key,typename T>
struct poc_unordered_node_map_type_policy:
  poc_unordered_node_policy<std::pair<const Key,T>>
{
  using key_type=Key;
  using raw_key_type=typename std::remove_const<Key>::type;
  using raw_mapped_type=typename std::remove_const<T>::type;

  using init_type=std::pair<raw_key_type,raw_mapped_type>;
  using typename poc_unordered_node_policy<std::pair<const Key,T>>::
    element_type;

  template <class K,class V>
  static const raw_key_type& extract(const std::pair<K,V>& kv)
  {
    return kv.first;
  }

  static const raw_key_type& extract(const element_type& x)
  {
    return extract(*(x.p));
  }
};

template<
  typename Key,typename T,
  typename Hash=boost::hash<Key>,typename Pred=std::equal_to<Key>,
  typename Allocator=std::allocator<std::pair<const Key,T>>
>
class poc_unordered_node_map
{
  using table_type=boost::unordered::detail::foa2::table<
    poc_unordered_node_map_type_policy<Key,T>,Hash,Pred,Allocator>;

  table_type t;

public:
  using key_type=Key;
  using mapped_type=T;
  using init_type=std::pair<Key,T>;
  using value_type=std::pair<const Key,T>;
  using iterator=typename table_type::iterator;
  using const_iterator=typename table_type::const_iterator;

  poc_unordered_node_map()=default;
  poc_unordered_node_map(const Allocator& al):t{0,Hash{},Pred{},al}{}

  iterator       begin(){return t.begin();}
  const_iterator begin()const{return t.begin();}
  iterator       end(){return t.end();}
  const_iterator end()const{return t.end();}

  std::size_t size()const noexcept{return t.size();}

  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(const init_type& x)
  {
    return t.insert(x);
  }

  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(init_type&& x)
  {
    return t.insert(std::move(x));
  }

  template<typename=void>
  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(const value_type& x)
  {
    return t.insert(x);
  }

  template<typename=void>
  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(value_type&& x)
  {
    return t.insert(std::move(x));
  }

  BOOST_FORCEINLINE
  void erase(iterator pos)noexcept{return t.erase(pos);}

  BOOST_FORCEINLINE
  void erase(const_iterator pos)noexcept{return t.erase(pos);}

  template<typename K>
  BOOST_FORCEINLINE
  auto erase(K&& x) -> typename std::enable_if<
    !std::is_convertible<K,iterator>::value&&
    !std::is_convertible<K,const_iterator>::value, std::size_t>::type
  {
    return t.erase(std::forward<K>(x));
  }

  BOOST_FORCEINLINE mapped_type& operator[](const key_type& x)
  {
    return t.try_emplace(x).first->second;
  }

  BOOST_FORCEINLINE mapped_type& operator[](key_type&& x)
  {
    return t.try_emplace(std::move(x)).first->second;
  }

  template<typename K>
  BOOST_FORCEINLINE std::size_t count(const K& x)const
  {
    return contains(x)?1:0;
  }

  template<typename K>
  BOOST_FORCEINLINE iterator find(const K& x){return t.find(x);}

  template<typename K>
  BOOST_FORCEINLINE const_iterator find(const K& x)const{return t.find(x);}

  template<typename K>
  BOOST_FORCEINLINE bool contains(const K& x)const
  {
    return const_iterator{t.find(x)}!=end();
  }

  float max_load_factor()const noexcept{return t.max_load_factor();}
  void rehash(std::size_t n){t.rehash(n);}
};

template<
  typename Key,typename T,
  typename Hash=boost::hash<Key>,typename Pred=std::equal_to<Key>
>
class poc_pool_unordered_node_map:
  private std::pmr::unsynchronized_pool_resource,
  public poc_unordered_node_map<
    Key,T,Hash,Pred,
    std::pmr::polymorphic_allocator<std::pair<const Key,T>>
  >
{
  using super=poc_unordered_node_map<
    Key,T,Hash,Pred,
    std::pmr::polymorphic_allocator<std::pair<const Key,T>>>;
public:
  poc_pool_unordered_node_map():
    super{std::pmr::polymorphic_allocator<std::pair<const Key,T>>(this)}
  {}
};

#endif
