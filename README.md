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
                boost::unordered_flat_map, single threaded:  8123 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11980 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9591 ms
                                     cfoa, single threaded: 12973 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12812 ms
                  cfoa, std::shared_mutex, single threaded: 15221 ms
                    foa::concurrent_table, single threaded: 12500 ms
                 tbb::concurrent_hash_map, single threaded: 22621 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6531 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17261 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7188 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5826 ms
                                                      cfoa:  4562 ms
                                  cfoa, tbb::spin_rw_mutex:  5036 ms
                                   cfoa, std::shared_mutex:  5005 ms
                                     foa::concurrent_table:  4854 ms
                                  tbb::concurrent_hash_map:  7601 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7825 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17471 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10534 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9321 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12907 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10282 ms
                                     cfoa, single threaded: 12685 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12726 ms
                  cfoa, std::shared_mutex, single threaded: 14640 ms
                    foa::concurrent_table, single threaded: 12653 ms
                 tbb::concurrent_hash_map, single threaded: 23179 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6298 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13168 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7136 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6253 ms
                                                      cfoa:  4639 ms
                                  cfoa, tbb::spin_rw_mutex:  4631 ms
                                   cfoa, std::shared_mutex:  5030 ms
                                     foa::concurrent_table:  4845 ms
                                  tbb::concurrent_hash_map:  7591 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8001 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21080 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12299 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20845 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24719 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23512 ms
                                     cfoa, single threaded: 24714 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25005 ms
                  cfoa, std::shared_mutex, single threaded: 25030 ms
                    foa::concurrent_table, single threaded: 24899 ms
                 tbb::concurrent_hash_map, single threaded: 42639 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11003 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8981 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9674 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10419 ms
                                                      cfoa:  8703 ms
                                  cfoa, tbb::spin_rw_mutex:  8715 ms
                                   cfoa, std::shared_mutex:  9125 ms
                                     foa::concurrent_table:  8435 ms
                                  tbb::concurrent_hash_map: 14504 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11828 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10025 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11966 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6278 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10161 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6040 ms
                                     cfoa, single threaded:  7562 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7574 ms
                  cfoa, std::shared_mutex, single threaded: 11644 ms
                    foa::concurrent_table, single threaded:  7414 ms
                 tbb::concurrent_hash_map, single threaded: 17341 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5322 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11455 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3450 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4538 ms
                                                      cfoa:  3642 ms
                                  cfoa, tbb::spin_rw_mutex:  3736 ms
                                   cfoa, std::shared_mutex:  4565 ms
                                     foa::concurrent_table:  3796 ms
                                  tbb::concurrent_hash_map:  5387 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6294 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11378 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3751 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1058 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1488 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1141 ms
                                     cfoa, single threaded:  1506 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1514 ms
                  cfoa, std::shared_mutex, single threaded:  1781 ms
                    foa::concurrent_table, single threaded:  1525 ms
                 tbb::concurrent_hash_map, single threaded:  2264 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   780 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1528 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   835 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   748 ms
                                                      cfoa:   682 ms
                                  cfoa, tbb::spin_rw_mutex:   691 ms
                                   cfoa, std::shared_mutex:   744 ms
                                     foa::concurrent_table:   798 ms
                                  tbb::concurrent_hash_map:   851 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1101 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  4814 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   984 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1557 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1440 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1766 ms
                    foa::concurrent_table, single threaded:  1456 ms
                 tbb::concurrent_hash_map, single threaded:  2369 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   731 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1485 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   796 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   793 ms
                                                      cfoa:   615 ms
                                  cfoa, tbb::spin_rw_mutex:   631 ms
                                   cfoa, std::shared_mutex:   723 ms
                                     foa::concurrent_table:   762 ms
                                  tbb::concurrent_hash_map:   878 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1007 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2190 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1459 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1313 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1822 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1495 ms
                                     cfoa, single threaded:  1997 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2085 ms
                  cfoa, std::shared_mutex, single threaded:  2293 ms
                    foa::concurrent_table, single threaded:  1891 ms
                 tbb::concurrent_hash_map, single threaded:  3810 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1030 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   819 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   738 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   867 ms
                                                      cfoa:   769 ms
                                  cfoa, tbb::spin_rw_mutex:   828 ms
                                   cfoa, std::shared_mutex:   885 ms
                                     foa::concurrent_table:   778 ms
                                  tbb::concurrent_hash_map:  1248 ms
                   gtl::parallel_flat_hash_map<std::mutex>:   994 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   945 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   752 ms
```
<!--vs-x86/main.cpp.txt-->
