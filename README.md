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
                boost::unordered_flat_map, single threaded:  7756 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11716 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9284 ms
                                     cfoa, single threaded: 12626 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12404 ms
                  cfoa, std::shared_mutex, single threaded: 14304 ms
                    foa::concurrent_table, single threaded: 12211 ms
                 tbb::concurrent_hash_map, single threaded: 21941 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6597 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18672 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7066 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6375 ms
                                                      cfoa:  4630 ms
                                  cfoa, tbb::spin_rw_mutex:  4848 ms
                                   cfoa, std::shared_mutex:  4870 ms
                                     foa::concurrent_table:  4940 ms
                                  tbb::concurrent_hash_map:  7501 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7938 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15995 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  8936 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9107 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12786 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10223 ms
                                     cfoa, single threaded: 12622 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12592 ms
                  cfoa, std::shared_mutex, single threaded: 14764 ms
                    foa::concurrent_table, single threaded: 12600 ms
                 tbb::concurrent_hash_map, single threaded: 23121 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6164 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17924 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7211 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6871 ms
                                                      cfoa:  4648 ms
                                  cfoa, tbb::spin_rw_mutex:  4960 ms
                                   cfoa, std::shared_mutex:  5193 ms
                                     foa::concurrent_table:  4940 ms
                                  tbb::concurrent_hash_map:  7590 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8059 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19980 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12302 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21573 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24982 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24281 ms
                                     cfoa, single threaded: 25185 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25600 ms
                  cfoa, std::shared_mutex, single threaded: 25150 ms
                    foa::concurrent_table, single threaded: 24139 ms
                 tbb::concurrent_hash_map, single threaded: 42646 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11093 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8944 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9665 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10341 ms
                                                      cfoa:  8923 ms
                                  cfoa, tbb::spin_rw_mutex:  8808 ms
                                   cfoa, std::shared_mutex:  9152 ms
                                     foa::concurrent_table:  9016 ms
                                  tbb::concurrent_hash_map: 14231 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12233 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10999 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11874 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6409 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10169 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6093 ms
                                     cfoa, single threaded:  7532 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7514 ms
                  cfoa, std::shared_mutex, single threaded: 11688 ms
                    foa::concurrent_table, single threaded:  7378 ms
                 tbb::concurrent_hash_map, single threaded: 17280 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5181 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11243 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3434 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4472 ms
                                                      cfoa:  3768 ms
                                  cfoa, tbb::spin_rw_mutex:  3785 ms
                                   cfoa, std::shared_mutex:  4651 ms
                                     foa::concurrent_table:  3544 ms
                                  tbb::concurrent_hash_map:  5502 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6145 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11474 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3726 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1046 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1476 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1129 ms
                                     cfoa, single threaded:  1489 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1510 ms
                  cfoa, std::shared_mutex, single threaded:  1764 ms
                    foa::concurrent_table, single threaded:  1481 ms
                 tbb::concurrent_hash_map, single threaded:  2231 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   757 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1154 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   627 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   776 ms
                                                      cfoa:   680 ms
                                  cfoa, tbb::spin_rw_mutex:   700 ms
                                   cfoa, std::shared_mutex:   752 ms
                                     foa::concurrent_table:   873 ms
                                  tbb::concurrent_hash_map:   861 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1104 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1416 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   803 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1131 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1558 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1233 ms
                                     cfoa, single threaded:  1442 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1761 ms
                    foa::concurrent_table, single threaded:  1465 ms
                 tbb::concurrent_hash_map, single threaded:  2391 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   756 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1125 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   584 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   770 ms
                                                      cfoa:   648 ms
                                  cfoa, tbb::spin_rw_mutex:   619 ms
                                   cfoa, std::shared_mutex:   747 ms
                                     foa::concurrent_table:   872 ms
                                  tbb::concurrent_hash_map:   910 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1020 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1299 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1107 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1413 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1844 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1672 ms
                                     cfoa, single threaded:  2204 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2137 ms
                  cfoa, std::shared_mutex, single threaded:  2405 ms
                    foa::concurrent_table, single threaded:  2237 ms
                 tbb::concurrent_hash_map, single threaded:  4389 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1002 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   894 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   876 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1133 ms
                                                      cfoa:   897 ms
                                  cfoa, tbb::spin_rw_mutex:   864 ms
                                   cfoa, std::shared_mutex:   894 ms
                                     foa::concurrent_table:   893 ms
                                  tbb::concurrent_hash_map:  1570 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1197 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1003 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   944 ms
```
<!--vs-x86/main.cpp.txt-->
