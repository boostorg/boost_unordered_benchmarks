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
                boost::unordered_flat_map, single threaded:  7723 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11677 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9281 ms
                                     cfoa, single threaded: 12285 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12318 ms
                  cfoa, std::shared_mutex, single threaded: 14188 ms
                    foa::concurrent_table, single threaded: 12043 ms
               boost::concurrent_flat_map, single threaded: 12016 ms
                 tbb::concurrent_hash_map, single threaded: 21791 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6503 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 10941 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6942 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5681 ms
                                                      cfoa:  5547 ms
                                  cfoa, tbb::spin_rw_mutex:  5776 ms
                                   cfoa, std::shared_mutex:  5678 ms
                                     foa::concurrent_table:  5611 ms
                                boost::concurrent_flat_map:  5460 ms
                                  tbb::concurrent_hash_map:  7347 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8706 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 13785 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10067 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9212 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12830 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10223 ms
                                     cfoa, single threaded: 12433 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12480 ms
                  cfoa, std::shared_mutex, single threaded: 14487 ms
                    foa::concurrent_table, single threaded: 12433 ms
               boost::concurrent_flat_map, single threaded: 12499 ms
                 tbb::concurrent_hash_map, single threaded: 22976 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6203 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14321 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7642 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6749 ms
                                                      cfoa:  6377 ms
                                  cfoa, tbb::spin_rw_mutex:  6072 ms
                                   cfoa, std::shared_mutex:  5884 ms
                                     foa::concurrent_table:  5799 ms
                                boost::concurrent_flat_map:  5992 ms
                                  tbb::concurrent_hash_map:  7474 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8021 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 15409 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12323 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 22344 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 25679 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 24899 ms
                                     cfoa, single threaded: 25656 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 26332 ms
                  cfoa, std::shared_mutex, single threaded: 26289 ms
                    foa::concurrent_table, single threaded: 25006 ms
               boost::concurrent_flat_map, single threaded: 25381 ms
                 tbb::concurrent_hash_map, single threaded: 42286 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10745 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9319 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>: 10049 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 11299 ms
                                                      cfoa:  9682 ms
                                  cfoa, tbb::spin_rw_mutex:  9383 ms
                                   cfoa, std::shared_mutex: 10290 ms
                                     foa::concurrent_table:  8912 ms
                                boost::concurrent_flat_map:  9476 ms
                                  tbb::concurrent_hash_map: 14660 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12303 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10458 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11762 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  6466 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10179 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6061 ms
                                     cfoa, single threaded:  7517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7571 ms
                  cfoa, std::shared_mutex, single threaded: 11848 ms
                    foa::concurrent_table, single threaded:  7459 ms
               boost::concurrent_flat_map, single threaded:  7641 ms
                 tbb::concurrent_hash_map, single threaded: 17420 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5161 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11420 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3417 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4516 ms
                                                      cfoa:  4048 ms
                                  cfoa, tbb::spin_rw_mutex:  4045 ms
                                   cfoa, std::shared_mutex:  4818 ms
                                     foa::concurrent_table:  3862 ms
                                boost::concurrent_flat_map:  4054 ms
                                  tbb::concurrent_hash_map:  5599 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6196 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11196 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3723 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1064 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1527 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1142 ms
                                     cfoa, single threaded:  1529 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1544 ms
                  cfoa, std::shared_mutex, single threaded:  1827 ms
                    foa::concurrent_table, single threaded:  1469 ms
               boost::concurrent_flat_map, single threaded:  1472 ms
                 tbb::concurrent_hash_map, single threaded:  2239 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   766 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1931 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   825 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   805 ms
                                                      cfoa:   819 ms
                                  cfoa, tbb::spin_rw_mutex:   846 ms
                                   cfoa, std::shared_mutex:   723 ms
                                     foa::concurrent_table:   789 ms
                                boost::concurrent_flat_map:   796 ms
                                  tbb::concurrent_hash_map:   852 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1099 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2078 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1155 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1136 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1577 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1233 ms
                                     cfoa, single threaded:  1450 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1470 ms
                  cfoa, std::shared_mutex, single threaded:  1837 ms
                    foa::concurrent_table, single threaded:  1490 ms
               boost::concurrent_flat_map, single threaded:  1473 ms
                 tbb::concurrent_hash_map, single threaded:  2390 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   757 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2076 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   623 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   768 ms
                                                      cfoa:   722 ms
                                  cfoa, tbb::spin_rw_mutex:   767 ms
                                   cfoa, std::shared_mutex:   709 ms
                                     foa::concurrent_table:   764 ms
                                boost::concurrent_flat_map:   871 ms
                                  tbb::concurrent_hash_map:   878 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1019 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1478 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   877 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1424 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1954 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1709 ms
                                     cfoa, single threaded:  2184 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  2238 ms
                  cfoa, std::shared_mutex, single threaded:  2453 ms
                    foa::concurrent_table, single threaded:  2162 ms
               boost::concurrent_flat_map, single threaded:  2194 ms
                 tbb::concurrent_hash_map, single threaded:  4185 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1032 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   730 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   768 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  1071 ms
                                                      cfoa:   937 ms
                                  cfoa, tbb::spin_rw_mutex:   803 ms
                                   cfoa, std::shared_mutex:   970 ms
                                     foa::concurrent_table:   921 ms
                                boost::concurrent_flat_map:   919 ms
                                  tbb::concurrent_hash_map:  1714 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1183 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   926 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   955 ms
```
<!--vs-x86/main.cpp.txt-->
