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
                boost::unordered_flat_map, single threaded:  7761 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11658 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9268 ms
                                     cfoa, single threaded: 12167 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12028 ms
                  cfoa, std::shared_mutex, single threaded: 13936 ms
                    foa::concurrent_table, single threaded: 11524 ms
                 tbb::concurrent_hash_map, single threaded: 21943 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6471 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15703 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7100 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6066 ms
                                                      cfoa:  6176 ms
                                  cfoa, tbb::spin_rw_mutex:  5993 ms
                                   cfoa, std::shared_mutex:  5911 ms
                                     foa::concurrent_table:  5444 ms
                                  tbb::concurrent_hash_map:  7296 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7811 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17665 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9497 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9227 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12825 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10231 ms
                                     cfoa, single threaded: 12157 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12115 ms
                  cfoa, std::shared_mutex, single threaded: 14263 ms
                    foa::concurrent_table, single threaded: 12250 ms
                 tbb::concurrent_hash_map, single threaded: 22977 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6169 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11794 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7082 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6496 ms
                                                      cfoa:  6226 ms
                                  cfoa, tbb::spin_rw_mutex:  6269 ms
                                   cfoa, std::shared_mutex:  6289 ms
                                     foa::concurrent_table:  5370 ms
                                  tbb::concurrent_hash_map:  7634 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8010 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19045 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12006 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22881 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26335 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24583 ms
                                     cfoa, single threaded: 23822 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24090 ms
                  cfoa, std::shared_mutex, single threaded: 24201 ms
                    foa::concurrent_table, single threaded: 24848 ms
                 tbb::concurrent_hash_map, single threaded: 42149 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11172 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8734 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9548 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  9958 ms
                                                      cfoa:  8652 ms
                                  cfoa, tbb::spin_rw_mutex:  8917 ms
                                   cfoa, std::shared_mutex:  8985 ms
                                     foa::concurrent_table:  9629 ms
                                  tbb::concurrent_hash_map: 14828 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12201 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  9974 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11646 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5712 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10152 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6023 ms
                                     cfoa, single threaded:  7385 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7450 ms
                  cfoa, std::shared_mutex, single threaded: 11634 ms
                    foa::concurrent_table, single threaded:  7208 ms
                 tbb::concurrent_hash_map, single threaded: 17302 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5303 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11217 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3445 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4437 ms
                                                      cfoa:  3833 ms
                                  cfoa, tbb::spin_rw_mutex:  3839 ms
                                   cfoa, std::shared_mutex:  4734 ms
                                     foa::concurrent_table:  4120 ms
                                  tbb::concurrent_hash_map:  5434 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6556 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11473 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3708 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1057 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1483 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1141 ms
                                     cfoa, single threaded:  1498 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1517 ms
                  cfoa, std::shared_mutex, single threaded:  1795 ms
                    foa::concurrent_table, single threaded:  1461 ms
                 tbb::concurrent_hash_map, single threaded:  2238 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   764 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1509 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   735 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   757 ms
                                                      cfoa:  1086 ms
                                  cfoa, tbb::spin_rw_mutex:  1058 ms
                                   cfoa, std::shared_mutex:   874 ms
                                     foa::concurrent_table:   769 ms
                                  tbb::concurrent_hash_map:   910 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1122 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2925 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   983 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1132 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1557 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1438 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1417 ms
                  cfoa, std::shared_mutex, single threaded:  1744 ms
                    foa::concurrent_table, single threaded:  1432 ms
                 tbb::concurrent_hash_map, single threaded:  2399 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   759 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1070 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   655 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   739 ms
                                                      cfoa:   911 ms
                                  cfoa, tbb::spin_rw_mutex:   832 ms
                                   cfoa, std::shared_mutex:   816 ms
                                     foa::concurrent_table:   795 ms
                                  tbb::concurrent_hash_map:   854 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1032 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2008 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1119 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1336 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1731 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1530 ms
                                     cfoa, single threaded:  1989 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1990 ms
                  cfoa, std::shared_mutex, single threaded:  2223 ms
                    foa::concurrent_table, single threaded:  1952 ms
                 tbb::concurrent_hash_map, single threaded:  4009 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1006 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   844 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   716 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1045 ms
                                                      cfoa:   792 ms
                                  cfoa, tbb::spin_rw_mutex:   907 ms
                                   cfoa, std::shared_mutex:   963 ms
                                     foa::concurrent_table:   787 ms
                                  tbb::concurrent_hash_map:  1187 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1195 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   974 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   896 ms
```
<!--vs-x86/main.cpp.txt-->
