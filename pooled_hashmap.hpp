/* Copyright 2024 Joaquin M Lopez Munoz.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef POOLED_HASHMAP_HPP
#define POOLED_HASHMAP_HPP

#include <memory>
#include <memory_resource>

template<class HashMap>
struct pooled_base_impl;

template<
  template<typename...> class HashMap,
  typename Key,typename T,typename Hash,typename KeyEqual,typename Allocator
>
struct pooled_base_impl<HashMap<Key,T,Hash,KeyEqual,Allocator>>
{
  using type=HashMap<
    Key,T,Hash,KeyEqual,
    std::pmr::polymorphic_allocator<std::pair<const Key,T>>
  >;
};

template<class HashMap>
using pooled_base=typename pooled_base_impl<HashMap>::type;

struct pool_resource
{
  auto get_pool_resource(){return res.get();}

  std::shared_ptr<std::pmr::unsynchronized_pool_resource> res=
    std::make_unique<std::pmr::unsynchronized_pool_resource>();
};

template<class HashMap>
struct pooled:pool_resource,pooled_base<HashMap>
{
  using super=pooled_base<HashMap>;
  using super::super;
  using allocator_type=typename super::allocator_type;

  pooled():super{allocator_type{this->get_pool_resource()}}{}
};

#endif
