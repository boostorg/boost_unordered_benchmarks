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
                boost::unordered_flat_map, single threaded:  8010 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11953 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9575 ms
                                     cfoa, single threaded: 12999 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12765 ms
                  cfoa, std::shared_mutex, single threaded: 14676 ms
                    foa::concurrent_table, single threaded: 12303 ms
                 tbb::concurrent_hash_map, single threaded: 22494 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6530 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18297 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7081 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5871 ms
                                                      cfoa:  4872 ms
                                  cfoa, tbb::spin_rw_mutex:  5086 ms
                                   cfoa, std::shared_mutex:  4971 ms
                                     foa::concurrent_table:  4471 ms
                                  tbb::concurrent_hash_map:  7308 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7726 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15371 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10103 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9216 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12882 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10264 ms
                                     cfoa, single threaded: 12573 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12634 ms
                  cfoa, std::shared_mutex, single threaded: 14561 ms
                    foa::concurrent_table, single threaded: 12425 ms
                 tbb::concurrent_hash_map, single threaded: 23126 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6150 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17638 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7628 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6695 ms
                                                      cfoa:  5219 ms
                                  cfoa, tbb::spin_rw_mutex:  4970 ms
                                   cfoa, std::shared_mutex:  5310 ms
                                     foa::concurrent_table:  5270 ms
                                  tbb::concurrent_hash_map:  7622 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8073 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17556 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12848 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20919 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24958 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23878 ms
                                     cfoa, single threaded: 24627 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25486 ms
                  cfoa, std::shared_mutex, single threaded: 25110 ms
                    foa::concurrent_table, single threaded: 27027 ms
                 tbb::concurrent_hash_map, single threaded: 43338 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11649 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8923 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9773 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10401 ms
                                                      cfoa:  8487 ms
                                  cfoa, tbb::spin_rw_mutex:  9145 ms
                                   cfoa, std::shared_mutex:  8539 ms
                                     foa::concurrent_table:  9581 ms
                                  tbb::concurrent_hash_map: 15251 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12448 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10239 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11477 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5735 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10146 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6024 ms
                                     cfoa, single threaded:  7503 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7585 ms
                  cfoa, std::shared_mutex, single threaded: 11629 ms
                    foa::concurrent_table, single threaded:  7274 ms
                 tbb::concurrent_hash_map, single threaded: 17285 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5350 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11725 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3441 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4433 ms
                                                      cfoa:  3787 ms
                                  cfoa, tbb::spin_rw_mutex:  3978 ms
                                   cfoa, std::shared_mutex:  4568 ms
                                     foa::concurrent_table:  4036 ms
                                  tbb::concurrent_hash_map:  5327 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6460 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11575 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3736 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1052 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1479 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1139 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1535 ms
                  cfoa, std::shared_mutex, single threaded:  1798 ms
                    foa::concurrent_table, single threaded:  1510 ms
                 tbb::concurrent_hash_map, single threaded:  2243 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   761 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1377 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   604 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   768 ms
                                                      cfoa:   786 ms
                                  cfoa, tbb::spin_rw_mutex:   874 ms
                                   cfoa, std::shared_mutex:   785 ms
                                     foa::concurrent_table:   645 ms
                                  tbb::concurrent_hash_map:   873 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1112 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1141 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   908 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1571 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1473 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1486 ms
                  cfoa, std::shared_mutex, single threaded:  1816 ms
                    foa::concurrent_table, single threaded:  1462 ms
                 tbb::concurrent_hash_map, single threaded:  2387 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1830 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   724 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   796 ms
                                                      cfoa:   704 ms
                                  cfoa, tbb::spin_rw_mutex:   942 ms
                                   cfoa, std::shared_mutex:   819 ms
                                     foa::concurrent_table:   716 ms
                                  tbb::concurrent_hash_map:   887 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1007 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2014 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1047 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1322 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1781 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1578 ms
                                     cfoa, single threaded:  2099 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2105 ms
                  cfoa, std::shared_mutex, single threaded:  2316 ms
                    foa::concurrent_table, single threaded:  2094 ms
                 tbb::concurrent_hash_map, single threaded:  4031 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   941 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   802 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   786 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   803 ms
                                                      cfoa:   856 ms
                                  cfoa, tbb::spin_rw_mutex:   844 ms
                                   cfoa, std::shared_mutex:   948 ms
                                     foa::concurrent_table:   815 ms
                                  tbb::concurrent_hash_map:  1191 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1131 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   834 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   837 ms
```
<!--vs-x86/main.cpp.txt-->
