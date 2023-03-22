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
                boost::unordered_flat_map, single threaded:  8037 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11984 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9593 ms
                                     cfoa, single threaded: 12986 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12769 ms
                  cfoa, std::shared_mutex, single threaded: 14659 ms
                    foa::concurrent_table, single threaded: 12289 ms
                 tbb::concurrent_hash_map, single threaded: 22481 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6467 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11493 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7502 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5869 ms
                                                      cfoa:  4730 ms
                                  cfoa, tbb::spin_rw_mutex:  4873 ms
                                   cfoa, std::shared_mutex:  4769 ms
                                     foa::concurrent_table:  4580 ms
                                  tbb::concurrent_hash_map:  7443 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7832 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14804 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9769 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9542 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13190 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10574 ms
                                     cfoa, single threaded: 12943 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12955 ms
                  cfoa, std::shared_mutex, single threaded: 14880 ms
                    foa::concurrent_table, single threaded: 12848 ms
                 tbb::concurrent_hash_map, single threaded: 23680 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6156 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17253 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6598 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6599 ms
                                                      cfoa:  5027 ms
                                  cfoa, tbb::spin_rw_mutex:  5078 ms
                                   cfoa, std::shared_mutex:  5196 ms
                                     foa::concurrent_table:  4814 ms
                                  tbb::concurrent_hash_map:  7516 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8012 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19194 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11732 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23133 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25817 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24843 ms
                                     cfoa, single threaded: 25676 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25207 ms
                  cfoa, std::shared_mutex, single threaded: 25175 ms
                    foa::concurrent_table, single threaded: 25670 ms
                 tbb::concurrent_hash_map, single threaded: 42112 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10724 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8673 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9679 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10787 ms
                                                      cfoa:  8551 ms
                                  cfoa, tbb::spin_rw_mutex:  8805 ms
                                   cfoa, std::shared_mutex:  9165 ms
                                     foa::concurrent_table:  9165 ms
                                  tbb::concurrent_hash_map: 14170 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 13036 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10454 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11736 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5646 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10159 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6034 ms
                                     cfoa, single threaded:  7503 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7579 ms
                  cfoa, std::shared_mutex, single threaded: 11693 ms
                    foa::concurrent_table, single threaded:  7313 ms
                 tbb::concurrent_hash_map, single threaded: 17331 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5444 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11512 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3391 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4451 ms
                                                      cfoa:  3971 ms
                                  cfoa, tbb::spin_rw_mutex:  3840 ms
                                   cfoa, std::shared_mutex:  4674 ms
                                     foa::concurrent_table:  3965 ms
                                  tbb::concurrent_hash_map:  5365 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6581 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11506 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3742 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1056 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1478 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1139 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1533 ms
                  cfoa, std::shared_mutex, single threaded:  1798 ms
                    foa::concurrent_table, single threaded:  1498 ms
                 tbb::concurrent_hash_map, single threaded:  2245 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   792 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2452 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   869 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   778 ms
                                                      cfoa:   761 ms
                                  cfoa, tbb::spin_rw_mutex:   915 ms
                                   cfoa, std::shared_mutex:   767 ms
                                     foa::concurrent_table:   696 ms
                                  tbb::concurrent_hash_map:   862 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1101 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1233 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1170 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1571 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1473 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1486 ms
                  cfoa, std::shared_mutex, single threaded:  1816 ms
                    foa::concurrent_table, single threaded:  1462 ms
                 tbb::concurrent_hash_map, single threaded:  2387 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1830 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   724 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   796 ms
                                                      cfoa:   704 ms
                                  cfoa, tbb::spin_rw_mutex:   942 ms
                                   cfoa, std::shared_mutex:   819 ms
                                     foa::concurrent_table:   716 ms
                                  tbb::concurrent_hash_map:   887 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1007 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2014 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1047 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1294 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1685 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1469 ms
                                     cfoa, single threaded:  1996 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2062 ms
                  cfoa, std::shared_mutex, single threaded:  2272 ms
                    foa::concurrent_table, single threaded:  2026 ms
                 tbb::concurrent_hash_map, single threaded:  4101 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1058 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   756 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   794 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   915 ms
                                                      cfoa:   853 ms
                                  cfoa, tbb::spin_rw_mutex:   882 ms
                                   cfoa, std::shared_mutex:   955 ms
                                     foa::concurrent_table:   894 ms
                                  tbb::concurrent_hash_map:  1582 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1126 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   959 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   792 ms
```
<!--vs-x86/main.cpp.txt-->
