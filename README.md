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
                boost::unordered_flat_map, single threaded:  7923 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11898 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9563 ms
                                     cfoa, single threaded: 12997 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12802 ms
                  cfoa, std::shared_mutex, single threaded: 14673 ms
                    foa::concurrent_table, single threaded: 11680 ms
                 tbb::concurrent_hash_map, single threaded: 22494 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6521 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18650 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7467 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5815 ms
                                                      cfoa:  5033 ms
                                  cfoa, tbb::spin_rw_mutex:  4782 ms
                                   cfoa, std::shared_mutex:  4994 ms
                                     foa::concurrent_table:  5755 ms
                                  tbb::concurrent_hash_map:  7783 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7759 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21758 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10049 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9206 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12862 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10177 ms
                                     cfoa, single threaded: 12599 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12635 ms
                  cfoa, std::shared_mutex, single threaded: 14492 ms
                    foa::concurrent_table, single threaded: 12169 ms
                 tbb::concurrent_hash_map, single threaded: 23219 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6232 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17715 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6753 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6773 ms
                                                      cfoa:  4962 ms
                                  cfoa, tbb::spin_rw_mutex:  4966 ms
                                   cfoa, std::shared_mutex:  5195 ms
                                     foa::concurrent_table:  5266 ms
                                  tbb::concurrent_hash_map:  7669 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8127 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14821 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11961 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20797 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24300 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23077 ms
                                     cfoa, single threaded: 24145 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25422 ms
                  cfoa, std::shared_mutex, single threaded: 25606 ms
                    foa::concurrent_table, single threaded: 25052 ms
                 tbb::concurrent_hash_map, single threaded: 42751 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11101 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8978 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9836 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10166 ms
                                                      cfoa:  8700 ms
                                  cfoa, tbb::spin_rw_mutex:  9429 ms
                                   cfoa, std::shared_mutex:  9643 ms
                                     foa::concurrent_table:  9285 ms
                                  tbb::concurrent_hash_map: 14122 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12675 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10131 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11834 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5749 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10187 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6026 ms
                                     cfoa, single threaded:  7506 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7550 ms
                  cfoa, std::shared_mutex, single threaded: 11654 ms
                    foa::concurrent_table, single threaded:  7198 ms
                 tbb::concurrent_hash_map, single threaded: 17266 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5188 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11324 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3423 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4489 ms
                                                      cfoa:  3782 ms
                                  cfoa, tbb::spin_rw_mutex:  3770 ms
                                   cfoa, std::shared_mutex:  4779 ms
                                     foa::concurrent_table:  4096 ms
                                  tbb::concurrent_hash_map:  5394 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6348 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11338 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3732 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1073 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1496 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1159 ms
                                     cfoa, single threaded:  1516 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1535 ms
                  cfoa, std::shared_mutex, single threaded:  1797 ms
                    foa::concurrent_table, single threaded:  1468 ms
                 tbb::concurrent_hash_map, single threaded:  2234 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   761 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1412 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   732 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   769 ms
                                                      cfoa:   915 ms
                                  cfoa, tbb::spin_rw_mutex:   933 ms
                                   cfoa, std::shared_mutex:   838 ms
                                     foa::concurrent_table:   702 ms
                                  tbb::concurrent_hash_map:   879 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1124 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2075 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1465 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1135 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1595 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1230 ms
                                     cfoa, single threaded:  1481 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1483 ms
                  cfoa, std::shared_mutex, single threaded:  1802 ms
                    foa::concurrent_table, single threaded:  1431 ms
                 tbb::concurrent_hash_map, single threaded:  2390 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   759 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1052 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   650 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   802 ms
                                                      cfoa:   769 ms
                                  cfoa, tbb::spin_rw_mutex:   876 ms
                                   cfoa, std::shared_mutex:   785 ms
                                     foa::concurrent_table:   786 ms
                                  tbb::concurrent_hash_map:   909 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1012 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1093 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1113 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1356 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1715 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1517 ms
                                     cfoa, single threaded:  2109 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2143 ms
                  cfoa, std::shared_mutex, single threaded:  2309 ms
                    foa::concurrent_table, single threaded:  1929 ms
                 tbb::concurrent_hash_map, single threaded:  3975 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   994 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   785 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   807 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1010 ms
                                                      cfoa:   882 ms
                                  cfoa, tbb::spin_rw_mutex:   838 ms
                                   cfoa, std::shared_mutex:   935 ms
                                     foa::concurrent_table:   879 ms
                                  tbb::concurrent_hash_map:  1468 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1100 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   897 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   824 ms
```
<!--vs-x86/main.cpp.txt-->
