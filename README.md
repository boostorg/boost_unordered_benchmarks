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
                boost::unordered_flat_map, single threaded:  7682 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11569 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9183 ms
                                     cfoa, single threaded: 12136 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 11925 ms
                  cfoa, std::shared_mutex, single threaded: 13838 ms
                    foa::concurrent_table, single threaded: 11469 ms
                 tbb::concurrent_hash_map, single threaded: 21695 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6531 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16243 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6926 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5902 ms
                                                      cfoa:  6051 ms
                                  cfoa, tbb::spin_rw_mutex:  6202 ms
                                   cfoa, std::shared_mutex:  5814 ms
                                     foa::concurrent_table:  5822 ms
                                  tbb::concurrent_hash_map:  7438 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7843 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22977 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10088 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9275 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12906 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10247 ms
                                     cfoa, single threaded: 12154 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12144 ms
                  cfoa, std::shared_mutex, single threaded: 14406 ms
                    foa::concurrent_table, single threaded: 12401 ms
                 tbb::concurrent_hash_map, single threaded: 23157 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6050 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18351 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7704 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6687 ms
                                                      cfoa:  6860 ms
                                  cfoa, tbb::spin_rw_mutex:  6410 ms
                                   cfoa, std::shared_mutex:  6149 ms
                                     foa::concurrent_table:  5620 ms
                                  tbb::concurrent_hash_map:  7470 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7987 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20041 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10950 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23059 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25924 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24632 ms
                                     cfoa, single threaded: 24368 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24212 ms
                  cfoa, std::shared_mutex, single threaded: 24239 ms
                    foa::concurrent_table, single threaded: 24424 ms
                 tbb::concurrent_hash_map, single threaded: 42749 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11165 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8764 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9742 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10049 ms
                                                      cfoa:  8605 ms
                                  cfoa, tbb::spin_rw_mutex:  8648 ms
                                   cfoa, std::shared_mutex:  8788 ms
                                     foa::concurrent_table:  8799 ms
                                  tbb::concurrent_hash_map: 14955 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11568 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  9917 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11854 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5808 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10123 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6053 ms
                                     cfoa, single threaded:  7379 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7469 ms
                  cfoa, std::shared_mutex, single threaded: 11597 ms
                    foa::concurrent_table, single threaded:  7329 ms
                 tbb::concurrent_hash_map, single threaded: 17282 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5197 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11204 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3457 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4544 ms
                                                      cfoa:  3727 ms
                                  cfoa, tbb::spin_rw_mutex:  3858 ms
                                   cfoa, std::shared_mutex:  4773 ms
                                     foa::concurrent_table:  3907 ms
                                  tbb::concurrent_hash_map:  5333 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6452 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11376 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3724 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1069 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1488 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1134 ms
                                     cfoa, single threaded:  1502 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1515 ms
                  cfoa, std::shared_mutex, single threaded:  1812 ms
                    foa::concurrent_table, single threaded:  1454 ms
                 tbb::concurrent_hash_map, single threaded:  2230 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1216 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   636 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   787 ms
                                                      cfoa:   875 ms
                                  cfoa, tbb::spin_rw_mutex:   882 ms
                                   cfoa, std::shared_mutex:   826 ms
                                     foa::concurrent_table:  1044 ms
                                  tbb::concurrent_hash_map:   840 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1115 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2648 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   881 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1133 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1557 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1435 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1417 ms
                  cfoa, std::shared_mutex, single threaded:  1793 ms
                    foa::concurrent_table, single threaded:  1432 ms
                 tbb::concurrent_hash_map, single threaded:  2364 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   759 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2360 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   711 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   750 ms
                                                      cfoa:  1032 ms
                                  cfoa, tbb::spin_rw_mutex:   844 ms
                                   cfoa, std::shared_mutex:   807 ms
                                     foa::concurrent_table:   885 ms
                                  tbb::concurrent_hash_map:   865 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1016 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1094 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   981 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1346 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1722 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1552 ms
                                     cfoa, single threaded:  1987 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1948 ms
                  cfoa, std::shared_mutex, single threaded:  2211 ms
                    foa::concurrent_table, single threaded:  2012 ms
                 tbb::concurrent_hash_map, single threaded:  4121 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1065 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   820 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   690 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   985 ms
                                                      cfoa:   768 ms
                                  cfoa, tbb::spin_rw_mutex:   782 ms
                                   cfoa, std::shared_mutex:   871 ms
                                     foa::concurrent_table:   788 ms
                                  tbb::concurrent_hash_map:  1455 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1076 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   850 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   949 ms
```
<!--vs-x86/main.cpp.txt-->
