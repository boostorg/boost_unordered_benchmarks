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
                boost::unordered_flat_map, single threaded:  8055 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11957 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9578 ms
                                     cfoa, single threaded: 12439 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12244 ms
                  cfoa, std::shared_mutex, single threaded: 14184 ms
                    foa::concurrent_table, single threaded: 11736 ms
                 tbb::concurrent_hash_map, single threaded: 22553 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6435 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17888 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6744 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6024 ms
                                                      cfoa:  6220 ms
                                  cfoa, tbb::spin_rw_mutex:  6150 ms
                                   cfoa, std::shared_mutex:  5539 ms
                                     foa::concurrent_table:  5488 ms
                                  tbb::concurrent_hash_map:  7540 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7715 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15020 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9600 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9255 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12825 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10245 ms
                                     cfoa, single threaded: 12175 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12119 ms
                  cfoa, std::shared_mutex, single threaded: 14335 ms
                    foa::concurrent_table, single threaded: 12243 ms
                 tbb::concurrent_hash_map, single threaded: 23042 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6125 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16849 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7960 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6871 ms
                                                      cfoa:  6812 ms
                                  cfoa, tbb::spin_rw_mutex:  6488 ms
                                   cfoa, std::shared_mutex:  6104 ms
                                     foa::concurrent_table:  5511 ms
                                  tbb::concurrent_hash_map:  7399 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8002 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18617 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12011 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20852 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24619 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23672 ms
                                     cfoa, single threaded: 23007 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24319 ms
                  cfoa, std::shared_mutex, single threaded: 24120 ms
                    foa::concurrent_table, single threaded: 25282 ms
                 tbb::concurrent_hash_map, single threaded: 41746 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10597 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9382 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9512 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10241 ms
                                                      cfoa:  8951 ms
                                  cfoa, tbb::spin_rw_mutex:  8511 ms
                                   cfoa, std::shared_mutex:  8915 ms
                                     foa::concurrent_table:  9243 ms
                                  tbb::concurrent_hash_map: 14124 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12551 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10188 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11540 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5768 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10174 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6032 ms
                                     cfoa, single threaded:  7382 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7472 ms
                  cfoa, std::shared_mutex, single threaded: 11634 ms
                    foa::concurrent_table, single threaded:  7207 ms
                 tbb::concurrent_hash_map, single threaded: 17274 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5178 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11173 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3420 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4405 ms
                                                      cfoa:  3783 ms
                                  cfoa, tbb::spin_rw_mutex:  3782 ms
                                   cfoa, std::shared_mutex:  4800 ms
                                     foa::concurrent_table:  4079 ms
                                  tbb::concurrent_hash_map:  5285 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6219 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11422 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3728 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1056 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1484 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1142 ms
                                     cfoa, single threaded:  1500 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1523 ms
                  cfoa, std::shared_mutex, single threaded:  1803 ms
                    foa::concurrent_table, single threaded:  1463 ms
                 tbb::concurrent_hash_map, single threaded:  2242 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   771 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1345 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   632 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   775 ms
                                                      cfoa:  1044 ms
                                  cfoa, tbb::spin_rw_mutex:   938 ms
                                   cfoa, std::shared_mutex:   850 ms
                                     foa::concurrent_table:   784 ms
                                  tbb::concurrent_hash_map:   848 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1116 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3266 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   783 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1131 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1558 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1439 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1416 ms
                  cfoa, std::shared_mutex, single threaded:  1748 ms
                    foa::concurrent_table, single threaded:  1433 ms
                 tbb::concurrent_hash_map, single threaded:  2398 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   741 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1083 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   583 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   792 ms
                                                      cfoa:   829 ms
                                  cfoa, tbb::spin_rw_mutex:   855 ms
                                   cfoa, std::shared_mutex:   864 ms
                                     foa::concurrent_table:   888 ms
                                  tbb::concurrent_hash_map:   870 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1677 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1126 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1327 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1739 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1548 ms
                                     cfoa, single threaded:  2021 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1987 ms
                  cfoa, std::shared_mutex, single threaded:  2184 ms
                    foa::concurrent_table, single threaded:  1928 ms
                 tbb::concurrent_hash_map, single threaded:  3981 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1023 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   773 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   642 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   996 ms
                                                      cfoa:   854 ms
                                  cfoa, tbb::spin_rw_mutex:   905 ms
                                   cfoa, std::shared_mutex:   910 ms
                                     foa::concurrent_table:   771 ms
                                  tbb::concurrent_hash_map:  1690 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1147 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   893 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   866 ms
```
<!--vs-x86/main.cpp.txt-->
