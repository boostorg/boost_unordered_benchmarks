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
                boost::unordered_flat_map, single threaded:  7747 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11719 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9295 ms
                                     cfoa, single threaded: 12250 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12333 ms
                  cfoa, std::shared_mutex, single threaded: 14311 ms
                    foa::concurrent_table, single threaded: 12039 ms
               boost::concurrent_flat_map, single threaded: 12064 ms
                 tbb::concurrent_hash_map, single threaded: 21838 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6545 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12013 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6956 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5992 ms
                                                      cfoa:  5804 ms
                                  cfoa, tbb::spin_rw_mutex:  5820 ms
                                   cfoa, std::shared_mutex:  5268 ms
                                     foa::concurrent_table:  5350 ms
                                boost::concurrent_flat_map:  5422 ms
                                  tbb::concurrent_hash_map:  7554 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8582 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22791 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9932 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9280 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12854 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10257 ms
                                     cfoa, single threaded: 12467 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12503 ms
                  cfoa, std::shared_mutex, single threaded: 14410 ms
                    foa::concurrent_table, single threaded: 12425 ms
               boost::concurrent_flat_map, single threaded: 12409 ms
                 tbb::concurrent_hash_map, single threaded: 22937 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6201 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17938 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7181 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6573 ms
                                                      cfoa:  6228 ms
                                  cfoa, tbb::spin_rw_mutex:  6467 ms
                                   cfoa, std::shared_mutex:  6021 ms
                                     foa::concurrent_table:  5610 ms
                                boost::concurrent_flat_map:  5611 ms
                                  tbb::concurrent_hash_map:  7518 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8001 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17116 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12093 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23352 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26245 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24626 ms
                                     cfoa, single threaded: 26156 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25956 ms
                  cfoa, std::shared_mutex, single threaded: 26033 ms
                    foa::concurrent_table, single threaded: 24719 ms
               boost::concurrent_flat_map, single threaded: 24843 ms
                 tbb::concurrent_hash_map, single threaded: 42294 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10727 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9029 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9736 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10232 ms
                                                      cfoa:  9306 ms
                                  cfoa, tbb::spin_rw_mutex:  9372 ms
                                   cfoa, std::shared_mutex:  9990 ms
                                     foa::concurrent_table:  9121 ms
                                boost::concurrent_flat_map:  8608 ms
                                  tbb::concurrent_hash_map: 13545 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12742 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10785 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12041 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6203 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10185 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6040 ms
                                     cfoa, single threaded:  7542 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7552 ms
                  cfoa, std::shared_mutex, single threaded: 11800 ms
                    foa::concurrent_table, single threaded:  7465 ms
               boost::concurrent_flat_map, single threaded:  7430 ms
                 tbb::concurrent_hash_map, single threaded: 17371 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5144 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11300 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3389 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4561 ms
                                                      cfoa:  3926 ms
                                  cfoa, tbb::spin_rw_mutex:  4041 ms
                                   cfoa, std::shared_mutex:  4782 ms
                                     foa::concurrent_table:  4158 ms
                                boost::concurrent_flat_map:  4144 ms
                                  tbb::concurrent_hash_map:  5367 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6169 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11258 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3692 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1066 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1525 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1147 ms
                                     cfoa, single threaded:  1541 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1544 ms
                  cfoa, std::shared_mutex, single threaded:  1822 ms
                    foa::concurrent_table, single threaded:  1473 ms
               boost::concurrent_flat_map, single threaded:  1476 ms
                 tbb::concurrent_hash_map, single threaded:  2226 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1072 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   650 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   756 ms
                                                      cfoa:   874 ms
                                  cfoa, tbb::spin_rw_mutex:   928 ms
                                   cfoa, std::shared_mutex:   702 ms
                                     foa::concurrent_table:   937 ms
                                boost::concurrent_flat_map:   829 ms
                                  tbb::concurrent_hash_map:   847 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1106 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1548 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   873 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1138 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1605 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1235 ms
                                     cfoa, single threaded:  1448 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1445 ms
                  cfoa, std::shared_mutex, single threaded:  1830 ms
                    foa::concurrent_table, single threaded:  1467 ms
               boost::concurrent_flat_map, single threaded:  1470 ms
                 tbb::concurrent_hash_map, single threaded:  2364 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   749 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1060 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   604 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   801 ms
                                                      cfoa:   735 ms
                                  cfoa, tbb::spin_rw_mutex:   852 ms
                                   cfoa, std::shared_mutex:   713 ms
                                     foa::concurrent_table:   863 ms
                                boost::concurrent_flat_map:   775 ms
                                  tbb::concurrent_hash_map:   878 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1044 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1193 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   921 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1420 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1843 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1620 ms
                                     cfoa, single threaded:  2297 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2182 ms
                  cfoa, std::shared_mutex, single threaded:  2403 ms
                    foa::concurrent_table, single threaded:  2170 ms
               boost::concurrent_flat_map, single threaded:  2167 ms
                 tbb::concurrent_hash_map, single threaded:  4243 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   968 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   756 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   788 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   987 ms
                                                      cfoa:   950 ms
                                  cfoa, tbb::spin_rw_mutex:   784 ms
                                   cfoa, std::shared_mutex:   948 ms
                                     foa::concurrent_table:   908 ms
                                boost::concurrent_flat_map:   918 ms
                                  tbb::concurrent_hash_map:  1752 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1182 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   880 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   880 ms
```
<!--vs-x86/main.cpp.txt-->
