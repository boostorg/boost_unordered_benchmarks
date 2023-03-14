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
                boost::unordered_flat_map, single threaded:  7770 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11703 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9284 ms
                                     cfoa, single threaded: 12680 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12470 ms
                  cfoa, std::shared_mutex, single threaded: 14257 ms
                    foa::concurrent_table, single threaded: 12315 ms
                 tbb::concurrent_hash_map, single threaded: 21969 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6619 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15876 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7103 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6077 ms
                                                      cfoa:  4383 ms
                                  cfoa, tbb::spin_rw_mutex:  4934 ms
                                   cfoa, std::shared_mutex:  4854 ms
                                     foa::concurrent_table:  4765 ms
                                  tbb::concurrent_hash_map:  7557 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7867 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15433 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9948 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9533 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13137 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10504 ms
                                     cfoa, single threaded: 12909 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12983 ms
                  cfoa, std::shared_mutex, single threaded: 14848 ms
                    foa::concurrent_table, single threaded: 12947 ms
                 tbb::concurrent_hash_map, single threaded: 23977 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6204 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13453 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7383 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6916 ms
                                                      cfoa:  4707 ms
                                  cfoa, tbb::spin_rw_mutex:  4781 ms
                                   cfoa, std::shared_mutex:  5131 ms
                                     foa::concurrent_table:  4908 ms
                                  tbb::concurrent_hash_map:  7562 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8099 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18574 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11900 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23288 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26618 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24765 ms
                                     cfoa, single threaded: 24726 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25240 ms
                  cfoa, std::shared_mutex, single threaded: 25126 ms
                    foa::concurrent_table, single threaded: 24372 ms
                 tbb::concurrent_hash_map, single threaded: 42235 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10752 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9122 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9780 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10422 ms
                                                      cfoa:  8476 ms
                                  cfoa, tbb::spin_rw_mutex:  8788 ms
                                   cfoa, std::shared_mutex:  8894 ms
                                     foa::concurrent_table:  9411 ms
                                  tbb::concurrent_hash_map: 14647 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 13011 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10819 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12231 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6170 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10145 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  5972 ms
                                     cfoa, single threaded:  7567 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7573 ms
                  cfoa, std::shared_mutex, single threaded: 11623 ms
                    foa::concurrent_table, single threaded:  7416 ms
                 tbb::concurrent_hash_map, single threaded: 17459 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5589 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11327 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3423 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4456 ms
                                                      cfoa:  3789 ms
                                  cfoa, tbb::spin_rw_mutex:  3685 ms
                                   cfoa, std::shared_mutex:  4611 ms
                                     foa::concurrent_table:  3650 ms
                                  tbb::concurrent_hash_map:  5350 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6053 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11545 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3733 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1079 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1481 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1130 ms
                                     cfoa, single threaded:  1498 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1499 ms
                  cfoa, std::shared_mutex, single threaded:  1776 ms
                    foa::concurrent_table, single threaded:  1472 ms
                 tbb::concurrent_hash_map, single threaded:  2225 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   764 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1156 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   772 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   760 ms
                                                      cfoa:   671 ms
                                  cfoa, tbb::spin_rw_mutex:   694 ms
                                   cfoa, std::shared_mutex:   762 ms
                                     foa::concurrent_table:   755 ms
                                  tbb::concurrent_hash_map:   863 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1099 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1776 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   982 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1553 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1223 ms
                                     cfoa, single threaded:  1439 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1456 ms
                  cfoa, std::shared_mutex, single threaded:  1763 ms
                    foa::concurrent_table, single threaded:  1453 ms
                 tbb::concurrent_hash_map, single threaded:  2391 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   766 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2573 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   676 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   755 ms
                                                      cfoa:   645 ms
                                  cfoa, tbb::spin_rw_mutex:   640 ms
                                   cfoa, std::shared_mutex:   732 ms
                                     foa::concurrent_table:   832 ms
                                  tbb::concurrent_hash_map:   877 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1040 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1387 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1182 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1349 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1734 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1513 ms
                                     cfoa, single threaded:  2042 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2099 ms
                  cfoa, std::shared_mutex, single threaded:  2307 ms
                    foa::concurrent_table, single threaded:  2070 ms
                 tbb::concurrent_hash_map, single threaded:  4069 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1100 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   869 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   677 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   939 ms
                                                      cfoa:   782 ms
                                  cfoa, tbb::spin_rw_mutex:   772 ms
                                   cfoa, std::shared_mutex:   973 ms
                                     foa::concurrent_table:   875 ms
                                  tbb::concurrent_hash_map:  1438 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1176 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   935 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   910 ms
```
<!--vs-x86/main.cpp.txt-->
