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
                boost::unordered_flat_map, single threaded:  7721 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11606 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9291 ms
                                     cfoa, single threaded: 12600 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12352 ms
                  cfoa, std::shared_mutex, single threaded: 14171 ms
                    foa::concurrent_table, single threaded: 12198 ms
                 tbb::concurrent_hash_map, single threaded: 21916 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6478 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13611 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7054 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6015 ms
                                                      cfoa:  4778 ms
                                  cfoa, tbb::spin_rw_mutex:  4670 ms
                                   cfoa, std::shared_mutex:  4948 ms
                                     foa::concurrent_table:  4963 ms
                                  tbb::concurrent_hash_map:  7536 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7877 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17447 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9621 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9278 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12901 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10233 ms
                                     cfoa, single threaded: 12669 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12722 ms
                  cfoa, std::shared_mutex, single threaded: 14691 ms
                    foa::concurrent_table, single threaded: 12558 ms
                 tbb::concurrent_hash_map, single threaded: 23167 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6158 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15798 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7334 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6453 ms
                                                      cfoa:  4982 ms
                                  cfoa, tbb::spin_rw_mutex:  4890 ms
                                   cfoa, std::shared_mutex:  5201 ms
                                     foa::concurrent_table:  5183 ms
                                  tbb::concurrent_hash_map:  7647 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7962 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 24121 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12267 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20699 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 23878 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23441 ms
                                     cfoa, single threaded: 24247 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24756 ms
                  cfoa, std::shared_mutex, single threaded: 25507 ms
                    foa::concurrent_table, single threaded: 24151 ms
                 tbb::concurrent_hash_map, single threaded: 43122 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10808 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8866 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9304 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10051 ms
                                                      cfoa:  8925 ms
                                  cfoa, tbb::spin_rw_mutex:  9010 ms
                                   cfoa, std::shared_mutex:  9415 ms
                                     foa::concurrent_table:  9536 ms
                                  tbb::concurrent_hash_map: 14200 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11740 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10395 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12199 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6420 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10144 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  5985 ms
                                     cfoa, single threaded:  7569 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7589 ms
                  cfoa, std::shared_mutex, single threaded: 11662 ms
                    foa::concurrent_table, single threaded:  7424 ms
                 tbb::concurrent_hash_map, single threaded: 17474 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5393 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11287 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3462 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4545 ms
                                                      cfoa:  3768 ms
                                  cfoa, tbb::spin_rw_mutex:  3727 ms
                                   cfoa, std::shared_mutex:  4611 ms
                                     foa::concurrent_table:  3713 ms
                                  tbb::concurrent_hash_map:  5425 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6220 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11430 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3770 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1046 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1476 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1127 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1536 ms
                  cfoa, std::shared_mutex, single threaded:  1804 ms
                    foa::concurrent_table, single threaded:  1497 ms
                 tbb::concurrent_hash_map, single threaded:  2225 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   769 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1464 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   784 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   769 ms
                                                      cfoa:   874 ms
                                  cfoa, tbb::spin_rw_mutex:   869 ms
                                   cfoa, std::shared_mutex:   814 ms
                                     foa::concurrent_table:   811 ms
                                  tbb::concurrent_hash_map:   886 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1101 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2314 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   915 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1133 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1556 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1225 ms
                                     cfoa, single threaded:  1475 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1481 ms
                  cfoa, std::shared_mutex, single threaded:  1781 ms
                    foa::concurrent_table, single threaded:  1463 ms
                 tbb::concurrent_hash_map, single threaded:  2376 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   767 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1012 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   737 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   786 ms
                                                      cfoa:   851 ms
                                  cfoa, tbb::spin_rw_mutex:   900 ms
                                   cfoa, std::shared_mutex:   811 ms
                                     foa::concurrent_table:   810 ms
                                  tbb::concurrent_hash_map:   880 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1003 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2112 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   928 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1401 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1731 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1568 ms
                                     cfoa, single threaded:  2085 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2040 ms
                  cfoa, std::shared_mutex, single threaded:  2274 ms
                    foa::concurrent_table, single threaded:  2004 ms
                 tbb::concurrent_hash_map, single threaded:  3994 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   902 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   761 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   720 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   978 ms
                                                      cfoa:   875 ms
                                  cfoa, tbb::spin_rw_mutex:   815 ms
                                   cfoa, std::shared_mutex:   989 ms
                                     foa::concurrent_table:   854 ms
                                  tbb::concurrent_hash_map:  1515 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1139 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   913 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   880 ms
```
<!--vs-x86/main.cpp.txt-->
