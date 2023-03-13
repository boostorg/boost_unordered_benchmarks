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
                boost::unordered_flat_map, single threaded:  7722 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11610 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9299 ms
                                     cfoa, single threaded: 12923 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12693 ms
                  cfoa, std::shared_mutex, single threaded: 14435 ms
                    foa::concurrent_table, single threaded: 12322 ms
                 tbb::concurrent_hash_map, single threaded: 21930 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6614 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 20113 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7070 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6206 ms
                                                      cfoa:  4401 ms
                                  cfoa, tbb::spin_rw_mutex:  4407 ms
                                   cfoa, std::shared_mutex:  4606 ms
                                     foa::concurrent_table:  4623 ms
                                  tbb::concurrent_hash_map:  7590 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7746 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17530 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9853 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9252 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12886 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10250 ms
                                     cfoa, single threaded: 12923 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12962 ms
                  cfoa, std::shared_mutex, single threaded: 14944 ms
                    foa::concurrent_table, single threaded: 12626 ms
                 tbb::concurrent_hash_map, single threaded: 23152 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6166 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12408 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7289 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7054 ms
                                                      cfoa:  4758 ms
                                  cfoa, tbb::spin_rw_mutex:  4607 ms
                                   cfoa, std::shared_mutex:  5207 ms
                                     foa::concurrent_table:  4789 ms
                                  tbb::concurrent_hash_map:  7626 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8017 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14536 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12634 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21091 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24577 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23510 ms
                                     cfoa, single threaded: 26624 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 27069 ms
                  cfoa, std::shared_mutex, single threaded: 27296 ms
                    foa::concurrent_table, single threaded: 25086 ms
                 tbb::concurrent_hash_map, single threaded: 42077 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11174 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8983 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10002 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10465 ms
                                                      cfoa:  9816 ms
                                  cfoa, tbb::spin_rw_mutex:  8948 ms
                                   cfoa, std::shared_mutex: 10382 ms
                                     foa::concurrent_table:  8519 ms
                                  tbb::concurrent_hash_map: 15001 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11607 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10527 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11828 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5753 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10202 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6021 ms
                                     cfoa, single threaded:  7682 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7662 ms
                  cfoa, std::shared_mutex, single threaded: 11756 ms
                    foa::concurrent_table, single threaded:  7433 ms
                 tbb::concurrent_hash_map, single threaded: 17347 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5298 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11199 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3426 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4501 ms
                                                      cfoa:  4078 ms
                                  cfoa, tbb::spin_rw_mutex:  4113 ms
                                   cfoa, std::shared_mutex:  4636 ms
                                     foa::concurrent_table:  3708 ms
                                  tbb::concurrent_hash_map:  5619 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6368 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11417 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3708 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1054 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1486 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1137 ms
                                     cfoa, single threaded:  1519 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1540 ms
                  cfoa, std::shared_mutex, single threaded:  1807 ms
                    foa::concurrent_table, single threaded:  1486 ms
                 tbb::concurrent_hash_map, single threaded:  2232 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   768 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   988 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   648 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   793 ms
                                                      cfoa:   564 ms
                                  cfoa, tbb::spin_rw_mutex:   549 ms
                                   cfoa, std::shared_mutex:   590 ms
                                     foa::concurrent_table:   766 ms
                                  tbb::concurrent_hash_map:   883 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1091 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2279 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   796 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1132 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1556 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1227 ms
                                     cfoa, single threaded:  1466 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1759 ms
                    foa::concurrent_table, single threaded:  1451 ms
                 tbb::concurrent_hash_map, single threaded:  2388 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   765 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1317 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   815 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   783 ms
                                                      cfoa:   582 ms
                                  cfoa, tbb::spin_rw_mutex:   579 ms
                                   cfoa, std::shared_mutex:   613 ms
                                     foa::concurrent_table:   939 ms
                                  tbb::concurrent_hash_map:   896 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1006 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1264 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   899 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1356 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1784 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1539 ms
                                     cfoa, single threaded:  2160 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2116 ms
                  cfoa, std::shared_mutex, single threaded:  2460 ms
                    foa::concurrent_table, single threaded:  1973 ms
                 tbb::concurrent_hash_map, single threaded:  4003 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   873 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   688 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   715 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   827 ms
                                                      cfoa:   758 ms
                                  cfoa, tbb::spin_rw_mutex:   871 ms
                                   cfoa, std::shared_mutex:   882 ms
                                     foa::concurrent_table:   840 ms
                                  tbb::concurrent_hash_map:  1353 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1144 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   907 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   912 ms
```
<!--vs-x86/main.cpp.txt-->
