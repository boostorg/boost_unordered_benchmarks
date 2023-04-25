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
                boost::unordered_flat_map, single threaded:  7768 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11743 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9285 ms
                                     cfoa, single threaded: 12327 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12430 ms
                  cfoa, std::shared_mutex, single threaded: 14420 ms
                    foa::concurrent_table, single threaded: 12090 ms
               boost::concurrent_flat_map, single threaded: 12109 ms
                 tbb::concurrent_hash_map, single threaded: 21911 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6486 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14137 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7149 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6308 ms
                                                      cfoa:  5740 ms
                                  cfoa, tbb::spin_rw_mutex:  5727 ms
                                   cfoa, std::shared_mutex:  5235 ms
                                     foa::concurrent_table:  5346 ms
                                boost::concurrent_flat_map:  5239 ms
                                  tbb::concurrent_hash_map:  7494 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8609 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14544 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9714 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9276 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12949 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10249 ms
                                     cfoa, single threaded: 12371 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12542 ms
                  cfoa, std::shared_mutex, single threaded: 14395 ms
                    foa::concurrent_table, single threaded: 12459 ms
               boost::concurrent_flat_map, single threaded: 12449 ms
                 tbb::concurrent_hash_map, single threaded: 23012 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6321 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11653 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7191 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6591 ms
                                                      cfoa:  6439 ms
                                  cfoa, tbb::spin_rw_mutex:  6463 ms
                                   cfoa, std::shared_mutex:  5911 ms
                                     foa::concurrent_table:  5497 ms
                                boost::concurrent_flat_map:  5466 ms
                                  tbb::concurrent_hash_map:  7548 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8083 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 13578 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11325 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22802 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25726 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24850 ms
                                     cfoa, single threaded: 26335 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26017 ms
                  cfoa, std::shared_mutex, single threaded: 26295 ms
                    foa::concurrent_table, single threaded: 25435 ms
               boost::concurrent_flat_map, single threaded: 25246 ms
                 tbb::concurrent_hash_map, single threaded: 42728 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11215 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9335 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9758 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  9922 ms
                                                      cfoa:  9652 ms
                                  cfoa, tbb::spin_rw_mutex:  9150 ms
                                   cfoa, std::shared_mutex:  9592 ms
                                     foa::concurrent_table:  8997 ms
                                boost::concurrent_flat_map:  9271 ms
                                  tbb::concurrent_hash_map: 14599 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 13093 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10735 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11784 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6279 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10188 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6062 ms
                                     cfoa, single threaded:  7505 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7609 ms
                  cfoa, std::shared_mutex, single threaded: 11819 ms
                    foa::concurrent_table, single threaded:  7452 ms
               boost::concurrent_flat_map, single threaded:  7450 ms
                 tbb::concurrent_hash_map, single threaded: 17381 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5192 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11479 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3459 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4586 ms
                                                      cfoa:  3994 ms
                                  cfoa, tbb::spin_rw_mutex:  3982 ms
                                   cfoa, std::shared_mutex:  4740 ms
                                     foa::concurrent_table:  4046 ms
                                boost::concurrent_flat_map:  4015 ms
                                  tbb::concurrent_hash_map:  5560 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6390 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11275 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3737 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1067 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1526 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1149 ms
                                     cfoa, single threaded:  1540 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1546 ms
                  cfoa, std::shared_mutex, single threaded:  1823 ms
                    foa::concurrent_table, single threaded:  1478 ms
               boost::concurrent_flat_map, single threaded:  1476 ms
                 tbb::concurrent_hash_map, single threaded:  2228 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   747 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1595 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   642 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   754 ms
                                                      cfoa:   759 ms
                                  cfoa, tbb::spin_rw_mutex:   835 ms
                                   cfoa, std::shared_mutex:   727 ms
                                     foa::concurrent_table:   777 ms
                                boost::concurrent_flat_map:   765 ms
                                  tbb::concurrent_hash_map:   862 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1110 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2410 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   845 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1140 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1604 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1235 ms
                                     cfoa, single threaded:  1448 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1444 ms
                  cfoa, std::shared_mutex, single threaded:  1831 ms
                    foa::concurrent_table, single threaded:  1465 ms
               boost::concurrent_flat_map, single threaded:  1472 ms
                 tbb::concurrent_hash_map, single threaded:  2368 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   790 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   981 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   621 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   773 ms
                                                      cfoa:   748 ms
                                  cfoa, tbb::spin_rw_mutex:   878 ms
                                   cfoa, std::shared_mutex:   765 ms
                                     foa::concurrent_table:   889 ms
                                boost::concurrent_flat_map:   919 ms
                                  tbb::concurrent_hash_map:   865 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1014 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2134 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1017 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1373 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1748 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1563 ms
                                     cfoa, single threaded:  2126 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2074 ms
                  cfoa, std::shared_mutex, single threaded:  2369 ms
                    foa::concurrent_table, single threaded:  2079 ms
               boost::concurrent_flat_map, single threaded:  2058 ms
                 tbb::concurrent_hash_map, single threaded:  4049 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1023 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   808 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   676 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   857 ms
                                                      cfoa:   858 ms
                                  cfoa, tbb::spin_rw_mutex:   903 ms
                                   cfoa, std::shared_mutex:   924 ms
                                     foa::concurrent_table:   818 ms
                                boost::concurrent_flat_map:   850 ms
                                  tbb::concurrent_hash_map:  1537 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1096 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   841 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   906 ms
```
<!--vs-x86/main.cpp.txt-->
