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
  boost::unordered_flat_map, single threaded, shared_mutex: 12207 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9246 ms
                                     cfoa, single threaded: 12206 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12288 ms
                  cfoa, std::shared_mutex, single threaded: 14113 ms
                    foa::concurrent_table, single threaded: 11981 ms
               boost::concurrent_flat_map, single threaded: 12015 ms
                 tbb::concurrent_hash_map, single threaded: 21807 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6324 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16425 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7480 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6046 ms
                                                      cfoa:  5631 ms
                                  cfoa, tbb::spin_rw_mutex:  5653 ms
                                   cfoa, std::shared_mutex:  5397 ms
                                     foa::concurrent_table:  5353 ms
                                boost::concurrent_flat_map:  5493 ms
                                  tbb::concurrent_hash_map:  7516 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8537 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14451 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10084 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9033 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12733 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10188 ms
                                     cfoa, single threaded: 12240 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12450 ms
                  cfoa, std::shared_mutex, single threaded: 14517 ms
                    foa::concurrent_table, single threaded: 12399 ms
               boost::concurrent_flat_map, single threaded: 12450 ms
                 tbb::concurrent_hash_map, single threaded: 22944 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6307 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15947 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7369 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6593 ms
                                                      cfoa:  6141 ms
                                  cfoa, tbb::spin_rw_mutex:  6636 ms
                                   cfoa, std::shared_mutex:  5854 ms
                                     foa::concurrent_table:  5718 ms
                                boost::concurrent_flat_map:  6012 ms
                                  tbb::concurrent_hash_map:  7636 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7994 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22391 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12222 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 23481 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 27037 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25318 ms
                                     cfoa, single threaded: 26802 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 27009 ms
                  cfoa, std::shared_mutex, single threaded: 27107 ms
                    foa::concurrent_table, single threaded: 25948 ms
               boost::concurrent_flat_map, single threaded: 26029 ms
                 tbb::concurrent_hash_map, single threaded: 44056 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10742 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8968 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9653 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10708 ms
                                                      cfoa:  9194 ms
                                  cfoa, tbb::spin_rw_mutex:  9675 ms
                                   cfoa, std::shared_mutex:  9515 ms
                                     foa::concurrent_table:  9720 ms
                                boost::concurrent_flat_map: 10156 ms
                                  tbb::concurrent_hash_map: 14939 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12578 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10999 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11772 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6202 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10180 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6075 ms
                                     cfoa, single threaded:  7540 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7605 ms
                  cfoa, std::shared_mutex, single threaded: 11834 ms
                    foa::concurrent_table, single threaded:  7440 ms
               boost::concurrent_flat_map, single threaded:  7646 ms
                 tbb::concurrent_hash_map, single threaded: 17390 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5310 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13137 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3599 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4527 ms
                                                      cfoa:  3997 ms
                                  cfoa, tbb::spin_rw_mutex:  4001 ms
                                   cfoa, std::shared_mutex:  4808 ms
                                     foa::concurrent_table:  3942 ms
                                boost::concurrent_flat_map:  4019 ms
                                  tbb::concurrent_hash_map:  5501 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6421 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11334 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3716 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1070 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1514 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1159 ms
                                     cfoa, single threaded:  1531 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1544 ms
                  cfoa, std::shared_mutex, single threaded:  1827 ms
                    foa::concurrent_table, single threaded:  1469 ms
               boost::concurrent_flat_map, single threaded:  1470 ms
                 tbb::concurrent_hash_map, single threaded:  2219 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   774 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1114 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   776 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   779 ms
                                                      cfoa:   769 ms
                                  cfoa, tbb::spin_rw_mutex:   756 ms
                                   cfoa, std::shared_mutex:   687 ms
                                     foa::concurrent_table:   876 ms
                                boost::concurrent_flat_map:   757 ms
                                  tbb::concurrent_hash_map:   861 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1093 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2818 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   904 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1138 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1606 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1240 ms
                                     cfoa, single threaded:  1459 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1449 ms
                  cfoa, std::shared_mutex, single threaded:  1834 ms
                    foa::concurrent_table, single threaded:  1469 ms
               boost::concurrent_flat_map, single threaded:  1470 ms
                 tbb::concurrent_hash_map, single threaded:  2376 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   757 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1396 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   588 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   787 ms
                                                      cfoa:   773 ms
                                  cfoa, tbb::spin_rw_mutex:   893 ms
                                   cfoa, std::shared_mutex:   707 ms
                                     foa::concurrent_table:   960 ms
                                boost::concurrent_flat_map:   926 ms
                                  tbb::concurrent_hash_map:   869 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1020 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1534 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1059 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1335 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1730 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1601 ms
                                     cfoa, single threaded:  2102 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2141 ms
                  cfoa, std::shared_mutex, single threaded:  2358 ms
                    foa::concurrent_table, single threaded:  2071 ms
               boost::concurrent_flat_map, single threaded:  2183 ms
                 tbb::concurrent_hash_map, single threaded:  4099 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   889 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   733 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   735 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   889 ms
                                                      cfoa:   943 ms
                                  cfoa, tbb::spin_rw_mutex:   881 ms
                                   cfoa, std::shared_mutex:  1021 ms
                                     foa::concurrent_table:   860 ms
                                boost::concurrent_flat_map:   900 ms
                                  tbb::concurrent_hash_map:  1420 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1037 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   871 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   891 ms
```
<!--vs-x86/main.cpp.txt-->
