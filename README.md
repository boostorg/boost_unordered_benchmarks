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
                boost::unordered_flat_map, single threaded:  7780 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12203 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9265 ms
                                     cfoa, single threaded: 12136 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12402 ms
                  cfoa, std::shared_mutex, single threaded: 14169 ms
                    foa::concurrent_table, single threaded: 12062 ms
               boost::concurrent_flat_map, single threaded: 12070 ms
                 tbb::concurrent_hash_map, single threaded: 21914 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6360 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17375 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6909 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5943 ms
                                                      cfoa:  5687 ms
                                  cfoa, tbb::spin_rw_mutex:  6092 ms
                                   cfoa, std::shared_mutex:  5216 ms
                                     foa::concurrent_table:  5351 ms
                                boost::concurrent_flat_map:  5561 ms
                                  tbb::concurrent_hash_map:  7448 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8573 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19183 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9937 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9160 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12777 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10186 ms
                                     cfoa, single threaded: 12372 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12369 ms
                  cfoa, std::shared_mutex, single threaded: 14497 ms
                    foa::concurrent_table, single threaded: 12393 ms
               boost::concurrent_flat_map, single threaded: 12450 ms
                 tbb::concurrent_hash_map, single threaded: 22902 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6286 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17221 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6802 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6769 ms
                                                      cfoa:  6397 ms
                                  cfoa, tbb::spin_rw_mutex:  6453 ms
                                   cfoa, std::shared_mutex:  5938 ms
                                     foa::concurrent_table:  5231 ms
                                boost::concurrent_flat_map:  5536 ms
                                  tbb::concurrent_hash_map:  7498 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20016 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12028 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23123 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26752 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25780 ms
                                     cfoa, single threaded: 26721 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26858 ms
                  cfoa, std::shared_mutex, single threaded: 26777 ms
                    foa::concurrent_table, single threaded: 26308 ms
               boost::concurrent_flat_map, single threaded: 26516 ms
                 tbb::concurrent_hash_map, single threaded: 44207 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11096 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8374 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9676 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10235 ms
                                                      cfoa:  9374 ms
                                  cfoa, tbb::spin_rw_mutex:  9703 ms
                                   cfoa, std::shared_mutex: 10119 ms
                                     foa::concurrent_table:  9106 ms
                                boost::concurrent_flat_map:  9903 ms
                                  tbb::concurrent_hash_map: 15347 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12610 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10502 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12083 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5712 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10185 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6066 ms
                                     cfoa, single threaded:  7536 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7639 ms
                  cfoa, std::shared_mutex, single threaded: 11854 ms
                    foa::concurrent_table, single threaded:  7468 ms
               boost::concurrent_flat_map, single threaded:  7620 ms
                 tbb::concurrent_hash_map, single threaded: 17365 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5386 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11341 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3468 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4503 ms
                                                      cfoa:  3915 ms
                                  cfoa, tbb::spin_rw_mutex:  4076 ms
                                   cfoa, std::shared_mutex:  4740 ms
                                     foa::concurrent_table:  3904 ms
                                boost::concurrent_flat_map:  3983 ms
                                  tbb::concurrent_hash_map:  5389 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6328 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11267 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3756 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1063 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1516 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1160 ms
                                     cfoa, single threaded:  1530 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1545 ms
                  cfoa, std::shared_mutex, single threaded:  1850 ms
                    foa::concurrent_table, single threaded:  1489 ms
               boost::concurrent_flat_map, single threaded:  1489 ms
                 tbb::concurrent_hash_map, single threaded:  2259 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   764 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1164 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   578 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   761 ms
                                                      cfoa:   768 ms
                                  cfoa, tbb::spin_rw_mutex:   815 ms
                                   cfoa, std::shared_mutex:   736 ms
                                     foa::concurrent_table:   769 ms
                                boost::concurrent_flat_map:   843 ms
                                  tbb::concurrent_hash_map:   881 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1084 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2714 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   898 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1137 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1605 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1236 ms
                                     cfoa, single threaded:  1459 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1449 ms
                  cfoa, std::shared_mutex, single threaded:  1828 ms
                    foa::concurrent_table, single threaded:  1473 ms
               boost::concurrent_flat_map, single threaded:  1471 ms
                 tbb::concurrent_hash_map, single threaded:  2380 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   756 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1662 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   576 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   749 ms
                                                      cfoa:   815 ms
                                  cfoa, tbb::spin_rw_mutex:   869 ms
                                   cfoa, std::shared_mutex:   737 ms
                                     foa::concurrent_table:   877 ms
                                boost::concurrent_flat_map:   918 ms
                                  tbb::concurrent_hash_map:   866 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1025 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2341 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   883 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1408 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1786 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1589 ms
                                     cfoa, single threaded:  2150 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2229 ms
                  cfoa, std::shared_mutex, single threaded:  2340 ms
                    foa::concurrent_table, single threaded:  2110 ms
               boost::concurrent_flat_map, single threaded:  2070 ms
                 tbb::concurrent_hash_map, single threaded:  3965 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1027 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   791 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   704 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   986 ms
                                                      cfoa:   907 ms
                                  cfoa, tbb::spin_rw_mutex:   834 ms
                                   cfoa, std::shared_mutex:   954 ms
                                     foa::concurrent_table:   835 ms
                                boost::concurrent_flat_map:   928 ms
                                  tbb::concurrent_hash_map:  1506 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1157 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   894 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   979 ms
```
<!--vs-x86/main.cpp.txt-->
