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
                boost::unordered_flat_map, single threaded:  7649 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11650 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9300 ms
                                     cfoa, single threaded: 12714 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12471 ms
                  cfoa, std::shared_mutex, single threaded: 14215 ms
                    foa::concurrent_table, single threaded: 12187 ms
                 tbb::concurrent_hash_map, single threaded: 21888 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6450 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18775 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7125 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5655 ms
                                                      cfoa:  4639 ms
                                  cfoa, tbb::spin_rw_mutex:  4798 ms
                                   cfoa, std::shared_mutex:  4729 ms
                                     foa::concurrent_table:  4397 ms
                                  tbb::concurrent_hash_map:  7495 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7720 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22093 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9423 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9502 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13067 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10481 ms
                                     cfoa, single threaded: 12876 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12886 ms
                  cfoa, std::shared_mutex, single threaded: 14898 ms
                    foa::concurrent_table, single threaded: 12773 ms
                 tbb::concurrent_hash_map, single threaded: 23702 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6071 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16011 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7510 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6720 ms
                                                      cfoa:  4901 ms
                                  cfoa, tbb::spin_rw_mutex:  4974 ms
                                   cfoa, std::shared_mutex:  5237 ms
                                     foa::concurrent_table:  4818 ms
                                  tbb::concurrent_hash_map:  7532 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8067 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17878 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11850 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21572 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24436 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23384 ms
                                     cfoa, single threaded: 24691 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25196 ms
                  cfoa, std::shared_mutex, single threaded: 25116 ms
                    foa::concurrent_table, single threaded: 25503 ms
                 tbb::concurrent_hash_map, single threaded: 42864 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10745 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8925 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10164 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10498 ms
                                                      cfoa:  9343 ms
                                  cfoa, tbb::spin_rw_mutex:  8600 ms
                                   cfoa, std::shared_mutex:  9179 ms
                                     foa::concurrent_table:  9319 ms
                                  tbb::concurrent_hash_map: 14611 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12649 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10793 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11515 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5660 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10119 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6070 ms
                                     cfoa, single threaded:  7533 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7558 ms
                  cfoa, std::shared_mutex, single threaded: 11626 ms
                    foa::concurrent_table, single threaded:  7365 ms
                 tbb::concurrent_hash_map, single threaded: 17399 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5329 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11501 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3436 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4565 ms
                                                      cfoa:  3782 ms
                                  cfoa, tbb::spin_rw_mutex:  3690 ms
                                   cfoa, std::shared_mutex:  4679 ms
                                     foa::concurrent_table:  3822 ms
                                  tbb::concurrent_hash_map:  5638 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6338 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11767 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3791 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1055 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1479 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1140 ms
                                     cfoa, single threaded:  1515 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1531 ms
                  cfoa, std::shared_mutex, single threaded:  1792 ms
                    foa::concurrent_table, single threaded:  1509 ms
                 tbb::concurrent_hash_map, single threaded:  2249 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   763 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1409 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   613 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   763 ms
                                                      cfoa:   806 ms
                                  cfoa, tbb::spin_rw_mutex:  1009 ms
                                   cfoa, std::shared_mutex:   816 ms
                                     foa::concurrent_table:   820 ms
                                  tbb::concurrent_hash_map:   862 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1098 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1982 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1121 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1555 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1230 ms
                                     cfoa, single threaded:  1474 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1485 ms
                  cfoa, std::shared_mutex, single threaded:  1788 ms
                    foa::concurrent_table, single threaded:  1465 ms
                 tbb::concurrent_hash_map, single threaded:  2383 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1155 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   712 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   753 ms
                                                      cfoa:   879 ms
                                  cfoa, tbb::spin_rw_mutex:   932 ms
                                   cfoa, std::shared_mutex:   776 ms
                                     foa::concurrent_table:   760 ms
                                  tbb::concurrent_hash_map:   886 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1027 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1113 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1078 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1459 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1722 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1517 ms
                                     cfoa, single threaded:  2081 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2064 ms
                  cfoa, std::shared_mutex, single threaded:  2352 ms
                    foa::concurrent_table, single threaded:  2053 ms
                 tbb::concurrent_hash_map, single threaded:  3996 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   934 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   849 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   828 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1078 ms
                                                      cfoa:   854 ms
                                  cfoa, tbb::spin_rw_mutex:   825 ms
                                   cfoa, std::shared_mutex:   993 ms
                                     foa::concurrent_table:   805 ms
                                  tbb::concurrent_hash_map:  1461 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1146 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   891 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   775 ms
```
<!--vs-x86/main.cpp.txt-->
