/* Measuring performance of concurrent hashmaps under several
 * workload configurations.
 *
 * Copyright 2023 Joaquin M Lopez Munoz.
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
  static const milliseconds     min_time_per_trial(10);
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
#include <boost/unordered/concurrent_flat_map.hpp>
#include <iostream>
#include <latch>
#include <random>
#include <thread>
#include <vector>
#include "gtl/phmap.hpp"
#include "oneapi/tbb/concurrent_hash_map.h"
#include "zipfian_int_distribution.h"

using boost_map=boost::concurrent_flat_map<int,int>;

using tbb_map=tbb::concurrent_hash_map<int,int>;

using gtl_map=gtl::parallel_flat_hash_map<
  int,int,gtl::priv::hash_default_hash<int>,gtl::priv::hash_default_eq<int>,
  std::allocator<std::pair<const int,int>>,
  8,std::mutex>;

template<typename... Args>
inline void map_update(boost_map& m,Args&&... args)
{
  m.emplace_or_visit(std::forward<Args>(args)...,[](auto& x){++x.second;});
}

template<typename Key>
inline bool map_find(const boost_map& m,const Key& x)
{
  return m.contains(x);
}

template<typename... Args>
inline void map_update(tbb_map& m,Args&&... args)
{
  tbb_map::accessor acc;
  if(!m.emplace(acc,std::forward<Args>(args)...))++acc->second;
}

template<typename Key>
inline bool map_find(const tbb_map& m,const Key& x)
{
  return m.count(x);
}

template<typename Key,typename... Args>
inline void map_update(gtl_map& m,Key&& k,Args&&... args)
{
  m.lazy_emplace_l(
    k,
    [](auto& x){++x.second;},
    [&](const auto& ctor){
      ctor(std::forward<Key>(k),std::forward<Args>(args)...);});
}

template<typename Key>
inline bool map_find(const gtl_map& m,const Key& x)
{
  return m.contains(x);
}

template<typename Distribution>
class updater
{
public:
  updater(const Distribution& dist_):dist{dist_}{}

  template<typename Map,typename URNG>
  void operator()(Map& m,URNG& gen)
  {
    map_update(m,dist(gen),0);
  }

private:
  Distribution dist;
};

template<typename Distribution>
class finder
{
public:
  finder(const Distribution& dist_):dist{dist_}{}

  template<typename Map,typename URNG>
  void operator()(const Map& m,URNG& gen)
  {
    if(map_find(m,dist(gen)))++res;
  }

  int res=0;

private:
  Distribution dist;
};

template<typename Map>
struct parallel_load
{
  using result_type=std::size_t;

  BOOST_NOINLINE result_type operator()(int N,double theta,int num_threads)const
  {
    int res=0;
    pause_timing(); 
    {
      Map                           m;
      std::vector<std::thread>      threads;
      std::vector<int>              results(num_threads);
      zipfian_int_distribution<int> zipf1{1,N,theta},
                                    zipf2{N+1,2*N,theta};
      std::latch                    ready(num_threads),
                                    start(1),
                                    completed(num_threads),
                                    finish(1);

      for(int i=0;i<num_threads;++i)threads.emplace_back([&,i,zipf1,zipf2]{
        std::discrete_distribution<>  dist({10,45,45});
        std::mt19937_64               gen(std::size_t(282472+i*213731));

        updater  update{zipf1};
        finder   successful_find{zipf1},
                 unsuccessful_find{zipf2};

        int n=i==0?(N+num_threads-1)/num_threads:N/num_threads;
        n*=10; /* so that sum(#updates(i)) = N */

        ready.count_down();
        start.wait();

        for(int j=0;j<n;++j){
          switch(dist(gen)){
            case 0:  update(m,gen); break;
            case 1:  successful_find(m,gen); break;
            case 2:
            default: unsuccessful_find(m,gen); break;
          }
        }
        results[i]=successful_find.res+unsuccessful_find.res;
        completed.count_down();
        finish.wait();
      });

      ready.wait();
      resume_timing();
      start.count_down();
      completed.wait();
      pause_timing();
      finish.count_down();
      for(int i=0;i<num_threads;++i){
        threads[i].join();
        res+=results[i];
      }
    }
    resume_timing();
    return res;
  }
};

template<
  template<typename> class Tester,
  typename Container1,typename Container2,typename Container3
>
BOOST_NOINLINE void test(
  const char* title,int N,double theta,
  const char* name1,const char* name2,const char* name3)
{
#ifdef NUM_THREADS
  const int num_threads=NUM_THREADS;
#else
  const int num_threads=16;
#endif

  std::cout<<title<<" (N="<<N<<", theta="<<theta<<"):"<<std::endl;
  std::cout<<"#threads;"<<name1<<";"<<name2<<";"<<name3<<std::endl;

  for(int n=1;n<=num_threads;++n){
    std::cout<<n<<";";
    auto t=measure(boost::bind(Tester<Container1>(),N,theta,n));
    std::cout<<10*N/t/1E6<<";";
    t=measure(boost::bind(Tester<Container2>(),N,theta,n));
    std::cout<<10*N/t/1E6<<";";
    t=measure(boost::bind(Tester<Container3>(),N,theta,n));
    std::cout<<10*N/t/1E6<<std::endl;
  }
}

int main()
{
  std::cout<<"#logical cores: "<<std::thread::hardware_concurrency()<<std::endl;

  for(auto N:{500'000,5'000'000}){
    for(auto theta:{0.01,0.5,0.99}){
      test<
        parallel_load,
        tbb_map,
        gtl_map,
        boost_map>
      (
        "Parallel load",N,theta,
        "tbb::concurrent_hash_map",
        "gtl::parallel_flat_hash_map",
        "boost::concurrent_flat_map"
      );
    }
  }
}
