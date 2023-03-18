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
                boost::unordered_flat_map, single threaded:  7754 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11698 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9275 ms
                                     cfoa, single threaded: 12573 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12397 ms
                  cfoa, std::shared_mutex, single threaded: 14167 ms
                    foa::concurrent_table, single threaded: 12113 ms
                 tbb::concurrent_hash_map, single threaded: 21890 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6576 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12923 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6868 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5881 ms
                                                      cfoa:  4848 ms
                                  cfoa, tbb::spin_rw_mutex:  4835 ms
                                   cfoa, std::shared_mutex:  4815 ms
                                     foa::concurrent_table:  4360 ms
                                  tbb::concurrent_hash_map:  7501 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7715 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16875 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9556 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9276 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13013 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10320 ms
                                     cfoa, single threaded: 12574 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12779 ms
                  cfoa, std::shared_mutex, single threaded: 14668 ms
                    foa::concurrent_table, single threaded: 12504 ms
                 tbb::concurrent_hash_map, single threaded: 23323 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6165 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16866 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7521 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6490 ms
                                                      cfoa:  5522 ms
                                  cfoa, tbb::spin_rw_mutex:  4798 ms
                                   cfoa, std::shared_mutex:  5043 ms
                                     foa::concurrent_table:  4650 ms
                                  tbb::concurrent_hash_map:  7462 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8032 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15577 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12184 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21737 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25241 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23930 ms
                                     cfoa, single threaded: 24893 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24770 ms
                  cfoa, std::shared_mutex, single threaded: 25659 ms
                    foa::concurrent_table, single threaded: 25772 ms
                 tbb::concurrent_hash_map, single threaded: 42867 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10850 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9088 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9770 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10498 ms
                                                      cfoa:  8569 ms
                                  cfoa, tbb::spin_rw_mutex:  8924 ms
                                   cfoa, std::shared_mutex:  9323 ms
                                     foa::concurrent_table:  9087 ms
                                  tbb::concurrent_hash_map: 15089 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10892 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12004 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5746 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10222 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6062 ms
                                     cfoa, single threaded:  7547 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7601 ms
                  cfoa, std::shared_mutex, single threaded: 11627 ms
                    foa::concurrent_table, single threaded:  7326 ms
                 tbb::concurrent_hash_map, single threaded: 17490 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5404 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11171 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3424 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4590 ms
                                                      cfoa:  3671 ms
                                  cfoa, tbb::spin_rw_mutex:  3807 ms
                                   cfoa, std::shared_mutex:  4644 ms
                                     foa::concurrent_table:  4048 ms
                                  tbb::concurrent_hash_map:  5486 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6364 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11532 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3761 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1051 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1497 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1129 ms
                                     cfoa, single threaded:  1520 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1536 ms
                  cfoa, std::shared_mutex, single threaded:  1795 ms
                    foa::concurrent_table, single threaded:  1509 ms
                 tbb::concurrent_hash_map, single threaded:  2286 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   753 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1235 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   586 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   779 ms
                                                      cfoa:   784 ms
                                  cfoa, tbb::spin_rw_mutex:   874 ms
                                   cfoa, std::shared_mutex:   792 ms
                                     foa::concurrent_table:   793 ms
                                  tbb::concurrent_hash_map:   870 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1103 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1538 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   883 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1131 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1553 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1472 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1487 ms
                  cfoa, std::shared_mutex, single threaded:  1788 ms
                    foa::concurrent_table, single threaded:  1468 ms
                 tbb::concurrent_hash_map, single threaded:  2387 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1460 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   695 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   757 ms
                                                      cfoa:   739 ms
                                  cfoa, tbb::spin_rw_mutex:   907 ms
                                   cfoa, std::shared_mutex:   828 ms
                                     foa::concurrent_table:   826 ms
                                  tbb::concurrent_hash_map:   877 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1008 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1711 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1013 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1332 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1717 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1530 ms
                                     cfoa, single threaded:  2088 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2067 ms
                  cfoa, std::shared_mutex, single threaded:  2408 ms
                    foa::concurrent_table, single threaded:  2020 ms
                 tbb::concurrent_hash_map, single threaded:  3810 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1021 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   817 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   775 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   988 ms
                                                      cfoa:   755 ms
                                  cfoa, tbb::spin_rw_mutex:   725 ms
                                   cfoa, std::shared_mutex:  1010 ms
                                     foa::concurrent_table:   806 ms
                                  tbb::concurrent_hash_map:  1456 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1181 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   869 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   757 ms
```
<!--vs-x86/main.cpp.txt-->
