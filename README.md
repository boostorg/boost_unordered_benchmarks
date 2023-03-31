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
                boost::unordered_flat_map, single threaded:  7777 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11745 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9304 ms
                                     cfoa, single threaded: 12442 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12295 ms
                  cfoa, std::shared_mutex, single threaded: 14197 ms
                    foa::concurrent_table, single threaded: 11981 ms
                 tbb::concurrent_hash_map, single threaded: 21896 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6554 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15008 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7255 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5983 ms
                                                      cfoa:  5420 ms
                                  cfoa, tbb::spin_rw_mutex:  5866 ms
                                   cfoa, std::shared_mutex:  5357 ms
                                     foa::concurrent_table:  5404 ms
                                  tbb::concurrent_hash_map:  7549 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7866 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14163 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10068 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9224 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12832 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10214 ms
                                     cfoa, single threaded: 12430 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12470 ms
                  cfoa, std::shared_mutex, single threaded: 14453 ms
                    foa::concurrent_table, single threaded: 12243 ms
                 tbb::concurrent_hash_map, single threaded: 23047 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6254 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11539 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7523 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6763 ms
                                                      cfoa:  6652 ms
                                  cfoa, tbb::spin_rw_mutex:  6253 ms
                                   cfoa, std::shared_mutex:  6167 ms
                                     foa::concurrent_table:  5948 ms
                                  tbb::concurrent_hash_map:  7613 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7966 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18702 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11744 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20565 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24275 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23454 ms
                                     cfoa, single threaded: 25055 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26028 ms
                  cfoa, std::shared_mutex, single threaded: 26127 ms
                    foa::concurrent_table, single threaded: 25386 ms
                 tbb::concurrent_hash_map, single threaded: 41715 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10919 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9207 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10289 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10585 ms
                                                      cfoa:  9288 ms
                                  cfoa, tbb::spin_rw_mutex:  9506 ms
                                   cfoa, std::shared_mutex:  9696 ms
                                     foa::concurrent_table:  9284 ms
                                  tbb::concurrent_hash_map: 14612 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12346 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10352 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11830 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5716 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10154 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6071 ms
                                     cfoa, single threaded:  7503 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7603 ms
                  cfoa, std::shared_mutex, single threaded: 11819 ms
                    foa::concurrent_table, single threaded:  7233 ms
                 tbb::concurrent_hash_map, single threaded: 17305 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5624 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11315 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3461 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4438 ms
                                                      cfoa:  4016 ms
                                  cfoa, tbb::spin_rw_mutex:  4100 ms
                                   cfoa, std::shared_mutex:  4772 ms
                                     foa::concurrent_table:  4290 ms
                                  tbb::concurrent_hash_map:  5325 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6553 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11670 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3689 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1060 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1487 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1137 ms
                                     cfoa, single threaded:  1523 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1539 ms
                  cfoa, std::shared_mutex, single threaded:  1827 ms
                    foa::concurrent_table, single threaded:  1510 ms
                 tbb::concurrent_hash_map, single threaded:  2245 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   759 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1197 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   594 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   752 ms
                                                      cfoa:   757 ms
                                  cfoa, tbb::spin_rw_mutex:   918 ms
                                   cfoa, std::shared_mutex:   695 ms
                                     foa::concurrent_table:   769 ms
                                  tbb::concurrent_hash_map:   862 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1112 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1680 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   857 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1136 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1592 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1230 ms
                                     cfoa, single threaded:  1449 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1460 ms
                  cfoa, std::shared_mutex, single threaded:  1804 ms
                    foa::concurrent_table, single threaded:  1430 ms
                 tbb::concurrent_hash_map, single threaded:  2393 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   752 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1296 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   597 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   789 ms
                                                      cfoa:   725 ms
                                  cfoa, tbb::spin_rw_mutex:   863 ms
                                   cfoa, std::shared_mutex:   704 ms
                                     foa::concurrent_table:   806 ms
                                  tbb::concurrent_hash_map:   861 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1011 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1188 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1104 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1366 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1768 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1557 ms
                                     cfoa, single threaded:  2039 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2023 ms
                  cfoa, std::shared_mutex, single threaded:  2232 ms
                    foa::concurrent_table, single threaded:  1937 ms
                 tbb::concurrent_hash_map, single threaded:  4186 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   858 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   772 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   703 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   949 ms
                                                      cfoa:   870 ms
                                  cfoa, tbb::spin_rw_mutex:   860 ms
                                   cfoa, std::shared_mutex:  1007 ms
                                     foa::concurrent_table:   851 ms
                                  tbb::concurrent_hash_map:  1491 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1086 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   829 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   824 ms
```
<!--vs-x86/main.cpp.txt-->
