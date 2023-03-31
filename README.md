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
                boost::unordered_flat_map, single threaded:  7751 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11721 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9256 ms
                                     cfoa, single threaded: 12350 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12223 ms
                  cfoa, std::shared_mutex, single threaded: 14093 ms
                    foa::concurrent_table, single threaded: 11949 ms
                 tbb::concurrent_hash_map, single threaded: 21815 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6461 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17578 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6997 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6369 ms
                                                      cfoa:  5377 ms
                                  cfoa, tbb::spin_rw_mutex:  5809 ms
                                   cfoa, std::shared_mutex:  5380 ms
                                     foa::concurrent_table:  5435 ms
                                  tbb::concurrent_hash_map:  7380 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7841 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16669 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9759 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9245 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12886 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10246 ms
                                     cfoa, single threaded: 12458 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12496 ms
                  cfoa, std::shared_mutex, single threaded: 14527 ms
                    foa::concurrent_table, single threaded: 12264 ms
                 tbb::concurrent_hash_map, single threaded: 23124 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6186 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16059 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7575 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6731 ms
                                                      cfoa:  6411 ms
                                  cfoa, tbb::spin_rw_mutex:  6420 ms
                                   cfoa, std::shared_mutex:  6062 ms
                                     foa::concurrent_table:  5387 ms
                                  tbb::concurrent_hash_map:  7675 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21976 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12414 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21669 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24309 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23759 ms
                                     cfoa, single threaded: 25707 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25955 ms
                  cfoa, std::shared_mutex, single threaded: 26067 ms
                    foa::concurrent_table, single threaded: 24936 ms
                 tbb::concurrent_hash_map, single threaded: 42641 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11068 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8904 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9674 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 11008 ms
                                                      cfoa:  9164 ms
                                  cfoa, tbb::spin_rw_mutex:  8985 ms
                                   cfoa, std::shared_mutex: 10108 ms
                                     foa::concurrent_table:  9016 ms
                                  tbb::concurrent_hash_map: 14041 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12350 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10434 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12144 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5734 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10155 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6021 ms
                                     cfoa, single threaded:  7563 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7570 ms
                  cfoa, std::shared_mutex, single threaded: 11840 ms
                    foa::concurrent_table, single threaded:  7208 ms
                 tbb::concurrent_hash_map, single threaded: 17240 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5357 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11166 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3420 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4449 ms
                                                      cfoa:  3961 ms
                                  cfoa, tbb::spin_rw_mutex:  4105 ms
                                   cfoa, std::shared_mutex:  4738 ms
                                     foa::concurrent_table:  4141 ms
                                  tbb::concurrent_hash_map:  5380 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6351 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11394 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3739 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1055 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1483 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1132 ms
                                     cfoa, single threaded:  1519 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1537 ms
                  cfoa, std::shared_mutex, single threaded:  1841 ms
                    foa::concurrent_table, single threaded:  1502 ms
                 tbb::concurrent_hash_map, single threaded:  2236 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   780 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1387 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   624 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   782 ms
                                                      cfoa:   802 ms
                                  cfoa, tbb::spin_rw_mutex:   830 ms
                                   cfoa, std::shared_mutex:   727 ms
                                     foa::concurrent_table:   800 ms
                                  tbb::concurrent_hash_map:   849 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1114 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1563 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1020 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1148 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1593 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1449 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1461 ms
                  cfoa, std::shared_mutex, single threaded:  1805 ms
                    foa::concurrent_table, single threaded:  1430 ms
                 tbb::concurrent_hash_map, single threaded:  2386 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   757 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2757 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   586 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   779 ms
                                                      cfoa:   931 ms
                                  cfoa, tbb::spin_rw_mutex:   857 ms
                                   cfoa, std::shared_mutex:   722 ms
                                     foa::concurrent_table:   838 ms
                                  tbb::concurrent_hash_map:   885 ms
                   gtl::parallel_flat_hash_map<std::mutex>:   996 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1349 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   953 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1344 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1749 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1676 ms
                                     cfoa, single threaded:  2054 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2030 ms
                  cfoa, std::shared_mutex, single threaded:  2272 ms
                    foa::concurrent_table, single threaded:  1924 ms
                 tbb::concurrent_hash_map, single threaded:  4197 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   886 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   772 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   762 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   921 ms
                                                      cfoa:   856 ms
                                  cfoa, tbb::spin_rw_mutex:   874 ms
                                   cfoa, std::shared_mutex:   980 ms
                                     foa::concurrent_table:   805 ms
                                  tbb::concurrent_hash_map:  1522 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1179 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   981 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   892 ms
```
<!--vs-x86/main.cpp.txt-->
