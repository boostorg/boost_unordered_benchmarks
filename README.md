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
                boost::unordered_flat_map, single threaded:  7667 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11682 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9327 ms
                                     cfoa, single threaded: 12164 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12021 ms
                  cfoa, std::shared_mutex, single threaded: 13894 ms
                    foa::concurrent_table, single threaded: 11515 ms
                 tbb::concurrent_hash_map, single threaded: 21881 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6610 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15841 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6925 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6238 ms
                                                      cfoa:  5855 ms
                                  cfoa, tbb::spin_rw_mutex:  6178 ms
                                   cfoa, std::shared_mutex:  5755 ms
                                     foa::concurrent_table:  5494 ms
                                  tbb::concurrent_hash_map:  7319 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7818 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14798 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10025 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9220 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12814 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10148 ms
                                     cfoa, single threaded: 12161 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12113 ms
                  cfoa, std::shared_mutex, single threaded: 14369 ms
                    foa::concurrent_table, single threaded: 12251 ms
                 tbb::concurrent_hash_map, single threaded: 22994 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6286 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17824 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6966 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6419 ms
                                                      cfoa:  6914 ms
                                  cfoa, tbb::spin_rw_mutex:  6227 ms
                                   cfoa, std::shared_mutex:  6128 ms
                                     foa::concurrent_table:  6462 ms
                                  tbb::concurrent_hash_map:  7572 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7967 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18125 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12408 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21449 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24782 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24268 ms
                                     cfoa, single threaded: 24329 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24410 ms
                  cfoa, std::shared_mutex, single threaded: 24348 ms
                    foa::concurrent_table, single threaded: 25375 ms
                 tbb::concurrent_hash_map, single threaded: 42541 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11577 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8925 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9850 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10124 ms
                                                      cfoa:  8479 ms
                                  cfoa, tbb::spin_rw_mutex:  8939 ms
                                   cfoa, std::shared_mutex:  9685 ms
                                     foa::concurrent_table:  9255 ms
                                  tbb::concurrent_hash_map: 15604 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12631 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10144 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11805 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5752 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10162 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6039 ms
                                     cfoa, single threaded:  7417 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7433 ms
                  cfoa, std::shared_mutex, single threaded: 11570 ms
                    foa::concurrent_table, single threaded:  7265 ms
                 tbb::concurrent_hash_map, single threaded: 17315 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5373 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11116 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3410 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4445 ms
                                                      cfoa:  3752 ms
                                  cfoa, tbb::spin_rw_mutex:  3794 ms
                                   cfoa, std::shared_mutex:  4782 ms
                                     foa::concurrent_table:  4216 ms
                                  tbb::concurrent_hash_map:  5367 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6129 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11472 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3715 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1059 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1483 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1141 ms
                                     cfoa, single threaded:  1501 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1517 ms
                  cfoa, std::shared_mutex, single threaded:  1804 ms
                    foa::concurrent_table, single threaded:  1463 ms
                 tbb::concurrent_hash_map, single threaded:  2244 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1649 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   590 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   768 ms
                                                      cfoa:   970 ms
                                  cfoa, tbb::spin_rw_mutex:  1151 ms
                                   cfoa, std::shared_mutex:   829 ms
                                     foa::concurrent_table:   719 ms
                                  tbb::concurrent_hash_map:   863 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1107 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2139 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1351 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1133 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1558 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1235 ms
                                     cfoa, single threaded:  1439 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1416 ms
                  cfoa, std::shared_mutex, single threaded:  1744 ms
                    foa::concurrent_table, single threaded:  1433 ms
                 tbb::concurrent_hash_map, single threaded:  2395 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   770 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1056 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   738 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   778 ms
                                                      cfoa:   989 ms
                                  cfoa, tbb::spin_rw_mutex:   846 ms
                                   cfoa, std::shared_mutex:   814 ms
                                     foa::concurrent_table:   832 ms
                                  tbb::concurrent_hash_map:   895 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1011 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1309 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   989 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1332 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1720 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1535 ms
                                     cfoa, single threaded:  1990 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2072 ms
                  cfoa, std::shared_mutex, single threaded:  2237 ms
                    foa::concurrent_table, single threaded:  2063 ms
                 tbb::concurrent_hash_map, single threaded:  4021 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   886 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   840 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   816 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   954 ms
                                                      cfoa:   914 ms
                                  cfoa, tbb::spin_rw_mutex:   902 ms
                                   cfoa, std::shared_mutex:   935 ms
                                     foa::concurrent_table:   848 ms
                                  tbb::concurrent_hash_map:  1494 ms
                   gtl::parallel_flat_hash_map<std::mutex>:   981 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   826 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   811 ms
```
<!--vs-x86/main.cpp.txt-->
