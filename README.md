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
                boost::unordered_flat_map, single threaded:  7726 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11704 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9276 ms
                                     cfoa, single threaded: 12168 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 11943 ms
                  cfoa, std::shared_mutex, single threaded: 13849 ms
                    foa::concurrent_table, single threaded: 11431 ms
                 tbb::concurrent_hash_map, single threaded: 21814 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6462 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14800 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7108 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5798 ms
                                                      cfoa:  6292 ms
                                  cfoa, tbb::spin_rw_mutex:  6003 ms
                                   cfoa, std::shared_mutex:  5727 ms
                                     foa::concurrent_table:  5569 ms
                                  tbb::concurrent_hash_map:  7668 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7794 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11969 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  8880 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9247 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12935 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10292 ms
                                     cfoa, single threaded: 12157 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12123 ms
                  cfoa, std::shared_mutex, single threaded: 14326 ms
                    foa::concurrent_table, single threaded: 12236 ms
                 tbb::concurrent_hash_map, single threaded: 23028 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6273 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12518 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7246 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6450 ms
                                                      cfoa:  6352 ms
                                  cfoa, tbb::spin_rw_mutex:  6611 ms
                                   cfoa, std::shared_mutex:  6211 ms
                                     foa::concurrent_table:  5453 ms
                                  tbb::concurrent_hash_map:  7470 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8068 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20561 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11597 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21014 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24538 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23682 ms
                                     cfoa, single threaded: 23866 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24352 ms
                  cfoa, std::shared_mutex, single threaded: 24590 ms
                    foa::concurrent_table, single threaded: 25017 ms
                 tbb::concurrent_hash_map, single threaded: 42964 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11182 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9463 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9873 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10141 ms
                                                      cfoa:  8866 ms
                                  cfoa, tbb::spin_rw_mutex:  8956 ms
                                   cfoa, std::shared_mutex:  8788 ms
                                     foa::concurrent_table: 10117 ms
                                  tbb::concurrent_hash_map: 14860 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12731 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10481 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11870 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5712 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10146 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6012 ms
                                     cfoa, single threaded:  7397 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7418 ms
                  cfoa, std::shared_mutex, single threaded: 11651 ms
                    foa::concurrent_table, single threaded:  7154 ms
                 tbb::concurrent_hash_map, single threaded: 17348 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5329 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11356 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3444 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4482 ms
                                                      cfoa:  3738 ms
                                  cfoa, tbb::spin_rw_mutex:  3758 ms
                                   cfoa, std::shared_mutex:  4777 ms
                                     foa::concurrent_table:  4152 ms
                                  tbb::concurrent_hash_map:  5446 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6263 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11870 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3754 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1053 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1479 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1136 ms
                                     cfoa, single threaded:  1501 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1506 ms
                  cfoa, std::shared_mutex, single threaded:  1804 ms
                    foa::concurrent_table, single threaded:  1462 ms
                 tbb::concurrent_hash_map, single threaded:  2241 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   784 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   957 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   651 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   755 ms
                                                      cfoa:   928 ms
                                  cfoa, tbb::spin_rw_mutex:  1005 ms
                                   cfoa, std::shared_mutex:   864 ms
                                     foa::concurrent_table:   817 ms
                                  tbb::concurrent_hash_map:   855 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1092 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2810 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   885 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1150 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1610 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1244 ms
                                     cfoa, single threaded:  1457 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1439 ms
                  cfoa, std::shared_mutex, single threaded:  1796 ms
                    foa::concurrent_table, single threaded:  1448 ms
                 tbb::concurrent_hash_map, single threaded:  2480 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   777 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1177 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   716 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   774 ms
                                                      cfoa:  1069 ms
                                  cfoa, tbb::spin_rw_mutex:   927 ms
                                   cfoa, std::shared_mutex:   850 ms
                                     foa::concurrent_table:   727 ms
                                  tbb::concurrent_hash_map:   908 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1020 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2075 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1013 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1327 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1722 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1594 ms
                                     cfoa, single threaded:  2020 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2082 ms
                  cfoa, std::shared_mutex, single threaded:  2265 ms
                    foa::concurrent_table, single threaded:  2028 ms
                 tbb::concurrent_hash_map, single threaded:  4096 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1046 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   835 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   758 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   827 ms
                                                      cfoa:   891 ms
                                  cfoa, tbb::spin_rw_mutex:   778 ms
                                   cfoa, std::shared_mutex:   870 ms
                                     foa::concurrent_table:   742 ms
                                  tbb::concurrent_hash_map:  1429 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1179 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   934 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   875 ms
```
<!--vs-x86/main.cpp.txt-->
