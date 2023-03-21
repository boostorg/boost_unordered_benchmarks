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
                boost::unordered_flat_map, single threaded:  7725 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11719 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9308 ms
                                     cfoa, single threaded: 12680 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12416 ms
                  cfoa, std::shared_mutex, single threaded: 14397 ms
                    foa::concurrent_table, single threaded: 12090 ms
                 tbb::concurrent_hash_map, single threaded: 21872 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6555 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16772 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7217 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5579 ms
                                                      cfoa:  4927 ms
                                  cfoa, tbb::spin_rw_mutex:  4625 ms
                                   cfoa, std::shared_mutex:  4957 ms
                                     foa::concurrent_table:  4665 ms
                                  tbb::concurrent_hash_map:  7613 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7769 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14428 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10402 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9249 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12915 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10239 ms
                                     cfoa, single threaded: 12654 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12686 ms
                  cfoa, std::shared_mutex, single threaded: 14581 ms
                    foa::concurrent_table, single threaded: 12544 ms
                 tbb::concurrent_hash_map, single threaded: 23147 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6264 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16640 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7546 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6716 ms
                                                      cfoa:  4849 ms
                                  cfoa, tbb::spin_rw_mutex:  4950 ms
                                   cfoa, std::shared_mutex:  5200 ms
                                     foa::concurrent_table:  4864 ms
                                  tbb::concurrent_hash_map:  7757 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8043 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19034 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12711 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22680 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26017 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25135 ms
                                     cfoa, single threaded: 24920 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25192 ms
                  cfoa, std::shared_mutex, single threaded: 25663 ms
                    foa::concurrent_table, single threaded: 25784 ms
                 tbb::concurrent_hash_map, single threaded: 42637 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11366 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8982 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9549 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10208 ms
                                                      cfoa:  8625 ms
                                  cfoa, tbb::spin_rw_mutex:  8934 ms
                                   cfoa, std::shared_mutex:  9064 ms
                                     foa::concurrent_table:  8886 ms
                                  tbb::concurrent_hash_map: 14566 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12193 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10425 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11769 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5722 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10134 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6073 ms
                                     cfoa, single threaded:  7529 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7559 ms
                  cfoa, std::shared_mutex, single threaded: 11638 ms
                    foa::concurrent_table, single threaded:  7243 ms
                 tbb::concurrent_hash_map, single threaded: 17267 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5473 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11098 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3397 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4423 ms
                                                      cfoa:  3837 ms
                                  cfoa, tbb::spin_rw_mutex:  3878 ms
                                   cfoa, std::shared_mutex:  4637 ms
                                     foa::concurrent_table:  3885 ms
                                  tbb::concurrent_hash_map:  5451 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6475 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11377 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3685 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1054 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1479 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1141 ms
                                     cfoa, single threaded:  1518 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1536 ms
                  cfoa, std::shared_mutex, single threaded:  1799 ms
                    foa::concurrent_table, single threaded:  1499 ms
                 tbb::concurrent_hash_map, single threaded:  2243 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   768 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1731 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   597 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   767 ms
                                                      cfoa:   808 ms
                                  cfoa, tbb::spin_rw_mutex:   879 ms
                                   cfoa, std::shared_mutex:   806 ms
                                     foa::concurrent_table:   774 ms
                                  tbb::concurrent_hash_map:   890 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1109 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  4196 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   954 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1570 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1472 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1487 ms
                  cfoa, std::shared_mutex, single threaded:  1816 ms
                    foa::concurrent_table, single threaded:  1463 ms
                 tbb::concurrent_hash_map, single threaded:  2385 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   737 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1448 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   664 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   771 ms
                                                      cfoa:   823 ms
                                  cfoa, tbb::spin_rw_mutex:   822 ms
                                   cfoa, std::shared_mutex:   777 ms
                                     foa::concurrent_table:   774 ms
                                  tbb::concurrent_hash_map:   887 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1007 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3085 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   846 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1372 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1772 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1520 ms
                                     cfoa, single threaded:  2041 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2007 ms
                  cfoa, std::shared_mutex, single threaded:  2212 ms
                    foa::concurrent_table, single threaded:  2009 ms
                 tbb::concurrent_hash_map, single threaded:  4021 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1061 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   811 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   762 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   959 ms
                                                      cfoa:   880 ms
                                  cfoa, tbb::spin_rw_mutex:   783 ms
                                   cfoa, std::shared_mutex:   997 ms
                                     foa::concurrent_table:   832 ms
                                  tbb::concurrent_hash_map:  1307 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1013 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   859 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   841 ms
```
<!--vs-x86/main.cpp.txt-->
