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
  boost::unordered_flat_map, single threaded, shared_mutex: 11683 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9292 ms
                                     cfoa, single threaded: 12252 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12058 ms
                  cfoa, std::shared_mutex, single threaded: 13920 ms
                    foa::concurrent_table, single threaded: 11535 ms
                 tbb::concurrent_hash_map, single threaded: 21924 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6461 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 22283 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6745 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5875 ms
                                                      cfoa:  6441 ms
                                  cfoa, tbb::spin_rw_mutex:  6225 ms
                                   cfoa, std::shared_mutex:  5526 ms
                                     foa::concurrent_table:  5888 ms
                                  tbb::concurrent_hash_map:  7362 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7753 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17966 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9878 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9172 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12821 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10294 ms
                                     cfoa, single threaded: 12181 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12162 ms
                  cfoa, std::shared_mutex, single threaded: 14457 ms
                    foa::concurrent_table, single threaded: 12192 ms
                 tbb::concurrent_hash_map, single threaded: 23242 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6164 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 19211 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7722 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6605 ms
                                                      cfoa:  6151 ms
                                  cfoa, tbb::spin_rw_mutex:  6681 ms
                                   cfoa, std::shared_mutex:  6053 ms
                                     foa::concurrent_table:  5837 ms
                                  tbb::concurrent_hash_map:  7652 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8060 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 17690 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12084 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 21579 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24691 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24530 ms
                                     cfoa, single threaded: 24091 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 24605 ms
                  cfoa, std::shared_mutex, single threaded: 25038 ms
                    foa::concurrent_table, single threaded: 23665 ms
                 tbb::concurrent_hash_map, single threaded: 42809 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10831 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9932 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9901 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10889 ms
                                                      cfoa:  8587 ms
                                  cfoa, tbb::spin_rw_mutex:  9247 ms
                                   cfoa, std::shared_mutex:  8841 ms
                                     foa::concurrent_table:  8707 ms
                                  tbb::concurrent_hash_map: 14228 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12146 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10572 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11509 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5853 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10135 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6045 ms
                                     cfoa, single threaded:  7411 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7458 ms
                  cfoa, std::shared_mutex, single threaded: 11620 ms
                    foa::concurrent_table, single threaded:  7309 ms
                 tbb::concurrent_hash_map, single threaded: 17272 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5373 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11086 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3446 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4476 ms
                                                      cfoa:  3778 ms
                                  cfoa, tbb::spin_rw_mutex:  3822 ms
                                   cfoa, std::shared_mutex:  4772 ms
                                     foa::concurrent_table:  4001 ms
                                  tbb::concurrent_hash_map:  5495 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6480 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11353 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3752 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1066 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1488 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1135 ms
                                     cfoa, single threaded:  1502 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1517 ms
                  cfoa, std::shared_mutex, single threaded:  1812 ms
                    foa::concurrent_table, single threaded:  1455 ms
                 tbb::concurrent_hash_map, single threaded:  2234 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   776 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1727 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   626 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   774 ms
                                                      cfoa:   861 ms
                                  cfoa, tbb::spin_rw_mutex:   992 ms
                                   cfoa, std::shared_mutex:   920 ms
                                     foa::concurrent_table:   921 ms
                                  tbb::concurrent_hash_map:   911 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1097 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1123 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   825 ms
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
                                     cfoa, single threaded:  1434 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1417 ms
                  cfoa, std::shared_mutex, single threaded:  1788 ms
                    foa::concurrent_table, single threaded:  1431 ms
                 tbb::concurrent_hash_map, single threaded:  2371 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1002 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   576 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   772 ms
                                                      cfoa:   885 ms
                                  cfoa, tbb::spin_rw_mutex:   994 ms
                                   cfoa, std::shared_mutex:   844 ms
                                     foa::concurrent_table:   928 ms
                                  tbb::concurrent_hash_map:   865 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1009 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1077 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   890 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1352 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1815 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1548 ms
                                     cfoa, single threaded:  2011 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1960 ms
                  cfoa, std::shared_mutex, single threaded:  2189 ms
                    foa::concurrent_table, single threaded:  1950 ms
                 tbb::concurrent_hash_map, single threaded:  4083 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   884 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   702 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   616 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   943 ms
                                                      cfoa:   807 ms
                                  cfoa, tbb::spin_rw_mutex:   774 ms
                                   cfoa, std::shared_mutex:   965 ms
                                     foa::concurrent_table:   805 ms
                                  tbb::concurrent_hash_map:  1457 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1220 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   933 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   887 ms
```
<!--vs-x86/main.cpp.txt-->
