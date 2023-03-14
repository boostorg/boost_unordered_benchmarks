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
                boost::unordered_flat_map, single threaded:  7733 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11672 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9240 ms
                                     cfoa, single threaded: 12653 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12447 ms
                  cfoa, std::shared_mutex, single threaded: 14218 ms
                    foa::concurrent_table, single threaded: 12310 ms
                 tbb::concurrent_hash_map, single threaded: 21824 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6514 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 20547 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7425 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6400 ms
                                                      cfoa:  4983 ms
                                  cfoa, tbb::spin_rw_mutex:  4480 ms
                                   cfoa, std::shared_mutex:  4836 ms
                                     foa::concurrent_table:  4969 ms
                                  tbb::concurrent_hash_map:  7567 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7794 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17395 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10733 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9232 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12839 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10264 ms
                                     cfoa, single threaded: 12655 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12689 ms
                  cfoa, std::shared_mutex, single threaded: 14536 ms
                    foa::concurrent_table, single threaded: 12642 ms
                 tbb::concurrent_hash_map, single threaded: 23312 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6266 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16936 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6734 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6674 ms
                                                      cfoa:  4799 ms
                                  cfoa, tbb::spin_rw_mutex:  4796 ms
                                   cfoa, std::shared_mutex:  5192 ms
                                     foa::concurrent_table:  5108 ms
                                  tbb::concurrent_hash_map:  7551 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8099 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20927 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12270 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21623 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24355 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23609 ms
                                     cfoa, single threaded: 24697 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24982 ms
                  cfoa, std::shared_mutex, single threaded: 25414 ms
                    foa::concurrent_table, single threaded: 24418 ms
                 tbb::concurrent_hash_map, single threaded: 43057 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11161 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8620 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9585 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10561 ms
                                                      cfoa:  9049 ms
                                  cfoa, tbb::spin_rw_mutex:  9355 ms
                                   cfoa, std::shared_mutex:  9001 ms
                                     foa::concurrent_table:  8510 ms
                                  tbb::concurrent_hash_map: 14344 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12552 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10376 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12044 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6104 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10278 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6054 ms
                                     cfoa, single threaded:  7552 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7525 ms
                  cfoa, std::shared_mutex, single threaded: 11748 ms
                    foa::concurrent_table, single threaded:  7438 ms
                 tbb::concurrent_hash_map, single threaded: 17385 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5374 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11284 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3454 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4480 ms
                                                      cfoa:  3735 ms
                                  cfoa, tbb::spin_rw_mutex:  3815 ms
                                   cfoa, std::shared_mutex:  4581 ms
                                     foa::concurrent_table:  3691 ms
                                  tbb::concurrent_hash_map:  5429 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6537 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11471 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3751 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1056 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1479 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1132 ms
                                     cfoa, single threaded:  1489 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1502 ms
                  cfoa, std::shared_mutex, single threaded:  1776 ms
                    foa::concurrent_table, single threaded:  1473 ms
                 tbb::concurrent_hash_map, single threaded:  2233 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   779 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1604 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   599 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   745 ms
                                                      cfoa:   647 ms
                                  cfoa, tbb::spin_rw_mutex:   678 ms
                                   cfoa, std::shared_mutex:   717 ms
                                     foa::concurrent_table:   882 ms
                                  tbb::concurrent_hash_map:   883 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1089 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  4461 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   764 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1132 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1556 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1227 ms
                                     cfoa, single threaded:  1466 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1759 ms
                    foa::concurrent_table, single threaded:  1451 ms
                 tbb::concurrent_hash_map, single threaded:  2388 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   765 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1317 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   815 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   783 ms
                                                      cfoa:   582 ms
                                  cfoa, tbb::spin_rw_mutex:   579 ms
                                   cfoa, std::shared_mutex:   613 ms
                                     foa::concurrent_table:   939 ms
                                  tbb::concurrent_hash_map:   896 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1006 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1264 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   899 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1368 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1820 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1549 ms
                                     cfoa, single threaded:  2103 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2107 ms
                  cfoa, std::shared_mutex, single threaded:  2295 ms
                    foa::concurrent_table, single threaded:  2006 ms
                 tbb::concurrent_hash_map, single threaded:  3951 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   998 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   783 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   784 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1071 ms
                                                      cfoa:   840 ms
                                  cfoa, tbb::spin_rw_mutex:   797 ms
                                   cfoa, std::shared_mutex:   845 ms
                                     foa::concurrent_table:   803 ms
                                  tbb::concurrent_hash_map:  1568 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1113 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   831 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   847 ms
```
<!--vs-x86/main.cpp.txt-->
