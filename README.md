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
                boost::unordered_flat_map, single threaded:  7724 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11703 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9286 ms
                                     cfoa, single threaded: 12728 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12536 ms
                  cfoa, std::shared_mutex, single threaded: 14437 ms
                    foa::concurrent_table, single threaded: 12058 ms
                 tbb::concurrent_hash_map, single threaded: 21899 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6448 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16908 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6807 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5871 ms
                                                      cfoa:  4848 ms
                                  cfoa, tbb::spin_rw_mutex:  4650 ms
                                   cfoa, std::shared_mutex:  4837 ms
                                     foa::concurrent_table:  4608 ms
                                  tbb::concurrent_hash_map:  7505 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7858 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17329 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9718 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9254 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12930 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10247 ms
                                     cfoa, single threaded: 12564 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12687 ms
                  cfoa, std::shared_mutex, single threaded: 14583 ms
                    foa::concurrent_table, single threaded: 12572 ms
                 tbb::concurrent_hash_map, single threaded: 23048 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6204 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13533 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6815 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6533 ms
                                                      cfoa:  4731 ms
                                  cfoa, tbb::spin_rw_mutex:  5044 ms
                                   cfoa, std::shared_mutex:  5200 ms
                                     foa::concurrent_table:  4643 ms
                                  tbb::concurrent_hash_map:  7517 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8035 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21274 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12097 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23052 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26449 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24602 ms
                                     cfoa, single threaded: 25117 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24938 ms
                  cfoa, std::shared_mutex, single threaded: 25404 ms
                    foa::concurrent_table, single threaded: 25953 ms
                 tbb::concurrent_hash_map, single threaded: 42559 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11342 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9043 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9925 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10095 ms
                                                      cfoa:  8816 ms
                                  cfoa, tbb::spin_rw_mutex:  9053 ms
                                   cfoa, std::shared_mutex:  8941 ms
                                     foa::concurrent_table:  9020 ms
                                  tbb::concurrent_hash_map: 14686 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12280 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10305 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12040 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5751 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10150 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6037 ms
                                     cfoa, single threaded:  7499 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7562 ms
                  cfoa, std::shared_mutex, single threaded: 11663 ms
                    foa::concurrent_table, single threaded:  7259 ms
                 tbb::concurrent_hash_map, single threaded: 17290 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5432 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11272 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3449 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4430 ms
                                                      cfoa:  3790 ms
                                  cfoa, tbb::spin_rw_mutex:  3784 ms
                                   cfoa, std::shared_mutex:  4950 ms
                                     foa::concurrent_table:  3907 ms
                                  tbb::concurrent_hash_map:  5395 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6275 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11313 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3733 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1053 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1480 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1139 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1532 ms
                  cfoa, std::shared_mutex, single threaded:  1799 ms
                    foa::concurrent_table, single threaded:  1497 ms
                 tbb::concurrent_hash_map, single threaded:  2243 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   770 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1513 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   615 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   758 ms
                                                      cfoa:   832 ms
                                  cfoa, tbb::spin_rw_mutex:   904 ms
                                   cfoa, std::shared_mutex:   795 ms
                                     foa::concurrent_table:   792 ms
                                  tbb::concurrent_hash_map:   890 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1107 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1212 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   917 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1134 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1595 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1480 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1481 ms
                  cfoa, std::shared_mutex, single threaded:  1796 ms
                    foa::concurrent_table, single threaded:  1480 ms
                 tbb::concurrent_hash_map, single threaded:  2393 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   765 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1239 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   601 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   766 ms
                                                      cfoa:   779 ms
                                  cfoa, tbb::spin_rw_mutex:   809 ms
                                   cfoa, std::shared_mutex:   781 ms
                                     foa::concurrent_table:   822 ms
                                  tbb::concurrent_hash_map:   900 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1019 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1591 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   953 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1295 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1741 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1523 ms
                                     cfoa, single threaded:  2064 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2157 ms
                  cfoa, std::shared_mutex, single threaded:  2447 ms
                    foa::concurrent_table, single threaded:  2011 ms
                 tbb::concurrent_hash_map, single threaded:  4120 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   959 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   787 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   827 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   921 ms
                                                      cfoa:   774 ms
                                  cfoa, tbb::spin_rw_mutex:   739 ms
                                   cfoa, std::shared_mutex:   963 ms
                                     foa::concurrent_table:   863 ms
                                  tbb::concurrent_hash_map:  1500 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1164 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   984 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   982 ms
```
<!--vs-x86/main.cpp.txt-->
