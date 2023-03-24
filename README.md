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
                boost::unordered_flat_map, single threaded:  7681 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11690 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9302 ms
                                     cfoa, single threaded: 12652 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12476 ms
                  cfoa, std::shared_mutex, single threaded: 14364 ms
                    foa::concurrent_table, single threaded: 11969 ms
                 tbb::concurrent_hash_map, single threaded: 21931 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6449 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18773 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7266 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6082 ms
                                                      cfoa:  4804 ms
                                  cfoa, tbb::spin_rw_mutex:  4653 ms
                                   cfoa, std::shared_mutex:  4923 ms
                                     foa::concurrent_table:  5660 ms
                                  tbb::concurrent_hash_map:  7390 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7723 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15519 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9629 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9268 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12938 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10283 ms
                                     cfoa, single threaded: 12632 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12583 ms
                  cfoa, std::shared_mutex, single threaded: 14614 ms
                    foa::concurrent_table, single threaded: 12215 ms
                 tbb::concurrent_hash_map, single threaded: 23282 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6315 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 10840 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7229 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6784 ms
                                                      cfoa:  4975 ms
                                  cfoa, tbb::spin_rw_mutex:  4766 ms
                                   cfoa, std::shared_mutex:  5138 ms
                                     foa::concurrent_table:  5379 ms
                                  tbb::concurrent_hash_map:  7620 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8076 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21513 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11763 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20480 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 23832 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23441 ms
                                     cfoa, single threaded: 24190 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25015 ms
                  cfoa, std::shared_mutex, single threaded: 25374 ms
                    foa::concurrent_table, single threaded: 24895 ms
                 tbb::concurrent_hash_map, single threaded: 42471 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11019 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8505 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9543 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10488 ms
                                                      cfoa:  8981 ms
                                  cfoa, tbb::spin_rw_mutex:  9741 ms
                                   cfoa, std::shared_mutex:  8719 ms
                                     foa::concurrent_table:  9151 ms
                                  tbb::concurrent_hash_map: 13538 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12371 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10335 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11848 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5679 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10142 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6037 ms
                                     cfoa, single threaded:  7534 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7556 ms
                  cfoa, std::shared_mutex, single threaded: 11611 ms
                    foa::concurrent_table, single threaded:  7240 ms
                 tbb::concurrent_hash_map, single threaded: 17242 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5430 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11251 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3408 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4476 ms
                                                      cfoa:  3743 ms
                                  cfoa, tbb::spin_rw_mutex:  3830 ms
                                   cfoa, std::shared_mutex:  4852 ms
                                     foa::concurrent_table:  3891 ms
                                  tbb::concurrent_hash_map:  5312 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6331 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11230 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3766 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1049 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1479 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1147 ms
                                     cfoa, single threaded:  1520 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1538 ms
                  cfoa, std::shared_mutex, single threaded:  1793 ms
                    foa::concurrent_table, single threaded:  1506 ms
                 tbb::concurrent_hash_map, single threaded:  2250 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   754 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   848 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   691 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   744 ms
                                                      cfoa:   851 ms
                                  cfoa, tbb::spin_rw_mutex:   899 ms
                                   cfoa, std::shared_mutex:   816 ms
                                     foa::concurrent_table:   830 ms
                                  tbb::concurrent_hash_map:   861 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1095 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1650 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   804 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1135 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1594 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1479 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1482 ms
                  cfoa, std::shared_mutex, single threaded:  1796 ms
                    foa::concurrent_table, single threaded:  1432 ms
                 tbb::concurrent_hash_map, single threaded:  2385 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   775 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2366 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   620 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   775 ms
                                                      cfoa:   762 ms
                                  cfoa, tbb::spin_rw_mutex:   770 ms
                                   cfoa, std::shared_mutex:   810 ms
                                     foa::concurrent_table:   920 ms
                                  tbb::concurrent_hash_map:   878 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1014 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2290 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   934 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1335 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1730 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1525 ms
                                     cfoa, single threaded:  2052 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2044 ms
                  cfoa, std::shared_mutex, single threaded:  2239 ms
                    foa::concurrent_table, single threaded:  1858 ms
                 tbb::concurrent_hash_map, single threaded:  4009 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   860 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   700 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   783 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   883 ms
                                                      cfoa:   887 ms
                                  cfoa, tbb::spin_rw_mutex:   872 ms
                                   cfoa, std::shared_mutex:   970 ms
                                     foa::concurrent_table:   806 ms
                                  tbb::concurrent_hash_map:  1175 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1182 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   850 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   814 ms
```
<!--vs-x86/main.cpp.txt-->
