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
                boost::unordered_flat_map, single threaded:  7760 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11705 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9295 ms
                                     cfoa, single threaded: 12200 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12047 ms
                  cfoa, std::shared_mutex, single threaded: 13950 ms
                    foa::concurrent_table, single threaded: 11485 ms
                 tbb::concurrent_hash_map, single threaded: 21934 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6506 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15843 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7145 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5888 ms
                                                      cfoa:  6235 ms
                                  cfoa, tbb::spin_rw_mutex:  6344 ms
                                   cfoa, std::shared_mutex:  5789 ms
                                     foa::concurrent_table:  5513 ms
                                  tbb::concurrent_hash_map:  7396 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7720 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17950 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9388 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9251 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12862 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10255 ms
                                     cfoa, single threaded: 12161 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12122 ms
                  cfoa, std::shared_mutex, single threaded: 14341 ms
                    foa::concurrent_table, single threaded: 12240 ms
                 tbb::concurrent_hash_map, single threaded: 23057 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6174 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13197 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7099 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6237 ms
                                                      cfoa:  6566 ms
                                  cfoa, tbb::spin_rw_mutex:  6407 ms
                                   cfoa, std::shared_mutex:  6029 ms
                                     foa::concurrent_table:  5666 ms
                                  tbb::concurrent_hash_map:  7482 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8053 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18734 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11812 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22760 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26187 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24735 ms
                                     cfoa, single threaded: 24550 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24248 ms
                  cfoa, std::shared_mutex, single threaded: 24304 ms
                    foa::concurrent_table, single threaded: 24604 ms
                 tbb::concurrent_hash_map, single threaded: 42413 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10662 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9059 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9593 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10793 ms
                                                      cfoa:  8741 ms
                                  cfoa, tbb::spin_rw_mutex:  9068 ms
                                   cfoa, std::shared_mutex:  8822 ms
                                     foa::concurrent_table:  9308 ms
                                  tbb::concurrent_hash_map: 15317 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12641 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10739 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12345 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5738 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10138 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6071 ms
                                     cfoa, single threaded:  7401 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7416 ms
                  cfoa, std::shared_mutex, single threaded: 11612 ms
                    foa::concurrent_table, single threaded:  7209 ms
                 tbb::concurrent_hash_map, single threaded: 17286 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5616 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11159 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3444 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4466 ms
                                                      cfoa:  3803 ms
                                  cfoa, tbb::spin_rw_mutex:  3832 ms
                                   cfoa, std::shared_mutex:  4749 ms
                                     foa::concurrent_table:  4024 ms
                                  tbb::concurrent_hash_map:  5381 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6451 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11570 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3782 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1067 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1494 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1149 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1522 ms
                  cfoa, std::shared_mutex, single threaded:  1817 ms
                    foa::concurrent_table, single threaded:  1475 ms
                 tbb::concurrent_hash_map, single threaded:  2277 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   749 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   979 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   600 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   771 ms
                                                      cfoa:   945 ms
                                  cfoa, tbb::spin_rw_mutex:  1060 ms
                                   cfoa, std::shared_mutex:   824 ms
                                     foa::concurrent_table:   765 ms
                                  tbb::concurrent_hash_map:   857 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1082 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1759 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1078 ms
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
                                     cfoa, single threaded:  1442 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1423 ms
                  cfoa, std::shared_mutex, single threaded:  1783 ms
                    foa::concurrent_table, single threaded:  1433 ms
                 tbb::concurrent_hash_map, single threaded:  2414 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   762 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   988 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   582 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   765 ms
                                                      cfoa:   906 ms
                                  cfoa, tbb::spin_rw_mutex:   814 ms
                                   cfoa, std::shared_mutex:   829 ms
                                     foa::concurrent_table:   769 ms
                                  tbb::concurrent_hash_map:   889 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1027 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1349 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1111 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1327 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1700 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1499 ms
                                     cfoa, single threaded:  1917 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1884 ms
                  cfoa, std::shared_mutex, single threaded:  2113 ms
                    foa::concurrent_table, single threaded:  1921 ms
                 tbb::concurrent_hash_map, single threaded:  3941 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1033 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   819 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   676 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   951 ms
                                                      cfoa:   859 ms
                                  cfoa, tbb::spin_rw_mutex:   862 ms
                                   cfoa, std::shared_mutex:   904 ms
                                     foa::concurrent_table:   835 ms
                                  tbb::concurrent_hash_map:  1412 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1159 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   911 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   848 ms
```
<!--vs-x86/main.cpp.txt-->
