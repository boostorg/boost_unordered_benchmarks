/* Measuring erasure times of unordered associative containers
 * with duplicate elements.
 *
 * Copyright 2013-2022 Joaquin M Lopez Munoz.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include <boost/core/detail/splitmix64.hpp>
#include <algorithm>
#include <array>
#include <chrono>
#include <numeric>
#include <string>

// fnv1a_hash

template<int Bits> struct fnv1a_hash_impl;

template<> struct fnv1a_hash_impl<32>
{
    std::size_t operator()( std::string const& s ) const
    {
        std::size_t h = 0x811C9DC5u;

        char const * first = s.data();
        char const * last = first + s.size();

        for( ; first != last; ++first )
        {
            h ^= static_cast<unsigned char>( *first );
            h *= 0x01000193ul;
        }

        return h;
    }
};

template<> struct fnv1a_hash_impl<64>
{
    std::size_t operator()( std::string const& s ) const
    {
        std::size_t h = 0xCBF29CE484222325ull;

        char const * first = s.data();
        char const * last = first + s.size();

        for( ; first != last; ++first )
        {
            h ^= static_cast<unsigned char>( *first );
            h *= 0x00000100000001B3ull;
        }

        return h;
    }
};

struct fnv1a_hash: fnv1a_hash_impl< std::numeric_limits<std::size_t>::digits > {};

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

    measure_start=high_resolution_clock::now();
    do{
      f();
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

static std::vector<std::string> words;

static std::string make_random_word( unsigned x )
{
    char buffer[ 64 ];
    std::snprintf( buffer, sizeof(buffer), "pfx_%0*d_%u_sfx", x % 8 + 1, 0, x );

    return buffer;
}

static void init_words(unsigned n) {
  words.clear();
  words.reserve(n);

  boost::detail::splitmix64 rng;

  for (auto i = 0u; i < n; ++i) {
    auto const word = make_random_word( rng() );
    words.push_back( word );
  }
}

template<typename Container>
struct scattered_erasure
{
  typedef void result_type;

  template<typename Vector>
  void operator()(unsigned int n,float Fmax,unsigned int G,const Vector& vec)const
  {
    {
      pause_timing();
      Container s;
      s.max_load_factor(Fmax);
      unsigned int mod=n/G;
      for (auto i = 0u; i < n; ++i) {
        auto const& w = words[i%mod];
        s.insert(w);
      }
      resume_timing();
      for (const auto& w: vec) {
        s.erase(w);
      }
      pause_timing();
    }
    resume_timing();
  }
};

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

  init_words(n1);

  std::cout<<title<<", Fmax="<<Fmax<<", G="<<G<<":"<<std::endl;
  std::cout<<name1<<";"<<name2<<";"<<name3<<std::endl;

  for(unsigned int n=n0;n<=n1;n+=dn,dn=(unsigned int)(dn*fdn)){
    double t;
    unsigned int mod=n/G;
    std::mt19937 gen(73642);
    auto vec = std::vector<std::string>(words.begin(), words.begin() + mod);
    std::shuffle(vec.begin(), vec.end(), gen);

    t=measure(boost::bind(Tester<Container1>(),n,Fmax,G,boost::cref(vec)));
    std::cout<<n<<";"<<(t/n)*10E6;

    t=measure(boost::bind(Tester<Container2>(),n,Fmax,G,boost::cref(vec)));
    std::cout<<";"<<(t/n)*10E6;
 
    t=measure(boost::bind(Tester<Container3>(),n,Fmax,G,boost::cref(vec)));
    std::cout<<";"<<(t/n)*10E6<<std::endl;
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

  typedef std::unordered_multiset<std::string, std::hash<std::string>>   container_t1;
  typedef boost::unordered_multiset<std::string, std::hash<std::string>> container_t2;
  typedef boost::multi_index_container<
    std::string,
    indexed_by<
      hashed_non_unique<identity<std::string>, std::hash<std::string> >
    >
  >                                                                      container_t3;

  test<
    scattered_erasure,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered erasure",
    "std::unordered_multiset",
    "boost::unordered_multiset",
    "multi_index::hashed_non_unique",
    1.0,5
  );

  test<
    scattered_erasure,
    container_t1,
    container_t2,
    container_t3>
  (
    "Scattered erasure",
    "std::unordered_multiset",
    "boost::unordered_multiset",
    "multi_index::hashed_non_unique",
    5.0,5
  );
}
