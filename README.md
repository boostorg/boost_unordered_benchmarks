# Parallel hashmap benchmarks

## Benchmarks

TBW

## Detailed results
### Folder
* `gcc-x64`: GCC 12, x64
* `clang-x64`: Clang 15, x64
* `vs-x64`: Visual Studio 2022, x64
* `clang-arm64`: Clang 12, ARM64
* `gcc-x86`: GCC 12, x86
* `clang-x86`: Clang 12, x86
* `vs-x86`: Visual Studio 2022, x86

## Summary results

### GCC 12, x64
<!--gcc-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  8026 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12487 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9544 ms
                                     cfoa, single threaded: 12643 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12649 ms
                  cfoa, std::shared_mutex, single threaded: 14510 ms
                    foa::concurrent_table, single threaded: 12416 ms
               boost::concurrent_flat_map, single threaded: 12445 ms
                 tbb::concurrent_hash_map, single threaded: 22574 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6281 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 94346 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  5187 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6506 ms
                                                      cfoa:  5453 ms
                                  cfoa, tbb::spin_rw_mutex:  5686 ms
                                   cfoa, std::shared_mutex:  5697 ms
                                     foa::concurrent_table:  5106 ms
                                boost::concurrent_flat_map:  4721 ms
                                  tbb::concurrent_hash_map:  7500 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7998 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 139505 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  8594 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 15, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9714 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13120 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10896 ms
                                     cfoa, single threaded: 13241 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12968 ms
                  cfoa, std::shared_mutex, single threaded: 14884 ms
                    foa::concurrent_table, single threaded: 13050 ms
               boost::concurrent_flat_map, single threaded: 13108 ms
                 tbb::concurrent_hash_map, single threaded: 24363 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6246 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 84587 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  5376 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7120 ms
                                                      cfoa:  5557 ms
                                  cfoa, tbb::spin_rw_mutex:  5644 ms
                                   cfoa, std::shared_mutex:  5854 ms
                                     foa::concurrent_table:  4981 ms
                                boost::concurrent_flat_map:  5016 ms
                                  tbb::concurrent_hash_map:  8127 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  9539 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 192396 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9925 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 11099 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12375 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 11624 ms
                                     cfoa, single threaded: 11033 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 11241 ms
                  cfoa, std::shared_mutex, single threaded: 11622 ms
                    foa::concurrent_table, single threaded: 10930 ms
               boost::concurrent_flat_map, single threaded: 10938 ms
                 tbb::concurrent_hash_map, single threaded: 22957 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5847 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  4969 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  4600 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5781 ms
                                                      cfoa:  4646 ms
                                  cfoa, tbb::spin_rw_mutex:  4601 ms
                                   cfoa, std::shared_mutex:  4846 ms
                                     foa::concurrent_table:  4319 ms
                                boost::concurrent_flat_map:  4374 ms
                                  tbb::concurrent_hash_map:  8556 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8200 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  6745 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  7001 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6034 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10161 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6098 ms
                                     cfoa, single threaded:  7931 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7599 ms
                  cfoa, std::shared_mutex, single threaded: 11840 ms
                    foa::concurrent_table, single threaded:  7727 ms
               boost::concurrent_flat_map, single threaded:  7677 ms
                 tbb::concurrent_hash_map, single threaded: 17290 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5458 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11073 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3479 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4463 ms
                                                      cfoa:  4122 ms
                                  cfoa, tbb::spin_rw_mutex:  4005 ms
                                   cfoa, std::shared_mutex:  4848 ms
                                     foa::concurrent_table:  3888 ms
                                boost::concurrent_flat_map:  3887 ms
                                  tbb::concurrent_hash_map:  5383 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6202 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11217 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3706 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 12, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1059 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1484 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1135 ms
                                     cfoa, single threaded:  1533 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1563 ms
                  cfoa, std::shared_mutex, single threaded:  1817 ms
                    foa::concurrent_table, single threaded:  1497 ms
               boost::concurrent_flat_map, single threaded:  1480 ms
                 tbb::concurrent_hash_map, single threaded:  2215 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   746 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  3125 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   717 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   908 ms
                                                      cfoa:   878 ms
                                  cfoa, tbb::spin_rw_mutex:   860 ms
                                   cfoa, std::shared_mutex:   732 ms
                                     foa::concurrent_table:   757 ms
                                boost::concurrent_flat_map:   706 ms
                                  tbb::concurrent_hash_map:   915 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1054 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15961 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   973 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1122 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1517 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1262 ms
                                     cfoa, single threaded:  1507 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1478 ms
                  cfoa, std::shared_mutex, single threaded:  1766 ms
                    foa::concurrent_table, single threaded:  1500 ms
               boost::concurrent_flat_map, single threaded:  1500 ms
                 tbb::concurrent_hash_map, single threaded:  2475 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   736 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  6961 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   753 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   932 ms
                                                      cfoa:   892 ms
                                  cfoa, tbb::spin_rw_mutex:   914 ms
                                   cfoa, std::shared_mutex:   763 ms
                                     foa::concurrent_table:   731 ms
                                boost::concurrent_flat_map:   742 ms
                                  tbb::concurrent_hash_map:   912 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1034 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21847 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1092 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:   710 ms
  boost::unordered_flat_map, single threaded, shared_mutex:   964 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:   830 ms
                                     cfoa, single threaded:   940 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:   959 ms
                  cfoa, std::shared_mutex, single threaded:  1121 ms
                    foa::concurrent_table, single threaded:  1037 ms
               boost::concurrent_flat_map, single threaded:  1039 ms
                 tbb::concurrent_hash_map, single threaded:  2258 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   589 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   509 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   429 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   532 ms
                                                      cfoa:   519 ms
                                  cfoa, tbb::spin_rw_mutex:   497 ms
                                   cfoa, std::shared_mutex:   564 ms
                                     foa::concurrent_table:   493 ms
                                boost::concurrent_flat_map:   497 ms
                                  tbb::concurrent_hash_map:   966 ms
                   gtl::parallel_flat_hash_map<std::mutex>:   873 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   789 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   629 ms
```
<!--vs-x86/main.cpp.txt-->
