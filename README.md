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
                boost::unordered_flat_map, single threaded:  7764 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11723 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9299 ms
                                     cfoa, single threaded: 12706 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12473 ms
                  cfoa, std::shared_mutex, single threaded: 14272 ms
                    foa::concurrent_table, single threaded: 12244 ms
                 tbb::concurrent_hash_map, single threaded: 21948 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6547 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 21602 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7199 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5670 ms
                                                      cfoa:  4707 ms
                                  cfoa, tbb::spin_rw_mutex:  4492 ms
                                   cfoa, std::shared_mutex:  4788 ms
                                     foa::concurrent_table:  4825 ms
                                  tbb::concurrent_hash_map:  7503 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7832 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18041 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9865 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9246 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12883 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10268 ms
                                     cfoa, single threaded: 12653 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12685 ms
                  cfoa, std::shared_mutex, single threaded: 14796 ms
                    foa::concurrent_table, single threaded: 12656 ms
                 tbb::concurrent_hash_map, single threaded: 23192 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6247 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17364 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7104 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6013 ms
                                                      cfoa:  5081 ms
                                  cfoa, tbb::spin_rw_mutex:  4701 ms
                                   cfoa, std::shared_mutex:  5042 ms
                                     foa::concurrent_table:  4868 ms
                                  tbb::concurrent_hash_map:  7555 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8019 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18928 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11672 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23200 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26625 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24937 ms
                                     cfoa, single threaded: 24846 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25196 ms
                  cfoa, std::shared_mutex, single threaded: 25287 ms
                    foa::concurrent_table, single threaded: 24834 ms
                 tbb::concurrent_hash_map, single threaded: 42615 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11761 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9192 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9757 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10396 ms
                                                      cfoa:  8905 ms
                                  cfoa, tbb::spin_rw_mutex:  9047 ms
                                   cfoa, std::shared_mutex:  8979 ms
                                     foa::concurrent_table:  8983 ms
                                  tbb::concurrent_hash_map: 14221 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12374 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10359 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11724 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6371 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10151 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6049 ms
                                     cfoa, single threaded:  7514 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7563 ms
                  cfoa, std::shared_mutex, single threaded: 11613 ms
                    foa::concurrent_table, single threaded:  7445 ms
                 tbb::concurrent_hash_map, single threaded: 17365 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5320 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11232 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3439 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4478 ms
                                                      cfoa:  3777 ms
                                  cfoa, tbb::spin_rw_mutex:  3665 ms
                                   cfoa, std::shared_mutex:  4695 ms
                                     foa::concurrent_table:  3707 ms
                                  tbb::concurrent_hash_map:  5369 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6271 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11372 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3750 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1044 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1475 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1127 ms
                                     cfoa, single threaded:  1486 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1509 ms
                  cfoa, std::shared_mutex, single threaded:  1764 ms
                    foa::concurrent_table, single threaded:  1489 ms
                 tbb::concurrent_hash_map, single threaded:  2236 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   752 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1105 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   680 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   753 ms
                                                      cfoa:   661 ms
                                  cfoa, tbb::spin_rw_mutex:   687 ms
                                   cfoa, std::shared_mutex:   716 ms
                                     foa::concurrent_table:   867 ms
                                  tbb::concurrent_hash_map:   876 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1113 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3199 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   986 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1557 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1440 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1453 ms
                  cfoa, std::shared_mutex, single threaded:  1766 ms
                    foa::concurrent_table, single threaded:  1456 ms
                 tbb::concurrent_hash_map, single threaded:  2369 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   731 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1485 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   796 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   793 ms
                                                      cfoa:   615 ms
                                  cfoa, tbb::spin_rw_mutex:   631 ms
                                   cfoa, std::shared_mutex:   723 ms
                                     foa::concurrent_table:   762 ms
                                  tbb::concurrent_hash_map:   878 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1007 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2190 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1459 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1328 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1821 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1559 ms
                                     cfoa, single threaded:  2061 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2032 ms
                  cfoa, std::shared_mutex, single threaded:  2262 ms
                    foa::concurrent_table, single threaded:  2090 ms
                 tbb::concurrent_hash_map, single threaded:  4097 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1014 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   805 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   736 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   980 ms
                                                      cfoa:   686 ms
                                  cfoa, tbb::spin_rw_mutex:   788 ms
                                   cfoa, std::shared_mutex:   891 ms
                                     foa::concurrent_table:   845 ms
                                  tbb::concurrent_hash_map:  1316 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1177 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   898 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   863 ms
```
<!--vs-x86/main.cpp.txt-->
