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
                boost::unordered_flat_map, single threaded:  7801 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11871 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9369 ms
                                     cfoa, single threaded: 12646 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12511 ms
                  cfoa, std::shared_mutex, single threaded: 14268 ms
                    foa::concurrent_table, single threaded: 12180 ms
                 tbb::concurrent_hash_map, single threaded: 22161 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6557 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13890 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7310 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5773 ms
                                                      cfoa:  4812 ms
                                  cfoa, tbb::spin_rw_mutex:  4756 ms
                                   cfoa, std::shared_mutex:  4963 ms
                                     foa::concurrent_table:  4464 ms
                                  tbb::concurrent_hash_map:  7689 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7887 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 13763 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9331 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9287 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12953 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10229 ms
                                     cfoa, single threaded: 12703 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12771 ms
                  cfoa, std::shared_mutex, single threaded: 14664 ms
                    foa::concurrent_table, single threaded: 12549 ms
                 tbb::concurrent_hash_map, single threaded: 23025 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6142 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14086 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7313 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6524 ms
                                                      cfoa:  5390 ms
                                  cfoa, tbb::spin_rw_mutex:  4906 ms
                                   cfoa, std::shared_mutex:  5045 ms
                                     foa::concurrent_table:  4721 ms
                                  tbb::concurrent_hash_map:  7607 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8098 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18142 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11589 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21947 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24789 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24316 ms
                                     cfoa, single threaded: 24835 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25265 ms
                  cfoa, std::shared_mutex, single threaded: 25844 ms
                    foa::concurrent_table, single threaded: 25899 ms
                 tbb::concurrent_hash_map, single threaded: 42506 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10290 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8989 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10056 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10216 ms
                                                      cfoa:  9064 ms
                                  cfoa, tbb::spin_rw_mutex:  8829 ms
                                   cfoa, std::shared_mutex:  9074 ms
                                     foa::concurrent_table:  9530 ms
                                  tbb::concurrent_hash_map: 14689 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12358 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10462 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11636 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6489 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10194 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6071 ms
                                     cfoa, single threaded:  7574 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7580 ms
                  cfoa, std::shared_mutex, single threaded: 11643 ms
                    foa::concurrent_table, single threaded:  7345 ms
                 tbb::concurrent_hash_map, single threaded: 17416 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5335 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11287 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3441 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4559 ms
                                                      cfoa:  4567 ms
                                  cfoa, tbb::spin_rw_mutex:  3688 ms
                                   cfoa, std::shared_mutex:  4704 ms
                                     foa::concurrent_table:  4031 ms
                                  tbb::concurrent_hash_map:  5617 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6348 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11522 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3727 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1046 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1495 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1128 ms
                                     cfoa, single threaded:  1518 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1532 ms
                  cfoa, std::shared_mutex, single threaded:  1793 ms
                    foa::concurrent_table, single threaded:  1509 ms
                 tbb::concurrent_hash_map, single threaded:  2230 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   782 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1637 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   668 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   772 ms
                                                      cfoa:   778 ms
                                  cfoa, tbb::spin_rw_mutex:   942 ms
                                   cfoa, std::shared_mutex:   769 ms
                                     foa::concurrent_table:   665 ms
                                  tbb::concurrent_hash_map:   851 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1112 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1252 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1001 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1555 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1230 ms
                                     cfoa, single threaded:  1474 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1485 ms
                  cfoa, std::shared_mutex, single threaded:  1788 ms
                    foa::concurrent_table, single threaded:  1465 ms
                 tbb::concurrent_hash_map, single threaded:  2383 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1155 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   712 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   753 ms
                                                      cfoa:   879 ms
                                  cfoa, tbb::spin_rw_mutex:   932 ms
                                   cfoa, std::shared_mutex:   776 ms
                                     foa::concurrent_table:   760 ms
                                  tbb::concurrent_hash_map:   886 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1027 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1113 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1078 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1332 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1734 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1541 ms
                                     cfoa, single threaded:  2073 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2172 ms
                  cfoa, std::shared_mutex, single threaded:  2310 ms
                    foa::concurrent_table, single threaded:  1990 ms
                 tbb::concurrent_hash_map, single threaded:  3979 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1110 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   816 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   818 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   982 ms
                                                      cfoa:   803 ms
                                  cfoa, tbb::spin_rw_mutex:   868 ms
                                   cfoa, std::shared_mutex:   879 ms
                                     foa::concurrent_table:   722 ms
                                  tbb::concurrent_hash_map:  1339 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1142 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   884 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   805 ms
```
<!--vs-x86/main.cpp.txt-->
