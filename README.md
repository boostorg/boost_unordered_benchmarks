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
                boost::unordered_flat_map, single threaded:  7766 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11716 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9258 ms
                                     cfoa, single threaded: 12668 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12443 ms
                  cfoa, std::shared_mutex, single threaded: 14214 ms
                    foa::concurrent_table, single threaded: 12192 ms
                 tbb::concurrent_hash_map, single threaded: 21909 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6571 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 10939 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6579 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5579 ms
                                                      cfoa:  4926 ms
                                  cfoa, tbb::spin_rw_mutex:  5144 ms
                                   cfoa, std::shared_mutex:  4977 ms
                                     foa::concurrent_table:  4992 ms
                                  tbb::concurrent_hash_map:  7641 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7919 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15608 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10755 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9308 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12971 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10340 ms
                                     cfoa, single threaded: 12700 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12933 ms
                  cfoa, std::shared_mutex, single threaded: 14937 ms
                    foa::concurrent_table, single threaded: 12966 ms
                 tbb::concurrent_hash_map, single threaded: 23922 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6360 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15767 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7295 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6331 ms
                                                      cfoa:  4951 ms
                                  cfoa, tbb::spin_rw_mutex:  4780 ms
                                   cfoa, std::shared_mutex:  4960 ms
                                     foa::concurrent_table:  5231 ms
                                  tbb::concurrent_hash_map:  7547 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8009 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17714 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12502 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22957 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26124 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25312 ms
                                     cfoa, single threaded: 25141 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25313 ms
                  cfoa, std::shared_mutex, single threaded: 25469 ms
                    foa::concurrent_table, single threaded: 24545 ms
                 tbb::concurrent_hash_map, single threaded: 42987 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11098 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9176 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9759 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10088 ms
                                                      cfoa:  8611 ms
                                  cfoa, tbb::spin_rw_mutex:  8754 ms
                                   cfoa, std::shared_mutex:  9154 ms
                                     foa::concurrent_table:  9435 ms
                                  tbb::concurrent_hash_map: 14580 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12210 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10318 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12306 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6457 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10164 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6049 ms
                                     cfoa, single threaded:  7549 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7539 ms
                  cfoa, std::shared_mutex, single threaded: 11630 ms
                    foa::concurrent_table, single threaded:  7427 ms
                 tbb::concurrent_hash_map, single threaded: 17409 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5328 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11208 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3426 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4449 ms
                                                      cfoa:  3855 ms
                                  cfoa, tbb::spin_rw_mutex:  3855 ms
                                   cfoa, std::shared_mutex:  4764 ms
                                     foa::concurrent_table:  3681 ms
                                  tbb::concurrent_hash_map:  5362 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6504 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11352 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3895 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1050 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1480 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1133 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1523 ms
                  cfoa, std::shared_mutex, single threaded:  1796 ms
                    foa::concurrent_table, single threaded:  1494 ms
                 tbb::concurrent_hash_map, single threaded:  2236 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   767 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2005 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   700 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   776 ms
                                                      cfoa:   855 ms
                                  cfoa, tbb::spin_rw_mutex:   869 ms
                                   cfoa, std::shared_mutex:   836 ms
                                     foa::concurrent_table:   834 ms
                                  tbb::concurrent_hash_map:   883 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1104 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2096 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1004 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1578 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1223 ms
                                     cfoa, single threaded:  1476 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1481 ms
                  cfoa, std::shared_mutex, single threaded:  1783 ms
                    foa::concurrent_table, single threaded:  1455 ms
                 tbb::concurrent_hash_map, single threaded:  2379 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   752 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2159 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   690 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   777 ms
                                                      cfoa:   769 ms
                                  cfoa, tbb::spin_rw_mutex:   854 ms
                                   cfoa, std::shared_mutex:   818 ms
                                     foa::concurrent_table:   886 ms
                                  tbb::concurrent_hash_map:   873 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1033 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2588 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   886 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1306 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1701 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1562 ms
                                     cfoa, single threaded:  2082 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2080 ms
                  cfoa, std::shared_mutex, single threaded:  2289 ms
                    foa::concurrent_table, single threaded:  1973 ms
                 tbb::concurrent_hash_map, single threaded:  3967 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   940 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   762 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   699 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   952 ms
                                                      cfoa:   852 ms
                                  cfoa, tbb::spin_rw_mutex:   861 ms
                                   cfoa, std::shared_mutex:   927 ms
                                     foa::concurrent_table:   747 ms
                                  tbb::concurrent_hash_map:  1535 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1055 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   943 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   877 ms
```
<!--vs-x86/main.cpp.txt-->
