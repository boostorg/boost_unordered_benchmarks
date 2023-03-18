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
  boost::unordered_flat_map, single threaded, shared_mutex: 11683 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9287 ms
                                     cfoa, single threaded: 12646 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12469 ms
                  cfoa, std::shared_mutex, single threaded: 14281 ms
                    foa::concurrent_table, single threaded: 12248 ms
                 tbb::concurrent_hash_map, single threaded: 21939 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6527 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 18433 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7137 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5825 ms
                                                      cfoa:  4808 ms
                                  cfoa, tbb::spin_rw_mutex:  4735 ms
                                   cfoa, std::shared_mutex:  4870 ms
                                     foa::concurrent_table:  4826 ms
                                  tbb::concurrent_hash_map:  7528 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7817 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16775 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10776 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9236 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12869 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10244 ms
                                     cfoa, single threaded: 12662 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12713 ms
                  cfoa, std::shared_mutex, single threaded: 14503 ms
                    foa::concurrent_table, single threaded: 12556 ms
                 tbb::concurrent_hash_map, single threaded: 22937 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6187 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12798 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7312 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6536 ms
                                                      cfoa:  4884 ms
                                  cfoa, tbb::spin_rw_mutex:  4729 ms
                                   cfoa, std::shared_mutex:  5179 ms
                                     foa::concurrent_table:  5238 ms
                                  tbb::concurrent_hash_map:  7592 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8075 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21938 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12019 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22929 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25797 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24544 ms
                                     cfoa, single threaded: 25267 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25109 ms
                  cfoa, std::shared_mutex, single threaded: 25151 ms
                    foa::concurrent_table, single threaded: 24429 ms
                 tbb::concurrent_hash_map, single threaded: 42531 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10889 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8917 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9866 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10949 ms
                                                      cfoa:  8824 ms
                                  cfoa, tbb::spin_rw_mutex:  8853 ms
                                   cfoa, std::shared_mutex:  8439 ms
                                     foa::concurrent_table:  8531 ms
                                  tbb::concurrent_hash_map: 15700 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11812 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  9968 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11807 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6356 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10176 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6077 ms
                                     cfoa, single threaded:  7566 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7592 ms
                  cfoa, std::shared_mutex, single threaded: 11613 ms
                    foa::concurrent_table, single threaded:  7422 ms
                 tbb::concurrent_hash_map, single threaded: 17474 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5381 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11303 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3393 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4591 ms
                                                      cfoa:  3722 ms
                                  cfoa, tbb::spin_rw_mutex:  3801 ms
                                   cfoa, std::shared_mutex:  4761 ms
                                     foa::concurrent_table:  3671 ms
                                  tbb::concurrent_hash_map:  5419 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6179 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11525 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3778 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1056 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1478 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1139 ms
                                     cfoa, single threaded:  1520 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1540 ms
                  cfoa, std::shared_mutex, single threaded:  1832 ms
                    foa::concurrent_table, single threaded:  1492 ms
                 tbb::concurrent_hash_map, single threaded:  2258 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   769 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1071 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   719 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   742 ms
                                                      cfoa:   842 ms
                                  cfoa, tbb::spin_rw_mutex:   886 ms
                                   cfoa, std::shared_mutex:   802 ms
                                     foa::concurrent_table:   778 ms
                                  tbb::concurrent_hash_map:   865 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1089 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1525 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   903 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1147 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1563 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1228 ms
                                     cfoa, single threaded:  1476 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1485 ms
                  cfoa, std::shared_mutex, single threaded:  1798 ms
                    foa::concurrent_table, single threaded:  1452 ms
                 tbb::concurrent_hash_map, single threaded:  2368 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   738 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1698 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   584 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   771 ms
                                                      cfoa:   721 ms
                                  cfoa, tbb::spin_rw_mutex:   827 ms
                                   cfoa, std::shared_mutex:   801 ms
                                     foa::concurrent_table:   813 ms
                                  tbb::concurrent_hash_map:   897 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1018 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1655 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1001 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1272 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1660 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1461 ms
                                     cfoa, single threaded:  2033 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1976 ms
                  cfoa, std::shared_mutex, single threaded:  2184 ms
                    foa::concurrent_table, single threaded:  1890 ms
                 tbb::concurrent_hash_map, single threaded:  3813 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   837 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   675 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3845 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   890 ms
                                                      cfoa:   806 ms
                                  cfoa, tbb::spin_rw_mutex:   777 ms
                                   cfoa, std::shared_mutex:   786 ms
                                     foa::concurrent_table:   714 ms
                                  tbb::concurrent_hash_map:  1131 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1005 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   811 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   847 ms
```
<!--vs-x86/main.cpp.txt-->
