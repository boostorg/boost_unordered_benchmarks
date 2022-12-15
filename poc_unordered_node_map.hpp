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
#include <boost/iterator/indirect_iterator.hpp>
#include <boost/unordered/detail/foa.hpp>
#include <memory>
#include <utility>
#include <type_traits>

template<typename Allocator>
class ptr_allocator_adaptor
{
  using alloc_traits=std::allocator_traits<Allocator>;
  using ptr_allocator=typename alloc_traits::template rebind_alloc<
    typename Allocator::value_type*>;
  using ptr_alloc_traits=std::allocator_traits<ptr_allocator>;

  Allocator al;

public:
  using value_type=typename Allocator::value_type*;

  template<typename U> struct rebind
  {
    using other=ptr_allocator_adaptor<
      typename alloc_traits::template rebind_alloc<U>>;
  };

  ptr_allocator_adaptor()=default;

  template<typename Allocator2>
  ptr_allocator_adaptor(const ptr_allocator_adaptor<Allocator2>& x)noexcept:
    al{x.al}{}

  template<typename Allocator2>
  bool operator==(const ptr_allocator_adaptor<Allocator2>& x)const noexcept
  {
    return al==x.al;
  }

  template<typename Allocator2>
  bool operator!=(const ptr_allocator_adaptor<Allocator2>& x)const noexcept
  {
    return al!=x.al;
  }

  value_type* allocate(std::size_t n)
  {
    ptr_allocator pal=al;
    return ptr_alloc_traits::allocate(pal,n);
  }

  void deallocate(value_type* p,std::size_t n)noexcept
  {
    ptr_allocator pal=al;
    ptr_alloc_traits::deallocate(pal,p,n);
  }

  void construct(value_type* p,const value_type& x)
  {
    this->construct(p,*x);
  }

  void construct(value_type* p,value_type&& x)
  {
    *p=x;
    x=nullptr;
  }

  template<typename... Args>
  void construct(value_type* p,Args&&... args)
  {
    *p=alloc_traits::allocate(al,1);
    try{
      alloc_traits::construct(al,*p,std::forward<Args>(args)...);
    }
    catch(...){
      alloc_traits::deallocate(al,*p,1);
      throw;
    }
  }

  void destroy(value_type* p)noexcept
  {
    if(*p){
      alloc_traits::destroy(al,*p);
      alloc_traits::deallocate(al,*p,1);
    }
  }
};

template<
  typename Key,typename T,
  typename Hash=boost::hash<Key>,typename Pred=std::equal_to<Key>,
  typename Allocator=std::allocator<std::pair<const Key,T>>
>
class poc_unordered_node_map
{
  struct type_policy
  {
    using key_type=Key;
    using init_type=std::pair<const Key,T>*;
    using value_type=init_type;

    static const key_type& extract(value_type x){return x->first;}

    static value_type&& move(value_type& x){return std::move(x);}
  };

  using table_type=boost::unordered::detail::foa::table<
    type_policy,Hash,Pred,ptr_allocator_adaptor<Allocator>>;

  table_type t;

public:
  using key_type=Key;
  using mapped_type=T;
  using init_type=std::pair<Key,T>;
  using value_type=std::pair<const Key,T>;
  using iterator=
    boost::indirect_iterator<typename table_type::iterator>;
  using const_iterator=
    boost::indirect_iterator<typename table_type::const_iterator>;

  iterator       begin(){return t.begin();}
  const_iterator begin()const{return t.begin();}
  iterator       end(){return t.end();}
  const_iterator end()const{return t.end();}

  std::size_t size()const noexcept{return t.size();}

  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(const init_type& x)
  {
    return t.try_emplace(x.first,x.second);
  }

  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(init_type&& x)
  {
    return t.try_emplace(std::move(x.first),std::move(x.second));
  }

  template<typename=void>
  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(const value_type& x)
  {
    return t.try_emplace(x.first,x.second);
  }

  template<typename=void>
  BOOST_FORCEINLINE std::pair<iterator,bool>
  insert(value_type&& x)
  {
    return t.try_emplace(x.first,std::move(x.second));
  }

  BOOST_FORCEINLINE
  void erase(iterator pos)noexcept{return t.erase(pos.base());}

  BOOST_FORCEINLINE
  void erase(const_iterator pos)noexcept{return t.erase(pos.base());}

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
    return (*(t.try_emplace(x).first))->second;
  }

  BOOST_FORCEINLINE mapped_type& operator[](key_type&& x)
  {
    return (*(t.try_emplace(std::move(x)).first))->second;
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

#endif

