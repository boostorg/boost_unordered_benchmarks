/* Measuring lookup times of unordered associative containers
 * with duplicate elements.
 *
 * Copyright 2013-2023 Joaquin M Lopez Munoz.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include <algorithm>
#include <array>
#include <chrono>
#include <numeric>

std::chrono::high_resolution_clock::time_point measure_start,measure_pause;

template<typename F>
double measure(F f)
{
  using namespace std::chrono;

  static const int              num_trials=10;
  static const milliseconds     min_time_per_trial(200);
  std::array<double,num_trials> trials;

  for(int i=0;i<num_trials;++i){
    int                               runs=0;
    high_resolution_clock::time_point t2;
    volatile decltype(f())            res; /* to avoid optimizing f() away */

    measure_start=high_resolution_clock::now();
    do{
      res=f();
      ++runs;
      t2=high_resolution_clock::now();
    }while(t2-measure_start<min_time_per_trial);
    trials[i]=duration_cast<duration<double>>(t2-measure_start).count()/runs;
  }

  std::sort(trials.begin(),trials.end());
  return std::accumulate(
    trials.begin()+2,trials.end()-2,0.0)/(trials.size()-4);
}

void pause_timing()
{
  measure_pause=std::chrono::high_resolution_clock::now();
}

void resume_timing()
{
  measure_start+=std::chrono::high_resolution_clock::now()-measure_pause;
}

#include <boost/bind/bind.hpp>
#include <boost/ref.hpp>
#include <iostream>
#include <random>
#include <vector>

struct rand_seq
{
  rand_seq(unsigned int n,unsigned int G):mod(n/G),gen(34862){}

  unsigned int operator()()
  {
    unsigned int m=dist(gen)%mod;
    m^=0x9e3779b9+(m<<6)+(m>>2);
    return m;
  }

private:
  unsigned int                                mod;
  std::uniform_int_distribution<unsigned int> dist;
  std::mt19937                                gen;
};

template<typename Container>
Container create(unsigned int n,float Fmax,unsigned int G)
{
  Container s;
  rand_seq  rnd(n,G);
  s.max_load_factor(Fmax);
  while(n--)s.insert(rnd());
  return s;
}

template<typename Container>
struct scattered_successful_lookup
{
  typedef unsigned int result_type;

  unsigned int operator()(
    const Container& s,unsigned int n,unsigned int G)const
  {
    unsigned int                                res=0;
    rand_seq                                    rnd(n,G);
    auto                                        end_=s.end();
    while(n--){
      if(s.find(rnd())!=end_)++res;
    }
    return res;
  }
};

template<typename Container>
struct scattered_unsuccessful_lookup
{
  typedef unsigned int result_type;

  unsigned int operator()(
    const Container& s,unsigned int n,unsigned int G)const
  {
    unsigned int                                res=0;
    std::uniform_int_distribution<unsigned int> dist;
    std::mt19937                                gen(76453);
    auto                                        end_=s.end();
    while(n--){
      if(s.find(dist(gen))!=end_)++res;
    }
    return res;
  }
};

template<typename T>
boost::reference_wrapper<const T> temp_cref(T&& x)
{
  return boost::cref(static_cast<const T&>(x));
}

template<
  template<typename> class Tester,
  typename Container1,typename Container2,typename Container3>
void test(
  const char* title,
  const char* name1,const char* name2,const char* name3,
  float Fmax,unsigned int G)
{
  unsigned int n0=10000,n1=3000000,dn=500;
  double       fdn=1.05;

  std::cout<<title<<", Fmax="<<Fmax<<", G="<<G<<":"<<std::endl;
  std::cout<<name1<<";"<<name2<<";"<<name3<<std::endl;

  for(unsigned int n=n0;n<=n1;n+=dn,dn=(unsigned int)(dn*fdn)){
    double t;

    t=measure(boost::bind(
        Tester<Container1>(),
        temp_cref(create<Container1>(n,Fmax,G)),n,G));
    std::cout<<n<<";"<<(t/n)*1E9;

    t=measure(boost::bind(
      Tester<Container2>(),
      temp_cref(create<Container2>(n,Fmax,G)),n,G));
    std::cout<<";"<<(t/n)*1E9;
 
    t=measure(boost::bind(
      Tester<Container3>(),
      temp_cref(create<Container3>(n,Fmax,G)),n,G));
    std::cout<<";"<<(t/n)*1E9<<std::endl;
  }
}

#include <boost/unordered_set.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <unordered_set>

int main()
{
  using namespace boost::multi_index;

  /* some stdlibs provide the discussed but finally rejected std::identity */
  using boost::multi_index::identity; 

  typedef std::unordered_multiset<unsigned int>   container_t1;
  typedef boost::unordered_multiset<unsigned int> container_t2;
  typedef boost::multi_index_container<
    unsigned int,
    indexed_by<
      hashed_non_unique<identity<unsigned int> >
    >
  >                                               container_t3;

  test<
    scattered_successful_lookup,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered successful lookup",
    "std::unordered_multiset",
    "boost::unordered_multiset",
    "multi_index::hashed_non_unique",
    1.0,5
  );

  test<
    scattered_unsuccessful_lookup,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered unsuccessful lookup",
    "std::unordered_multiset",
    "boost::unordered_multiset",
    "multi_index::hashed_non_unique",
    1.0,5
  );

  test<
    scattered_successful_lookup,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered successful lookup",
    "std::unordered_multiset",
    "boost::unordered_multiset",
    "multi_index::hashed_non_unique",
    5.0,5
  );

  test<
    scattered_unsuccessful_lookup,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered unsuccessful lookup",
    "std::unordered_multiset",
    "boost::unordered_multiset",
    "multi_index::hashed_non_unique",
    5.0,5
  );
}
