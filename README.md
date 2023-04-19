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
                boost::unordered_flat_map, single threaded:  7737 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11713 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9283 ms
                                     cfoa, single threaded: 12156 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12320 ms
                  cfoa, std::shared_mutex, single threaded: 14406 ms
                    foa::concurrent_table, single threaded: 12068 ms
               boost::concurrent_flat_map, single threaded: 12078 ms
                 tbb::concurrent_hash_map, single threaded: 21826 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6512 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13426 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6962 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5825 ms
                                                      cfoa:  5826 ms
                                  cfoa, tbb::spin_rw_mutex:  5835 ms
                                   cfoa, std::shared_mutex:  5444 ms
                                     foa::concurrent_table:  5282 ms
                                boost::concurrent_flat_map:  5454 ms
                                  tbb::concurrent_hash_map:  7570 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7771 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16431 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10257 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9204 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12853 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10215 ms
                                     cfoa, single threaded: 12285 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12404 ms
                  cfoa, std::shared_mutex, single threaded: 14344 ms
                    foa::concurrent_table, single threaded: 12373 ms
               boost::concurrent_flat_map, single threaded: 12390 ms
                 tbb::concurrent_hash_map, single threaded: 22942 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6225 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11798 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6962 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6564 ms
                                                      cfoa:  6627 ms
                                  cfoa, tbb::spin_rw_mutex:  6385 ms
                                   cfoa, std::shared_mutex:  6185 ms
                                     foa::concurrent_table:  5772 ms
                                boost::concurrent_flat_map:  5127 ms
                                  tbb::concurrent_hash_map:  7669 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8093 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22770 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12231 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21926 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24972 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23821 ms
                                     cfoa, single threaded: 25721 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26093 ms
                  cfoa, std::shared_mutex, single threaded: 26782 ms
                    foa::concurrent_table, single threaded: 24872 ms
               boost::concurrent_flat_map, single threaded: 25014 ms
                 tbb::concurrent_hash_map, single threaded: 42368 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11662 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9196 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10005 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10235 ms
                                                      cfoa:  9459 ms
                                  cfoa, tbb::spin_rw_mutex:  9823 ms
                                   cfoa, std::shared_mutex:  9659 ms
                                     foa::concurrent_table:  9733 ms
                                boost::concurrent_flat_map: 10306 ms
                                  tbb::concurrent_hash_map: 16573 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11576 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10167 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11907 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6312 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10215 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6070 ms
                                     cfoa, single threaded:  7554 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7573 ms
                  cfoa, std::shared_mutex, single threaded: 11912 ms
                    foa::concurrent_table, single threaded:  7377 ms
               boost::concurrent_flat_map, single threaded:  7487 ms
                 tbb::concurrent_hash_map, single threaded: 17423 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5308 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11435 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3440 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4567 ms
                                                      cfoa:  3929 ms
                                  cfoa, tbb::spin_rw_mutex:  4100 ms
                                   cfoa, std::shared_mutex:  4748 ms
                                     foa::concurrent_table:  3959 ms
                                boost::concurrent_flat_map:  4011 ms
                                  tbb::concurrent_hash_map:  5472 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6310 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11472 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3769 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1067 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1527 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1147 ms
                                     cfoa, single threaded:  1545 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1548 ms
                  cfoa, std::shared_mutex, single threaded:  1824 ms
                    foa::concurrent_table, single threaded:  1475 ms
               boost::concurrent_flat_map, single threaded:  1479 ms
                 tbb::concurrent_hash_map, single threaded:  2226 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   786 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   870 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   709 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   772 ms
                                                      cfoa:   786 ms
                                  cfoa, tbb::spin_rw_mutex:   790 ms
                                   cfoa, std::shared_mutex:   705 ms
                                     foa::concurrent_table:   771 ms
                                boost::concurrent_flat_map:   814 ms
                                  tbb::concurrent_hash_map:   862 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1087 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3657 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   750 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1137 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1604 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1235 ms
                                     cfoa, single threaded:  1447 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1445 ms
                  cfoa, std::shared_mutex, single threaded:  1830 ms
                    foa::concurrent_table, single threaded:  1465 ms
               boost::concurrent_flat_map, single threaded:  1471 ms
                 tbb::concurrent_hash_map, single threaded:  2376 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   739 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1228 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   620 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   792 ms
                                                      cfoa:   840 ms
                                  cfoa, tbb::spin_rw_mutex:   933 ms
                                   cfoa, std::shared_mutex:   747 ms
                                     foa::concurrent_table:   969 ms
                                boost::concurrent_flat_map:   864 ms
                                  tbb::concurrent_hash_map:   899 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2347 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   916 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1348 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1749 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1566 ms
                                     cfoa, single threaded:  2105 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2108 ms
                  cfoa, std::shared_mutex, single threaded:  2304 ms
                    foa::concurrent_table, single threaded:  2081 ms
               boost::concurrent_flat_map, single threaded:  2053 ms
                 tbb::concurrent_hash_map, single threaded:  4126 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   887 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   847 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   747 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1020 ms
                                                      cfoa:   959 ms
                                  cfoa, tbb::spin_rw_mutex:   921 ms
                                   cfoa, std::shared_mutex:   957 ms
                                     foa::concurrent_table:   935 ms
                                boost::concurrent_flat_map:   861 ms
                                  tbb::concurrent_hash_map:  1463 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1167 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   915 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   879 ms
```
<!--vs-x86/main.cpp.txt-->
