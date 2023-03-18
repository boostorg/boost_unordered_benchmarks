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
                boost::unordered_flat_map, single threaded:  7737 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11680 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9287 ms
                                     cfoa, single threaded: 12720 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12467 ms
                  cfoa, std::shared_mutex, single threaded: 14298 ms
                    foa::concurrent_table, single threaded: 12132 ms
                 tbb::concurrent_hash_map, single threaded: 21985 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6555 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13913 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7238 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5945 ms
                                                      cfoa:  4681 ms
                                  cfoa, tbb::spin_rw_mutex:  5218 ms
                                   cfoa, std::shared_mutex:  4949 ms
                                     foa::concurrent_table:  4708 ms
                                  tbb::concurrent_hash_map:  7514 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7738 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19315 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10358 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9268 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13007 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10309 ms
                                     cfoa, single threaded: 12697 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12760 ms
                  cfoa, std::shared_mutex, single threaded: 14671 ms
                    foa::concurrent_table, single threaded: 12544 ms
                 tbb::concurrent_hash_map, single threaded: 23111 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6184 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16388 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7173 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6462 ms
                                                      cfoa:  5147 ms
                                  cfoa, tbb::spin_rw_mutex:  4769 ms
                                   cfoa, std::shared_mutex:  5240 ms
                                     foa::concurrent_table:  5224 ms
                                  tbb::concurrent_hash_map:  7655 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8070 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20963 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12496 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21701 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24635 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23425 ms
                                     cfoa, single threaded: 24665 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25138 ms
                  cfoa, std::shared_mutex, single threaded: 25733 ms
                    foa::concurrent_table, single threaded: 25863 ms
                 tbb::concurrent_hash_map, single threaded: 43211 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11415 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8909 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9669 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10088 ms
                                                      cfoa:  8909 ms
                                  cfoa, tbb::spin_rw_mutex:  8853 ms
                                   cfoa, std::shared_mutex:  9484 ms
                                     foa::concurrent_table:  9606 ms
                                  tbb::concurrent_hash_map: 14403 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12691 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10430 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11996 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6353 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10193 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6057 ms
                                     cfoa, single threaded:  7541 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7604 ms
                  cfoa, std::shared_mutex, single threaded: 11616 ms
                    foa::concurrent_table, single threaded:  7302 ms
                 tbb::concurrent_hash_map, single threaded: 17401 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5290 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11298 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3462 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4546 ms
                                                      cfoa:  3680 ms
                                  cfoa, tbb::spin_rw_mutex:  3665 ms
                                   cfoa, std::shared_mutex:  4689 ms
                                     foa::concurrent_table:  4003 ms
                                  tbb::concurrent_hash_map:  5327 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6164 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11437 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3749 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1046 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1507 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1127 ms
                                     cfoa, single threaded:  1518 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1533 ms
                  cfoa, std::shared_mutex, single threaded:  1793 ms
                    foa::concurrent_table, single threaded:  1509 ms
                 tbb::concurrent_hash_map, single threaded:  2250 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   759 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1420 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   610 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   764 ms
                                                      cfoa:   799 ms
                                  cfoa, tbb::spin_rw_mutex:   869 ms
                                   cfoa, std::shared_mutex:   820 ms
                                     foa::concurrent_table:   768 ms
                                  tbb::concurrent_hash_map:   853 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1108 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1350 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   975 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1130 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1554 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1231 ms
                                     cfoa, single threaded:  1480 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1485 ms
                  cfoa, std::shared_mutex, single threaded:  1788 ms
                    foa::concurrent_table, single threaded:  1467 ms
                 tbb::concurrent_hash_map, single threaded:  2390 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1026 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   669 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   794 ms
                                                      cfoa:   877 ms
                                  cfoa, tbb::spin_rw_mutex:   776 ms
                                   cfoa, std::shared_mutex:   776 ms
                                     foa::concurrent_table:   763 ms
                                  tbb::concurrent_hash_map:   880 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1006 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1404 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   855 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1347 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1681 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1483 ms
                                     cfoa, single threaded:  2039 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2043 ms
                  cfoa, std::shared_mutex, single threaded:  2278 ms
                    foa::concurrent_table, single threaded:  1975 ms
                 tbb::concurrent_hash_map, single threaded:  4263 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1013 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   778 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   801 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1108 ms
                                                      cfoa:   813 ms
                                  cfoa, tbb::spin_rw_mutex:   772 ms
                                   cfoa, std::shared_mutex:   860 ms
                                     foa::concurrent_table:   842 ms
                                  tbb::concurrent_hash_map:  1412 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1175 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   936 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   900 ms
```
<!--vs-x86/main.cpp.txt-->
