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
                boost::unordered_flat_map, single threaded:  7677 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11613 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9215 ms
                                     cfoa, single threaded: 12567 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12361 ms
                  cfoa, std::shared_mutex, single threaded: 14203 ms
                    foa::concurrent_table, single threaded: 12192 ms
                 tbb::concurrent_hash_map, single threaded: 21742 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6526 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 26244 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7179 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6065 ms
                                                      cfoa:  4742 ms
                                  cfoa, tbb::spin_rw_mutex:  4504 ms
                                   cfoa, std::shared_mutex:  4978 ms
                                     foa::concurrent_table:  4693 ms
                                  tbb::concurrent_hash_map:  7497 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7735 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15864 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10243 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9228 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12860 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10236 ms
                                     cfoa, single threaded: 12604 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12605 ms
                  cfoa, std::shared_mutex, single threaded: 14780 ms
                    foa::concurrent_table, single threaded: 12656 ms
                 tbb::concurrent_hash_map, single threaded: 23101 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6206 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17880 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7092 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6617 ms
                                                      cfoa:  4926 ms
                                  cfoa, tbb::spin_rw_mutex:  4779 ms
                                   cfoa, std::shared_mutex:  5039 ms
                                     foa::concurrent_table:  5209 ms
                                  tbb::concurrent_hash_map:  7546 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7957 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17007 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12021 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21465 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24921 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23598 ms
                                     cfoa, single threaded: 24706 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24623 ms
                  cfoa, std::shared_mutex, single threaded: 25186 ms
                    foa::concurrent_table, single threaded: 24994 ms
                 tbb::concurrent_hash_map, single threaded: 43262 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11047 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9150 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9975 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10097 ms
                                                      cfoa:  8680 ms
                                  cfoa, tbb::spin_rw_mutex:  8547 ms
                                   cfoa, std::shared_mutex:  9198 ms
                                     foa::concurrent_table:  8648 ms
                                  tbb::concurrent_hash_map: 13804 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12510 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10027 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12006 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6291 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10145 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6041 ms
                                     cfoa, single threaded:  7546 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7568 ms
                  cfoa, std::shared_mutex, single threaded: 11614 ms
                    foa::concurrent_table, single threaded:  7437 ms
                 tbb::concurrent_hash_map, single threaded: 17318 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5259 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11253 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3399 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4500 ms
                                                      cfoa:  3832 ms
                                  cfoa, tbb::spin_rw_mutex:  3748 ms
                                   cfoa, std::shared_mutex:  4629 ms
                                     foa::concurrent_table:  3681 ms
                                  tbb::concurrent_hash_map:  5386 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6356 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11324 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3713 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1047 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1477 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1127 ms
                                     cfoa, single threaded:  1489 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1510 ms
                  cfoa, std::shared_mutex, single threaded:  1767 ms
                    foa::concurrent_table, single threaded:  1484 ms
                 tbb::concurrent_hash_map, single threaded:  2239 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   753 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2120 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   589 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   736 ms
                                                      cfoa:   693 ms
                                  cfoa, tbb::spin_rw_mutex:   672 ms
                                   cfoa, std::shared_mutex:   764 ms
                                     foa::concurrent_table:   857 ms
                                  tbb::concurrent_hash_map:   879 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1099 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3503 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   828 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1137 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1559 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1232 ms
                                     cfoa, single threaded:  1440 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1765 ms
                    foa::concurrent_table, single threaded:  1453 ms
                 tbb::concurrent_hash_map, single threaded:  2390 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   753 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1218 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   580 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   761 ms
                                                      cfoa:   650 ms
                                  cfoa, tbb::spin_rw_mutex:   619 ms
                                   cfoa, std::shared_mutex:   727 ms
                                     foa::concurrent_table:   778 ms
                                  tbb::concurrent_hash_map:   874 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1017 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1500 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1127 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1339 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1723 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1555 ms
                                     cfoa, single threaded:  2062 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2034 ms
                  cfoa, std::shared_mutex, single threaded:  2297 ms
                    foa::concurrent_table, single threaded:  1977 ms
                 tbb::concurrent_hash_map, single threaded:  4060 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   964 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   698 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   806 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1023 ms
                                                      cfoa:   742 ms
                                  cfoa, tbb::spin_rw_mutex:   763 ms
                                   cfoa, std::shared_mutex:   836 ms
                                     foa::concurrent_table:   860 ms
                                  tbb::concurrent_hash_map:  1287 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1160 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   935 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   847 ms
```
<!--vs-x86/main.cpp.txt-->
