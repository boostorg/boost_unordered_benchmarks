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
                boost::unordered_flat_map, single threaded:  7723 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11681 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9229 ms
                                     cfoa, single threaded: 12274 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12237 ms
                  cfoa, std::shared_mutex, single threaded: 14109 ms
                    foa::concurrent_table, single threaded: 12278 ms
                 tbb::concurrent_hash_map, single threaded: 21808 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6488 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18292 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7181 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5940 ms
                                                      cfoa:  5818 ms
                                  cfoa, tbb::spin_rw_mutex:  5848 ms
                                   cfoa, std::shared_mutex:  5417 ms
                                     foa::concurrent_table:  5406 ms
                                  tbb::concurrent_hash_map:  7477 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7775 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16140 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9841 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9235 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12850 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10179 ms
                                     cfoa, single threaded: 12416 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12466 ms
                  cfoa, std::shared_mutex, single threaded: 14511 ms
                    foa::concurrent_table, single threaded: 12451 ms
                 tbb::concurrent_hash_map, single threaded: 23076 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6181 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 20456 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7303 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6810 ms
                                                      cfoa:  6772 ms
                                  cfoa, tbb::spin_rw_mutex:  6018 ms
                                   cfoa, std::shared_mutex:  6002 ms
                                     foa::concurrent_table:  5746 ms
                                  tbb::concurrent_hash_map:  7620 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7939 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19734 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11817 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22764 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25976 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24730 ms
                                     cfoa, single threaded: 26074 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26959 ms
                  cfoa, std::shared_mutex, single threaded: 26256 ms
                    foa::concurrent_table, single threaded: 25017 ms
                 tbb::concurrent_hash_map, single threaded: 42474 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11022 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9241 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9140 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10575 ms
                                                      cfoa:  9589 ms
                                  cfoa, tbb::spin_rw_mutex:  9765 ms
                                   cfoa, std::shared_mutex:  9837 ms
                                     foa::concurrent_table:  8931 ms
                                  tbb::concurrent_hash_map: 14991 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12250 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10271 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11574 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5992 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10183 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6035 ms
                                     cfoa, single threaded:  7504 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7599 ms
                  cfoa, std::shared_mutex, single threaded: 11844 ms
                    foa::concurrent_table, single threaded:  7448 ms
                 tbb::concurrent_hash_map, single threaded: 17440 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5355 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11274 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3525 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4602 ms
                                                      cfoa:  3949 ms
                                  cfoa, tbb::spin_rw_mutex:  3970 ms
                                   cfoa, std::shared_mutex:  4696 ms
                                     foa::concurrent_table:  3890 ms
                                  tbb::concurrent_hash_map:  5377 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6145 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11640 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3730 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1049 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1488 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1126 ms
                                     cfoa, single threaded:  1524 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1536 ms
                  cfoa, std::shared_mutex, single threaded:  1821 ms
                    foa::concurrent_table, single threaded:  1524 ms
                 tbb::concurrent_hash_map, single threaded:  2246 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   760 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1125 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   725 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   746 ms
                                                      cfoa:   755 ms
                                  cfoa, tbb::spin_rw_mutex:   904 ms
                                   cfoa, std::shared_mutex:   723 ms
                                     foa::concurrent_table:   734 ms
                                  tbb::concurrent_hash_map:   863 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1087 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1207 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   954 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1136 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1593 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1450 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1461 ms
                  cfoa, std::shared_mutex, single threaded:  1802 ms
                    foa::concurrent_table, single threaded:  1490 ms
                 tbb::concurrent_hash_map, single threaded:  2403 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   764 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1544 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   579 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   773 ms
                                                      cfoa:   800 ms
                                  cfoa, tbb::spin_rw_mutex:   804 ms
                                   cfoa, std::shared_mutex:   713 ms
                                     foa::concurrent_table:   759 ms
                                  tbb::concurrent_hash_map:   888 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1010 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1905 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   908 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1344 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1707 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1535 ms
                                     cfoa, single threaded:  2026 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2187 ms
                  cfoa, std::shared_mutex, single threaded:  2300 ms
                    foa::concurrent_table, single threaded:  1978 ms
                 tbb::concurrent_hash_map, single threaded:  4224 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   980 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   813 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   745 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1015 ms
                                                      cfoa:   907 ms
                                  cfoa, tbb::spin_rw_mutex:   874 ms
                                   cfoa, std::shared_mutex:   964 ms
                                     foa::concurrent_table:   868 ms
                                  tbb::concurrent_hash_map:  1671 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1160 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   966 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   863 ms
```
<!--vs-x86/main.cpp.txt-->
