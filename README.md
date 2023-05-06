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
                boost::unordered_flat_map, single threaded:  7712 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11642 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9257 ms
                                     cfoa, single threaded: 12105 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12366 ms
                  cfoa, std::shared_mutex, single threaded: 14098 ms
                    foa::concurrent_table, single threaded: 11971 ms
               boost::concurrent_flat_map, single threaded: 12023 ms
                 tbb::concurrent_hash_map, single threaded: 21841 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6573 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14457 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7095 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6081 ms
                                                      cfoa:  5664 ms
                                  cfoa, tbb::spin_rw_mutex:  5642 ms
                                   cfoa, std::shared_mutex:  5140 ms
                                     foa::concurrent_table:  5667 ms
                                boost::concurrent_flat_map:  5395 ms
                                  tbb::concurrent_hash_map:  7351 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8514 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15342 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9911 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9225 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12842 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10240 ms
                                     cfoa, single threaded: 12443 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12495 ms
                  cfoa, std::shared_mutex, single threaded: 14589 ms
                    foa::concurrent_table, single threaded: 12402 ms
               boost::concurrent_flat_map, single threaded: 12496 ms
                 tbb::concurrent_hash_map, single threaded: 23035 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6199 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16334 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6844 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6485 ms
                                                      cfoa:  6267 ms
                                  cfoa, tbb::spin_rw_mutex:  6676 ms
                                   cfoa, std::shared_mutex:  5714 ms
                                     foa::concurrent_table:  5713 ms
                                boost::concurrent_flat_map:  6002 ms
                                  tbb::concurrent_hash_map:  7519 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7965 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16446 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12806 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20931 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24721 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23765 ms
                                     cfoa, single threaded: 25663 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26126 ms
                  cfoa, std::shared_mutex, single threaded: 26557 ms
                    foa::concurrent_table, single threaded: 25470 ms
               boost::concurrent_flat_map, single threaded: 25925 ms
                 tbb::concurrent_hash_map, single threaded: 42547 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11665 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9135 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9469 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10725 ms
                                                      cfoa:  9571 ms
                                  cfoa, tbb::spin_rw_mutex: 10287 ms
                                   cfoa, std::shared_mutex:  9778 ms
                                     foa::concurrent_table:  9392 ms
                                boost::concurrent_flat_map:  9872 ms
                                  tbb::concurrent_hash_map: 14942 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12379 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10783 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11888 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6464 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10216 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6057 ms
                                     cfoa, single threaded:  7509 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7590 ms
                  cfoa, std::shared_mutex, single threaded: 11846 ms
                    foa::concurrent_table, single threaded:  7426 ms
               boost::concurrent_flat_map, single threaded:  7648 ms
                 tbb::concurrent_hash_map, single threaded: 17450 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5201 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11334 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3518 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4513 ms
                                                      cfoa:  3969 ms
                                  cfoa, tbb::spin_rw_mutex:  3997 ms
                                   cfoa, std::shared_mutex:  4695 ms
                                     foa::concurrent_table:  3947 ms
                                boost::concurrent_flat_map:  4024 ms
                                  tbb::concurrent_hash_map:  5509 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6327 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11302 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3717 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1064 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1525 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1140 ms
                                     cfoa, single threaded:  1530 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1545 ms
                  cfoa, std::shared_mutex, single threaded:  1827 ms
                    foa::concurrent_table, single threaded:  1472 ms
               boost::concurrent_flat_map, single threaded:  1473 ms
                 tbb::concurrent_hash_map, single threaded:  2227 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   764 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   809 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   626 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   759 ms
                                                      cfoa:   846 ms
                                  cfoa, tbb::spin_rw_mutex:   873 ms
                                   cfoa, std::shared_mutex:   732 ms
                                     foa::concurrent_table:   864 ms
                                boost::concurrent_flat_map:   714 ms
                                  tbb::concurrent_hash_map:   869 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1092 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2883 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   956 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1136 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1577 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1234 ms
                                     cfoa, single threaded:  1451 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1469 ms
                  cfoa, std::shared_mutex, single threaded:  1836 ms
                    foa::concurrent_table, single threaded:  1467 ms
               boost::concurrent_flat_map, single threaded:  1475 ms
                 tbb::concurrent_hash_map, single threaded:  2379 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   753 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1264 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   615 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   776 ms
                                                      cfoa:   832 ms
                                  cfoa, tbb::spin_rw_mutex:   821 ms
                                   cfoa, std::shared_mutex:   708 ms
                                     foa::concurrent_table:   771 ms
                                boost::concurrent_flat_map:   904 ms
                                  tbb::concurrent_hash_map:   845 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1021 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1407 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1114 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1324 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1666 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1534 ms
                                     cfoa, single threaded:  1978 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2091 ms
                  cfoa, std::shared_mutex, single threaded:  2180 ms
                    foa::concurrent_table, single threaded:  1964 ms
               boost::concurrent_flat_map, single threaded:  2081 ms
                 tbb::concurrent_hash_map, single threaded:  3847 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1028 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   667 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   717 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   976 ms
                                                      cfoa:   805 ms
                                  cfoa, tbb::spin_rw_mutex:   751 ms
                                   cfoa, std::shared_mutex:   808 ms
                                     foa::concurrent_table:   859 ms
                                boost::concurrent_flat_map:   850 ms
                                  tbb::concurrent_hash_map:  1358 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1026 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   872 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   734 ms
```
<!--vs-x86/main.cpp.txt-->
