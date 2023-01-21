# Parallel hashmap benchmarks

## Benchmarks

TBW

## Detailed results
### Folder
* `gcc-x64`: GCC 11, x64
* `clang-x64`: Clang 12, x64
* `vs-x64`: Visual Studio 2019, x64
* `clang-arm64`: Clang 12 ARM64
* `gcc-x86`: GCC 11, x86
* `clang-x86`: Clang 12, x86
* `vs-x86`: Visual Studio 2019, x86

## Summary results

### GCC 11, x64
<!--gcc-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  8550 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12566 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9479 ms
                           concurrent_foa, single threaded: 13341 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13390 ms
        concurrent_foa, std::shared_mutex, single threaded: 15228 ms
                 tbb::concurrent_hash_map, single threaded: 22762 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6742 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16291 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7757 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  8048 ms
                                            concurrent foa:  4658 ms
                        concurrent foa, tbb::spin_rw_mutex:  4708 ms
                         concurrent foa, std::shared_mutex:  4777 ms
                                  tbb::concurrent_hash_map:  7476 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6791 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 30274 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9889 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9278 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12937 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10318 ms
                           concurrent_foa, single threaded: 12856 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12813 ms
        concurrent_foa, std::shared_mutex, single threaded: 15029 ms
                 tbb::concurrent_hash_map, single threaded: 23366 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6653 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13359 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7191 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7687 ms
                                            concurrent foa:  4518 ms
                        concurrent foa, tbb::spin_rw_mutex:  4578 ms
                         concurrent foa, std::shared_mutex:  5203 ms
                                  tbb::concurrent_hash_map:  7714 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8256 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21120 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12013 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20891 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25021 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25658 ms
                           concurrent_foa, single threaded: 28584 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 29208 ms
        concurrent_foa, std::shared_mutex, single threaded: 29006 ms
                 tbb::concurrent_hash_map, single threaded: 45571 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11294 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8555 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10245 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  9644 ms
                                            concurrent foa:  9701 ms
                        concurrent foa, tbb::spin_rw_mutex: 10034 ms
                         concurrent foa, std::shared_mutex:  9831 ms
                                  tbb::concurrent_hash_map: 15041 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12992 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11012 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12562 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5727 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10252 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6041 ms
                           concurrent_foa, single threaded:  7446 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7504 ms
        concurrent_foa, std::shared_mutex, single threaded: 11781 ms
                 tbb::concurrent_hash_map, single threaded: 17548 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5323 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11325 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3419 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4743 ms
                                            concurrent foa:  4160 ms
                        concurrent foa, tbb::spin_rw_mutex:  4257 ms
                         concurrent foa, std::shared_mutex:  4669 ms
                                  tbb::concurrent_hash_map:  5362 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  5882 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11617 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3737 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   959 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1399 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1150 ms
                           concurrent_foa, single threaded:  1495 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1509 ms
        concurrent_foa, std::shared_mutex, single threaded:  1789 ms
                 tbb::concurrent_hash_map, single threaded:  2253 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   835 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1264 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   736 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   786 ms
                                            concurrent foa:   585 ms
                        concurrent foa, tbb::spin_rw_mutex:   557 ms
                         concurrent foa, std::shared_mutex:   596 ms
                                  tbb::concurrent_hash_map:   835 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1145 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  4261 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   743 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1072 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1496 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1128 ms
                           concurrent_foa, single threaded:  1389 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1385 ms
        concurrent_foa, std::shared_mutex, single threaded:  1680 ms
                 tbb::concurrent_hash_map, single threaded:  2338 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   757 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1884 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   589 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   811 ms
                                            concurrent foa:   565 ms
                        concurrent foa, tbb::spin_rw_mutex:   547 ms
                         concurrent foa, std::shared_mutex:   616 ms
                                  tbb::concurrent_hash_map:   863 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2634 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   922 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1329 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1802 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1522 ms
                           concurrent_foa, single threaded:  2131 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  2189 ms
        concurrent_foa, std::shared_mutex, single threaded:  2502 ms
                 tbb::concurrent_hash_map, single threaded:  4178 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1046 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   818 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   672 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   949 ms
                                            concurrent foa:   753 ms
                        concurrent foa, tbb::spin_rw_mutex:   754 ms
                         concurrent foa, std::shared_mutex:   787 ms
                                  tbb::concurrent_hash_map:  1476 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1112 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   899 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   860 ms
```
<!--vs-x86/main.cpp.txt-->
