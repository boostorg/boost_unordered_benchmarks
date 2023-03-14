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
                boost::unordered_flat_map, single threaded:  7663 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11588 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9162 ms
                                     cfoa, single threaded: 12594 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12329 ms
                  cfoa, std::shared_mutex, single threaded: 14153 ms
                    foa::concurrent_table, single threaded: 12162 ms
                 tbb::concurrent_hash_map, single threaded: 21739 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6525 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16028 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7051 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6413 ms
                                                      cfoa:  4651 ms
                                  cfoa, tbb::spin_rw_mutex:  4638 ms
                                   cfoa, std::shared_mutex:  4877 ms
                                     foa::concurrent_table:  4729 ms
                                  tbb::concurrent_hash_map:  7440 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7810 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18796 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10172 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9127 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12763 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10189 ms
                                     cfoa, single threaded: 12639 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12676 ms
                  cfoa, std::shared_mutex, single threaded: 14795 ms
                    foa::concurrent_table, single threaded: 12650 ms
                 tbb::concurrent_hash_map, single threaded: 23141 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6252 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14029 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7060 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6650 ms
                                                      cfoa:  4836 ms
                                  cfoa, tbb::spin_rw_mutex:  4792 ms
                                   cfoa, std::shared_mutex:  5177 ms
                                     foa::concurrent_table:  4979 ms
                                  tbb::concurrent_hash_map:  7569 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8054 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14132 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11811 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20831 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24361 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23681 ms
                                     cfoa, single threaded: 24365 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25307 ms
                  cfoa, std::shared_mutex, single threaded: 25041 ms
                    foa::concurrent_table, single threaded: 24319 ms
                 tbb::concurrent_hash_map, single threaded: 43381 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11458 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9485 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9385 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  9867 ms
                                                      cfoa:  8849 ms
                                  cfoa, tbb::spin_rw_mutex:  8892 ms
                                   cfoa, std::shared_mutex:  8836 ms
                                     foa::concurrent_table:  8769 ms
                                  tbb::concurrent_hash_map: 13887 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12866 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10595 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11724 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5756 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10167 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6029 ms
                                     cfoa, single threaded:  7554 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7516 ms
                  cfoa, std::shared_mutex, single threaded: 11631 ms
                    foa::concurrent_table, single threaded:  7402 ms
                 tbb::concurrent_hash_map, single threaded: 17320 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5372 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11155 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3435 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4466 ms
                                                      cfoa:  3713 ms
                                  cfoa, tbb::spin_rw_mutex:  3796 ms
                                   cfoa, std::shared_mutex:  4770 ms
                                     foa::concurrent_table:  3798 ms
                                  tbb::concurrent_hash_map:  5633 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6436 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11289 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3742 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1045 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1475 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1127 ms
                                     cfoa, single threaded:  1490 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1509 ms
                  cfoa, std::shared_mutex, single threaded:  1764 ms
                    foa::concurrent_table, single threaded:  1487 ms
                 tbb::concurrent_hash_map, single threaded:  2227 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   770 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1115 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   643 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   757 ms
                                                      cfoa:   683 ms
                                  cfoa, tbb::spin_rw_mutex:   650 ms
                                   cfoa, std::shared_mutex:   748 ms
                                     foa::concurrent_table:   786 ms
                                  tbb::concurrent_hash_map:   848 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1110 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1893 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   864 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1129 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1556 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1440 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1758 ms
                    foa::concurrent_table, single threaded:  1451 ms
                 tbb::concurrent_hash_map, single threaded:  2367 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   750 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   914 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   635 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   721 ms
                                                      cfoa:   641 ms
                                  cfoa, tbb::spin_rw_mutex:   641 ms
                                   cfoa, std::shared_mutex:   764 ms
                                     foa::concurrent_table:   801 ms
                                  tbb::concurrent_hash_map:   885 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1016 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1168 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   978 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1379 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1713 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1558 ms
                                     cfoa, single threaded:  2058 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2027 ms
                  cfoa, std::shared_mutex, single threaded:  2261 ms
                    foa::concurrent_table, single threaded:  1988 ms
                 tbb::concurrent_hash_map, single threaded:  4021 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1031 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   721 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   684 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   951 ms
                                                      cfoa:   779 ms
                                  cfoa, tbb::spin_rw_mutex:   762 ms
                                   cfoa, std::shared_mutex:   867 ms
                                     foa::concurrent_table:   817 ms
                                  tbb::concurrent_hash_map:  1424 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1203 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   930 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   826 ms
```
<!--vs-x86/main.cpp.txt-->
