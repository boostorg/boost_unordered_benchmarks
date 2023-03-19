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
                boost::unordered_flat_map, single threaded:  7763 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11734 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9349 ms
                                     cfoa, single threaded: 12715 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12467 ms
                  cfoa, std::shared_mutex, single threaded: 14249 ms
                    foa::concurrent_table, single threaded: 12066 ms
                 tbb::concurrent_hash_map, single threaded: 21953 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6426 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16862 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7539 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5790 ms
                                                      cfoa:  4928 ms
                                  cfoa, tbb::spin_rw_mutex:  4846 ms
                                   cfoa, std::shared_mutex:  4979 ms
                                     foa::concurrent_table:  4367 ms
                                  tbb::concurrent_hash_map:  7352 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7793 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15281 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9935 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9516 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13020 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10475 ms
                                     cfoa, single threaded: 12808 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12990 ms
                  cfoa, std::shared_mutex, single threaded: 14930 ms
                    foa::concurrent_table, single threaded: 12852 ms
                 tbb::concurrent_hash_map, single threaded: 23813 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6110 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14152 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7443 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6034 ms
                                                      cfoa:  4914 ms
                                  cfoa, tbb::spin_rw_mutex:  5161 ms
                                   cfoa, std::shared_mutex:  5197 ms
                                     foa::concurrent_table:  4931 ms
                                  tbb::concurrent_hash_map:  7616 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7962 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14965 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11935 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21638 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24291 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23551 ms
                                     cfoa, single threaded: 24856 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25269 ms
                  cfoa, std::shared_mutex, single threaded: 25484 ms
                    foa::concurrent_table, single threaded: 25590 ms
                 tbb::concurrent_hash_map, single threaded: 42599 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 11264 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8678 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10145 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10248 ms
                                                      cfoa:  9210 ms
                                  cfoa, tbb::spin_rw_mutex:  9182 ms
                                   cfoa, std::shared_mutex:  8683 ms
                                     foa::concurrent_table:  9405 ms
                                  tbb::concurrent_hash_map: 14340 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12664 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10106 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12079 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5714 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10175 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6045 ms
                                     cfoa, single threaded:  7505 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7606 ms
                  cfoa, std::shared_mutex, single threaded: 11634 ms
                    foa::concurrent_table, single threaded:  7343 ms
                 tbb::concurrent_hash_map, single threaded: 17404 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5402 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11356 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3387 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4556 ms
                                                      cfoa:  3778 ms
                                  cfoa, tbb::spin_rw_mutex:  3842 ms
                                   cfoa, std::shared_mutex:  4795 ms
                                     foa::concurrent_table:  3946 ms
                                  tbb::concurrent_hash_map:  5557 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6314 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11449 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3713 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1050 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1480 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1139 ms
                                     cfoa, single threaded:  1518 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1534 ms
                  cfoa, std::shared_mutex, single threaded:  1795 ms
                    foa::concurrent_table, single threaded:  1509 ms
                 tbb::concurrent_hash_map, single threaded:  2217 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   769 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1971 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   705 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   777 ms
                                                      cfoa:   792 ms
                                  cfoa, tbb::spin_rw_mutex:  1077 ms
                                   cfoa, std::shared_mutex:   782 ms
                                     foa::concurrent_table:   728 ms
                                  tbb::concurrent_hash_map:   877 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1097 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2367 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   808 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1131 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1561 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1225 ms
                                     cfoa, single threaded:  1475 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1485 ms
                  cfoa, std::shared_mutex, single threaded:  1797 ms
                    foa::concurrent_table, single threaded:  1457 ms
                 tbb::concurrent_hash_map, single threaded:  2391 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   770 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   948 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   641 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   766 ms
                                                      cfoa:   829 ms
                                  cfoa, tbb::spin_rw_mutex:   918 ms
                                   cfoa, std::shared_mutex:   802 ms
                                     foa::concurrent_table:   775 ms
                                  tbb::concurrent_hash_map:   889 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1007 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   990 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1113 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1379 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1852 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1523 ms
                                     cfoa, single threaded:  2077 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2049 ms
                  cfoa, std::shared_mutex, single threaded:  2312 ms
                    foa::concurrent_table, single threaded:  1991 ms
                 tbb::concurrent_hash_map, single threaded:  3954 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   879 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   698 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   703 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   809 ms
                                                      cfoa:   861 ms
                                  cfoa, tbb::spin_rw_mutex:   735 ms
                                   cfoa, std::shared_mutex:   863 ms
                                     foa::concurrent_table:   849 ms
                                  tbb::concurrent_hash_map:  1460 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1116 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   934 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   912 ms
```
<!--vs-x86/main.cpp.txt-->
