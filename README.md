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
                boost::unordered_flat_map, single threaded:  7726 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11658 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9269 ms
                                     cfoa, single threaded: 12269 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12373 ms
                  cfoa, std::shared_mutex, single threaded: 14424 ms
                    foa::concurrent_table, single threaded: 12065 ms
               boost::concurrent_flat_map, single threaded: 12060 ms
                 tbb::concurrent_hash_map, single threaded: 21902 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6499 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8178 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7372 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5987 ms
                                                      cfoa:  5448 ms
                                  cfoa, tbb::spin_rw_mutex:  6275 ms
                                   cfoa, std::shared_mutex:  5388 ms
                                     foa::concurrent_table:  5211 ms
                                boost::concurrent_flat_map:  5374 ms
                                  tbb::concurrent_hash_map:  7497 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7713 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17420 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9665 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9068 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12818 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10221 ms
                                     cfoa, single threaded: 12458 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12506 ms
                  cfoa, std::shared_mutex, single threaded: 14487 ms
                    foa::concurrent_table, single threaded: 12373 ms
               boost::concurrent_flat_map, single threaded: 12375 ms
                 tbb::concurrent_hash_map, single threaded: 22991 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6242 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16768 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7436 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6506 ms
                                                      cfoa:  6970 ms
                                  cfoa, tbb::spin_rw_mutex:  6831 ms
                                   cfoa, std::shared_mutex:  5964 ms
                                     foa::concurrent_table:  5787 ms
                                boost::concurrent_flat_map:  5495 ms
                                  tbb::concurrent_hash_map:  7584 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7967 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19943 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12976 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21044 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24720 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23690 ms
                                     cfoa, single threaded: 25468 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26253 ms
                  cfoa, std::shared_mutex, single threaded: 26299 ms
                    foa::concurrent_table, single threaded: 25717 ms
               boost::concurrent_flat_map, single threaded: 25721 ms
                 tbb::concurrent_hash_map, single threaded: 43376 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11142 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9151 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9977 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10117 ms
                                                      cfoa:  9971 ms
                                  cfoa, tbb::spin_rw_mutex:  9646 ms
                                   cfoa, std::shared_mutex:  9914 ms
                                     foa::concurrent_table:  9355 ms
                                boost::concurrent_flat_map:  8928 ms
                                  tbb::concurrent_hash_map: 16548 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12462 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10710 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11819 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6300 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10241 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6072 ms
                                     cfoa, single threaded:  7501 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7609 ms
                  cfoa, std::shared_mutex, single threaded: 11914 ms
                    foa::concurrent_table, single threaded:  7451 ms
               boost::concurrent_flat_map, single threaded:  7471 ms
                 tbb::concurrent_hash_map, single threaded: 17388 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5373 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11298 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3478 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4574 ms
                                                      cfoa:  3926 ms
                                  cfoa, tbb::spin_rw_mutex:  4093 ms
                                   cfoa, std::shared_mutex:  4731 ms
                                     foa::concurrent_table:  3973 ms
                                boost::concurrent_flat_map:  4014 ms
                                  tbb::concurrent_hash_map:  5288 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6216 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11529 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3774 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1066 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1527 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1146 ms
                                     cfoa, single threaded:  1542 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1546 ms
                  cfoa, std::shared_mutex, single threaded:  1823 ms
                    foa::concurrent_table, single threaded:  1474 ms
               boost::concurrent_flat_map, single threaded:  1477 ms
                 tbb::concurrent_hash_map, single threaded:  2225 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   773 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2665 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   767 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   755 ms
                                                      cfoa:   770 ms
                                  cfoa, tbb::spin_rw_mutex:   790 ms
                                   cfoa, std::shared_mutex:   716 ms
                                     foa::concurrent_table:   751 ms
                                boost::concurrent_flat_map:   729 ms
                                  tbb::concurrent_hash_map:   886 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1109 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1182 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   988 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1138 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1605 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1237 ms
                                     cfoa, single threaded:  1449 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1446 ms
                  cfoa, std::shared_mutex, single threaded:  1829 ms
                    foa::concurrent_table, single threaded:  1466 ms
               boost::concurrent_flat_map, single threaded:  1474 ms
                 tbb::concurrent_hash_map, single threaded:  2375 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   756 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1263 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   685 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   756 ms
                                                      cfoa:   797 ms
                                  cfoa, tbb::spin_rw_mutex:   797 ms
                                   cfoa, std::shared_mutex:   708 ms
                                     foa::concurrent_table:   800 ms
                                boost::concurrent_flat_map:   788 ms
                                  tbb::concurrent_hash_map:   873 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1029 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3247 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1075 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1342 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1691 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1486 ms
                                     cfoa, single threaded:  2002 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2016 ms
                  cfoa, std::shared_mutex, single threaded:  2299 ms
                    foa::concurrent_table, single threaded:  2099 ms
               boost::concurrent_flat_map, single threaded:  2082 ms
                 tbb::concurrent_hash_map, single threaded:  4123 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1018 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   842 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   746 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   916 ms
                                                      cfoa:   832 ms
                                  cfoa, tbb::spin_rw_mutex:   823 ms
                                   cfoa, std::shared_mutex:   973 ms
                                     foa::concurrent_table:   902 ms
                                boost::concurrent_flat_map:   929 ms
                                  tbb::concurrent_hash_map:  1464 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1149 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   896 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   854 ms
```
<!--vs-x86/main.cpp.txt-->
