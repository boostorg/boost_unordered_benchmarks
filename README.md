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
                boost::unordered_flat_map, single threaded:  7780 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11729 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9262 ms
                                     cfoa, single threaded: 12656 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12448 ms
                  cfoa, std::shared_mutex, single threaded: 14168 ms
                    foa::concurrent_table, single threaded: 12277 ms
                 tbb::concurrent_hash_map, single threaded: 21945 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6476 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14142 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7390 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5905 ms
                                                      cfoa:  4721 ms
                                  cfoa, tbb::spin_rw_mutex:  4661 ms
                                   cfoa, std::shared_mutex:  5008 ms
                                     foa::concurrent_table:  4586 ms
                                  tbb::concurrent_hash_map:  7288 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7727 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15530 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10579 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9291 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12982 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10303 ms
                                     cfoa, single threaded: 12734 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12825 ms
                  cfoa, std::shared_mutex, single threaded: 14723 ms
                    foa::concurrent_table, single threaded: 12682 ms
                 tbb::concurrent_hash_map, single threaded: 23287 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6212 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15098 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7167 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6630 ms
                                                      cfoa:  5120 ms
                                  cfoa, tbb::spin_rw_mutex:  4914 ms
                                   cfoa, std::shared_mutex:  5380 ms
                                     foa::concurrent_table:  5110 ms
                                  tbb::concurrent_hash_map:  7453 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8079 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 24494 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11851 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 24792 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26899 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 26172 ms
                                     cfoa, single threaded: 24912 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26188 ms
                  cfoa, std::shared_mutex, single threaded: 25578 ms
                    foa::concurrent_table, single threaded: 24792 ms
                 tbb::concurrent_hash_map, single threaded: 42513 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11039 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8736 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9890 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10258 ms
                                                      cfoa:  9027 ms
                                  cfoa, tbb::spin_rw_mutex:  9166 ms
                                   cfoa, std::shared_mutex:  9033 ms
                                     foa::concurrent_table:  8625 ms
                                  tbb::concurrent_hash_map: 14020 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12600 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10293 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11587 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5888 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10235 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6079 ms
                                     cfoa, single threaded:  7525 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7620 ms
                  cfoa, std::shared_mutex, single threaded: 11628 ms
                    foa::concurrent_table, single threaded:  7401 ms
                 tbb::concurrent_hash_map, single threaded: 17496 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5281 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11502 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3389 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4595 ms
                                                      cfoa:  3605 ms
                                  cfoa, tbb::spin_rw_mutex:  3764 ms
                                   cfoa, std::shared_mutex:  4730 ms
                                     foa::concurrent_table:  3615 ms
                                  tbb::concurrent_hash_map:  5311 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6358 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11410 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3764 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1057 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1501 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1135 ms
                                     cfoa, single threaded:  1519 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1534 ms
                  cfoa, std::shared_mutex, single threaded:  1835 ms
                    foa::concurrent_table, single threaded:  1512 ms
                 tbb::concurrent_hash_map, single threaded:  2276 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1359 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   602 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   790 ms
                                                      cfoa:   825 ms
                                  cfoa, tbb::spin_rw_mutex:   938 ms
                                   cfoa, std::shared_mutex:   830 ms
                                     foa::concurrent_table:   867 ms
                                  tbb::concurrent_hash_map:   861 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1109 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3413 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   970 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1144 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1563 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1476 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1487 ms
                  cfoa, std::shared_mutex, single threaded:  1793 ms
                    foa::concurrent_table, single threaded:  1452 ms
                 tbb::concurrent_hash_map, single threaded:  2365 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   746 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1566 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   695 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   770 ms
                                                      cfoa:   816 ms
                                  cfoa, tbb::spin_rw_mutex:   796 ms
                                   cfoa, std::shared_mutex:   805 ms
                                     foa::concurrent_table:   840 ms
                                  tbb::concurrent_hash_map:   872 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1011 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2578 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   982 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1355 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1781 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1591 ms
                                     cfoa, single threaded:  2121 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2087 ms
                  cfoa, std::shared_mutex, single threaded:  2292 ms
                    foa::concurrent_table, single threaded:  2065 ms
                 tbb::concurrent_hash_map, single threaded:  4062 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   940 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   788 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   782 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   936 ms
                                                      cfoa:   814 ms
                                  cfoa, tbb::spin_rw_mutex:   867 ms
                                   cfoa, std::shared_mutex:   968 ms
                                     foa::concurrent_table:   865 ms
                                  tbb::concurrent_hash_map:  1506 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1054 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   952 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   910 ms
```
<!--vs-x86/main.cpp.txt-->
