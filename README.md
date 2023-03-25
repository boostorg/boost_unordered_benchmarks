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
                boost::unordered_flat_map, single threaded:  7750 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11694 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9277 ms
                                     cfoa, single threaded: 12698 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12547 ms
                  cfoa, std::shared_mutex, single threaded: 14509 ms
                    foa::concurrent_table, single threaded: 11486 ms
                 tbb::concurrent_hash_map, single threaded: 21931 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6481 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16220 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7139 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5829 ms
                                                      cfoa:  4742 ms
                                  cfoa, tbb::spin_rw_mutex:  4818 ms
                                   cfoa, std::shared_mutex:  4876 ms
                                     foa::concurrent_table:  5821 ms
                                  tbb::concurrent_hash_map:  7616 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7763 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19108 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10264 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9267 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12953 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10316 ms
                                     cfoa, single threaded: 12694 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12718 ms
                  cfoa, std::shared_mutex, single threaded: 14637 ms
                    foa::concurrent_table, single threaded: 12208 ms
                 tbb::concurrent_hash_map, single threaded: 23248 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6148 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12846 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7184 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6445 ms
                                                      cfoa:  4989 ms
                                  cfoa, tbb::spin_rw_mutex:  4869 ms
                                   cfoa, std::shared_mutex:  5250 ms
                                     foa::concurrent_table:  5312 ms
                                  tbb::concurrent_hash_map:  7616 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7973 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18170 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11525 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23094 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26023 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24447 ms
                                     cfoa, single threaded: 24952 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25333 ms
                  cfoa, std::shared_mutex, single threaded: 25485 ms
                    foa::concurrent_table, single threaded: 25068 ms
                 tbb::concurrent_hash_map, single threaded: 42713 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10429 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8863 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9659 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10403 ms
                                                      cfoa:  8641 ms
                                  cfoa, tbb::spin_rw_mutex:  8965 ms
                                   cfoa, std::shared_mutex:  8622 ms
                                     foa::concurrent_table:  8915 ms
                                  tbb::concurrent_hash_map: 14588 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12609 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10418 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11852 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5790 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10157 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6043 ms
                                     cfoa, single threaded:  7522 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7570 ms
                  cfoa, std::shared_mutex, single threaded: 11634 ms
                    foa::concurrent_table, single threaded:  7143 ms
                 tbb::concurrent_hash_map, single threaded: 17346 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5341 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11166 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3434 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4465 ms
                                                      cfoa:  3766 ms
                                  cfoa, tbb::spin_rw_mutex:  4006 ms
                                   cfoa, std::shared_mutex:  4709 ms
                                     foa::concurrent_table:  4055 ms
                                  tbb::concurrent_hash_map:  5454 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6395 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11442 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3750 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1069 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1494 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1159 ms
                                     cfoa, single threaded:  1515 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1535 ms
                  cfoa, std::shared_mutex, single threaded:  1798 ms
                    foa::concurrent_table, single threaded:  1469 ms
                 tbb::concurrent_hash_map, single threaded:  2230 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1257 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   597 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   776 ms
                                                      cfoa:   805 ms
                                  cfoa, tbb::spin_rw_mutex:   861 ms
                                   cfoa, std::shared_mutex:   803 ms
                                     foa::concurrent_table:   840 ms
                                  tbb::concurrent_hash_map:   897 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1091 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1628 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1025 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1135 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1594 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1229 ms
                                     cfoa, single threaded:  1478 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1481 ms
                  cfoa, std::shared_mutex, single threaded:  1799 ms
                    foa::concurrent_table, single threaded:  1431 ms
                 tbb::concurrent_hash_map, single threaded:  2396 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   741 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1770 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   680 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   841 ms
                                                      cfoa:   728 ms
                                  cfoa, tbb::spin_rw_mutex:   794 ms
                                   cfoa, std::shared_mutex:   793 ms
                                     foa::concurrent_table:   839 ms
                                  tbb::concurrent_hash_map:   886 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1018 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1655 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   953 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1333 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1779 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1566 ms
                                     cfoa, single threaded:  2086 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2031 ms
                  cfoa, std::shared_mutex, single threaded:  2354 ms
                    foa::concurrent_table, single threaded:  2018 ms
                 tbb::concurrent_hash_map, single threaded:  3940 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1042 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   825 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   725 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1039 ms
                                                      cfoa:   874 ms
                                  cfoa, tbb::spin_rw_mutex:   768 ms
                                   cfoa, std::shared_mutex:   853 ms
                                     foa::concurrent_table:   848 ms
                                  tbb::concurrent_hash_map:  1349 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1013 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   912 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   950 ms
```
<!--vs-x86/main.cpp.txt-->
