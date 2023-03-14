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
                boost::unordered_flat_map, single threaded:  7792 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11724 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9313 ms
                                     cfoa, single threaded: 12702 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12496 ms
                  cfoa, std::shared_mutex, single threaded: 14289 ms
                    foa::concurrent_table, single threaded: 12325 ms
                 tbb::concurrent_hash_map, single threaded: 22007 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6556 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 22826 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7874 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6432 ms
                                                      cfoa:  4576 ms
                                  cfoa, tbb::spin_rw_mutex:  4655 ms
                                   cfoa, std::shared_mutex:  4899 ms
                                     foa::concurrent_table:  4568 ms
                                  tbb::concurrent_hash_map:  7418 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7761 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17729 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10102 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9241 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12857 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10253 ms
                                     cfoa, single threaded: 12662 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12691 ms
                  cfoa, std::shared_mutex, single threaded: 14526 ms
                    foa::concurrent_table, single threaded: 12647 ms
                 tbb::concurrent_hash_map, single threaded: 23287 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6184 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17724 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7087 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6993 ms
                                                      cfoa:  4548 ms
                                  cfoa, tbb::spin_rw_mutex:  4976 ms
                                   cfoa, std::shared_mutex:  5098 ms
                                     foa::concurrent_table:  4812 ms
                                  tbb::concurrent_hash_map:  7533 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8016 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22204 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12188 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21162 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25044 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23623 ms
                                     cfoa, single threaded: 24545 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25643 ms
                  cfoa, std::shared_mutex, single threaded: 25395 ms
                    foa::concurrent_table, single threaded: 25180 ms
                 tbb::concurrent_hash_map, single threaded: 43087 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11143 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9192 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9763 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10487 ms
                                                      cfoa:  8234 ms
                                  cfoa, tbb::spin_rw_mutex:  8963 ms
                                   cfoa, std::shared_mutex:  9408 ms
                                     foa::concurrent_table:  8620 ms
                                  tbb::concurrent_hash_map: 14492 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11632 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10297 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12239 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5810 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10264 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6061 ms
                                     cfoa, single threaded:  7547 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7573 ms
                  cfoa, std::shared_mutex, single threaded: 11706 ms
                    foa::concurrent_table, single threaded:  7434 ms
                 tbb::concurrent_hash_map, single threaded: 17415 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5165 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11283 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3399 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4456 ms
                                                      cfoa:  3666 ms
                                  cfoa, tbb::spin_rw_mutex:  3893 ms
                                   cfoa, std::shared_mutex:  4596 ms
                                     foa::concurrent_table:  3712 ms
                                  tbb::concurrent_hash_map:  5476 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6391 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11640 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3749 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1054 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1482 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1129 ms
                                     cfoa, single threaded:  1488 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1499 ms
                  cfoa, std::shared_mutex, single threaded:  1778 ms
                    foa::concurrent_table, single threaded:  1472 ms
                 tbb::concurrent_hash_map, single threaded:  2223 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   788 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1053 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   792 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   782 ms
                                                      cfoa:   680 ms
                                  cfoa, tbb::spin_rw_mutex:   693 ms
                                   cfoa, std::shared_mutex:   711 ms
                                     foa::concurrent_table:   808 ms
                                  tbb::concurrent_hash_map:   904 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1098 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1306 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   912 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1135 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1553 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1226 ms
                                     cfoa, single threaded:  1440 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1455 ms
                  cfoa, std::shared_mutex, single threaded:  1765 ms
                    foa::concurrent_table, single threaded:  1463 ms
                 tbb::concurrent_hash_map, single threaded:  2388 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   750 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1432 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   673 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   791 ms
                                                      cfoa:   622 ms
                                  cfoa, tbb::spin_rw_mutex:   646 ms
                                   cfoa, std::shared_mutex:   708 ms
                                     foa::concurrent_table:   882 ms
                                  tbb::concurrent_hash_map:   887 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1013 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2014 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   909 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1391 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1748 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1520 ms
                                     cfoa, single threaded:  2131 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2282 ms
                  cfoa, std::shared_mutex, single threaded:  2334 ms
                    foa::concurrent_table, single threaded:  2010 ms
                 tbb::concurrent_hash_map, single threaded:  3947 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   995 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   694 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   707 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   871 ms
                                                      cfoa:   833 ms
                                  cfoa, tbb::spin_rw_mutex:   856 ms
                                   cfoa, std::shared_mutex:   838 ms
                                     foa::concurrent_table:   914 ms
                                  tbb::concurrent_hash_map:  1516 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1081 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   941 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   807 ms
```
<!--vs-x86/main.cpp.txt-->
