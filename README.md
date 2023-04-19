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
                boost::unordered_flat_map, single threaded:  7729 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11695 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9275 ms
                                     cfoa, single threaded: 12166 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12390 ms
                  cfoa, std::shared_mutex, single threaded: 14367 ms
                    foa::concurrent_table, single threaded: 12046 ms
               boost::concurrent_flat_map, single threaded: 12067 ms
                 tbb::concurrent_hash_map, single threaded: 21879 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6519 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 19265 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7255 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5824 ms
                                                      cfoa:  5923 ms
                                  cfoa, tbb::spin_rw_mutex:  5647 ms
                                   cfoa, std::shared_mutex:  5338 ms
                                     foa::concurrent_table:  5568 ms
                                boost::concurrent_flat_map:  5220 ms
                                  tbb::concurrent_hash_map:  7868 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7809 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22058 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10427 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9208 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12875 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10253 ms
                                     cfoa, single threaded: 12338 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12505 ms
                  cfoa, std::shared_mutex, single threaded: 14440 ms
                    foa::concurrent_table, single threaded: 12400 ms
               boost::concurrent_flat_map, single threaded: 12431 ms
                 tbb::concurrent_hash_map, single threaded: 22956 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6253 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18197 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7477 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6726 ms
                                                      cfoa:  6585 ms
                                  cfoa, tbb::spin_rw_mutex:  6470 ms
                                   cfoa, std::shared_mutex:  5858 ms
                                     foa::concurrent_table:  5620 ms
                                boost::concurrent_flat_map:  5619 ms
                                  tbb::concurrent_hash_map:  7622 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7998 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15715 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12276 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23235 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26809 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25042 ms
                                     cfoa, single threaded: 26147 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26250 ms
                  cfoa, std::shared_mutex, single threaded: 26688 ms
                    foa::concurrent_table, single threaded: 25500 ms
               boost::concurrent_flat_map, single threaded: 26351 ms
                 tbb::concurrent_hash_map, single threaded: 43013 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11326 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8834 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9442 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10204 ms
                                                      cfoa:  9384 ms
                                  cfoa, tbb::spin_rw_mutex:  9708 ms
                                   cfoa, std::shared_mutex: 10185 ms
                                     foa::concurrent_table:  9629 ms
                                boost::concurrent_flat_map:  9403 ms
                                  tbb::concurrent_hash_map: 14715 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12037 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10770 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11479 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6405 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10099 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6073 ms
                                     cfoa, single threaded:  7486 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7554 ms
                  cfoa, std::shared_mutex, single threaded: 11879 ms
                    foa::concurrent_table, single threaded:  7431 ms
               boost::concurrent_flat_map, single threaded:  7638 ms
                 tbb::concurrent_hash_map, single threaded: 17492 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5430 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11355 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3404 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4524 ms
                                                      cfoa:  3996 ms
                                  cfoa, tbb::spin_rw_mutex:  4029 ms
                                   cfoa, std::shared_mutex:  4736 ms
                                     foa::concurrent_table:  4012 ms
                                boost::concurrent_flat_map:  3945 ms
                                  tbb::concurrent_hash_map:  5336 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6359 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11464 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3784 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1067 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1498 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1140 ms
                                     cfoa, single threaded:  1526 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1530 ms
                  cfoa, std::shared_mutex, single threaded:  1830 ms
                    foa::concurrent_table, single threaded:  1481 ms
               boost::concurrent_flat_map, single threaded:  1478 ms
                 tbb::concurrent_hash_map, single threaded:  2229 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1218 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   626 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   765 ms
                                                      cfoa:   794 ms
                                  cfoa, tbb::spin_rw_mutex:   752 ms
                                   cfoa, std::shared_mutex:   734 ms
                                     foa::concurrent_table:   749 ms
                                boost::concurrent_flat_map:   790 ms
                                  tbb::concurrent_hash_map:   865 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1085 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2860 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   923 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1137 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1603 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1234 ms
                                     cfoa, single threaded:  1448 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1444 ms
                  cfoa, std::shared_mutex, single threaded:  1829 ms
                    foa::concurrent_table, single threaded:  1464 ms
               boost::concurrent_flat_map, single threaded:  1475 ms
                 tbb::concurrent_hash_map, single threaded:  2373 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   749 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1863 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   661 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   763 ms
                                                      cfoa:   780 ms
                                  cfoa, tbb::spin_rw_mutex:   793 ms
                                   cfoa, std::shared_mutex:   729 ms
                                     foa::concurrent_table:   821 ms
                                boost::concurrent_flat_map:   745 ms
                                  tbb::concurrent_hash_map:   913 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1026 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1466 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1088 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1441 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1878 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1644 ms
                                     cfoa, single threaded:  2319 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2162 ms
                  cfoa, std::shared_mutex, single threaded:  2404 ms
                    foa::concurrent_table, single threaded:  2178 ms
               boost::concurrent_flat_map, single threaded:  2260 ms
                 tbb::concurrent_hash_map, single threaded:  4397 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   968 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   844 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   756 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   981 ms
                                                      cfoa:   930 ms
                                  cfoa, tbb::spin_rw_mutex:   904 ms
                                   cfoa, std::shared_mutex:   910 ms
                                     foa::concurrent_table:   904 ms
                                boost::concurrent_flat_map:   945 ms
                                  tbb::concurrent_hash_map:  1668 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1254 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   993 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   894 ms
```
<!--vs-x86/main.cpp.txt-->
