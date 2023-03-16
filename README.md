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
                boost::unordered_flat_map, single threaded:  7839 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11732 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9291 ms
                                     cfoa, single threaded: 12687 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12524 ms
                  cfoa, std::shared_mutex, single threaded: 14358 ms
                    foa::concurrent_table, single threaded: 12214 ms
                 tbb::concurrent_hash_map, single threaded: 22032 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6469 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 19035 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7257 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5582 ms
                                                      cfoa:  4777 ms
                                  cfoa, tbb::spin_rw_mutex:  4502 ms
                                   cfoa, std::shared_mutex:  4817 ms
                                     foa::concurrent_table:  4609 ms
                                  tbb::concurrent_hash_map:  7542 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7713 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16717 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10413 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9302 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12891 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10257 ms
                                     cfoa, single threaded: 12661 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12711 ms
                  cfoa, std::shared_mutex, single threaded: 14612 ms
                    foa::concurrent_table, single threaded: 12639 ms
                 tbb::concurrent_hash_map, single threaded: 23156 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6145 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17577 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7766 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6237 ms
                                                      cfoa:  4814 ms
                                  cfoa, tbb::spin_rw_mutex:  4613 ms
                                   cfoa, std::shared_mutex:  5038 ms
                                     foa::concurrent_table:  4712 ms
                                  tbb::concurrent_hash_map:  7493 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8009 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18087 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12340 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21432 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24160 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24078 ms
                                     cfoa, single threaded: 24717 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24986 ms
                  cfoa, std::shared_mutex, single threaded: 25233 ms
                    foa::concurrent_table, single threaded: 24485 ms
                 tbb::concurrent_hash_map, single threaded: 42024 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10997 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8913 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9346 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10273 ms
                                                      cfoa:  9191 ms
                                  cfoa, tbb::spin_rw_mutex:  9019 ms
                                   cfoa, std::shared_mutex:  9201 ms
                                     foa::concurrent_table:  8483 ms
                                  tbb::concurrent_hash_map: 13516 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11979 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10294 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11611 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5770 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10205 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6047 ms
                                     cfoa, single threaded:  7530 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7563 ms
                  cfoa, std::shared_mutex, single threaded: 11665 ms
                    foa::concurrent_table, single threaded:  7406 ms
                 tbb::concurrent_hash_map, single threaded: 17455 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5315 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11214 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3437 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4529 ms
                                                      cfoa:  3876 ms
                                  cfoa, tbb::spin_rw_mutex:  3728 ms
                                   cfoa, std::shared_mutex:  4864 ms
                                     foa::concurrent_table:  3684 ms
                                  tbb::concurrent_hash_map:  5586 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6442 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11507 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3747 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1049 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1472 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1126 ms
                                     cfoa, single threaded:  1493 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1501 ms
                  cfoa, std::shared_mutex, single threaded:  1766 ms
                    foa::concurrent_table, single threaded:  1509 ms
                 tbb::concurrent_hash_map, single threaded:  2230 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   756 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  3362 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   588 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   783 ms
                                                      cfoa:   686 ms
                                  cfoa, tbb::spin_rw_mutex:   680 ms
                                   cfoa, std::shared_mutex:   732 ms
                                     foa::concurrent_table:   812 ms
                                  tbb::concurrent_hash_map:   846 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1107 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2585 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1114 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1622 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1222 ms
                                     cfoa, single threaded:  1441 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1445 ms
                  cfoa, std::shared_mutex, single threaded:  1787 ms
                    foa::concurrent_table, single threaded:  1453 ms
                 tbb::concurrent_hash_map, single threaded:  2429 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   762 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1388 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   653 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   741 ms
                                                      cfoa:   630 ms
                                  cfoa, tbb::spin_rw_mutex:   628 ms
                                   cfoa, std::shared_mutex:   727 ms
                                     foa::concurrent_table:   799 ms
                                  tbb::concurrent_hash_map:   911 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1024 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2190 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1017 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1328 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1650 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1482 ms
                                     cfoa, single threaded:  1996 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2138 ms
                  cfoa, std::shared_mutex, single threaded:  2243 ms
                    foa::concurrent_table, single threaded:  1948 ms
                 tbb::concurrent_hash_map, single threaded:  4135 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1079 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   838 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   673 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   829 ms
                                                      cfoa:   676 ms
                                  cfoa, tbb::spin_rw_mutex:   708 ms
                                   cfoa, std::shared_mutex:   746 ms
                                     foa::concurrent_table:   795 ms
                                  tbb::concurrent_hash_map:  1210 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1033 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   863 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   779 ms
```
<!--vs-x86/main.cpp.txt-->
