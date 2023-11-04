/* Measuring erasure times of unordered associative containers
 * without duplicate elements.
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
#include <iostream>
#include <random>
#include <vector>

struct rand_seq
{
  rand_seq(unsigned int):gen(34862){}
  unsigned int operator()(){return dist(gen);}

private:
  std::uniform_int_distribution<unsigned int> dist;
  std::mt19937                                gen;
};

template<typename Container>
struct scattered_erasure
{
  typedef unsigned int result_type;

  unsigned int operator()(unsigned int n)const
  {
    unsigned int res=0;
    {
      pause_timing();
      Container s;
      rand_seq  rnd(n);
      while(n--)s.insert(rnd());
      res=s.size();
      std::vector<typename Container::iterator> v;
      v.reserve(s.size());
      for(auto it=s.begin();it!=s.end();++it)v.push_back(it);
      std::mt19937 gen(73642);
      std::shuffle(v.begin(),v.end(),gen);
      resume_timing();
      for(auto it:v)s.erase(it);
      pause_timing();
    }
    resume_timing();
    return res;
  }
};

template<
  template<typename> class Tester,
  typename Container1,typename Container2,typename Container3>
void test(
  const char* title,
  const char* name1,const char* name2,const char* name3)
{
  unsigned int n0=10000,n1=3000000,dn=500;
  double       fdn=1.05;

  std::cout<<title<<":"<<std::endl;
  std::cout<<name1<<";"<<name2<<";"<<name3<<std::endl;

  for(unsigned int n=n0;n<=n1;n+=dn,dn=(unsigned int)(dn*fdn)){
    double t;
    unsigned int m=Tester<Container1>()(n);

    t=measure(boost::bind(Tester<Container1>(),n));
    std::cout<<m<<";"<<(t/m)*1E9;

    t=measure(boost::bind(Tester<Container2>(),n));
    std::cout<<";"<<(t/m)*1E9;
 
    t=measure(boost::bind(Tester<Container3>(),n));
    std::cout<<";"<<(t/m)*1E9<<std::endl;
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

  typedef std::unordered_set<unsigned int>        container_t1;
  typedef boost::unordered_set<unsigned int>      container_t2;
  typedef boost::multi_index_container<
    unsigned int,
    indexed_by<
      hashed_unique<identity<unsigned int> >
    >
  >                                               container_t3;

  test<
    scattered_erasure,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered erasure",
    "std::unordered_set",
    "boost::unordered_set",
    "multi_index::hashed_unique"
  );
}
