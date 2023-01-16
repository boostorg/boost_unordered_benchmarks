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
                boost::unordered_flat_map, single threaded:  8540 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12588 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9512 ms
                           concurrent_foa, single threaded: 13518 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13728 ms
        concurrent_foa, std::shared_mutex, single threaded: 17380 ms
                 tbb::concurrent_hash_map, single threaded: 22773 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6768 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16939 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7212 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7171 ms
                                            concurrent foa:  4826 ms
                        concurrent foa, tbb::spin_rw_mutex:  4732 ms
                         concurrent foa, std::shared_mutex:  5264 ms
                                  tbb::concurrent_hash_map:  7582 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6694 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 30110 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10346 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9307 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12961 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10344 ms
                           concurrent_foa, single threaded: 12897 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12926 ms
        concurrent_foa, std::shared_mutex, single threaded: 14904 ms
                 tbb::concurrent_hash_map, single threaded: 23178 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6537 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15053 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7848 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7479 ms
                                            concurrent foa:  4978 ms
                        concurrent foa, tbb::spin_rw_mutex:  4853 ms
                         concurrent foa, std::shared_mutex:  5043 ms
                                  tbb::concurrent_hash_map:  7526 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8324 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19495 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12008 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5770 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10263 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6064 ms
                           concurrent_foa, single threaded:  7338 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7380 ms
        concurrent_foa, std::shared_mutex, single threaded: 11669 ms
                 tbb::concurrent_hash_map, single threaded: 17454 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5443 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11307 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3463 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4745 ms
                                            concurrent foa:  3768 ms
                        concurrent foa, tbb::spin_rw_mutex:  3816 ms
                         concurrent foa, std::shared_mutex:  4741 ms
                                  tbb::concurrent_hash_map:  5449 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6462 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11398 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3679 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   959 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1417 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1155 ms
                           concurrent_foa, single threaded:  1479 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1472 ms
        concurrent_foa, std::shared_mutex, single threaded:  1766 ms
                 tbb::concurrent_hash_map, single threaded:  2281 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   847 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1395 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   613 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   772 ms
                                            concurrent foa:   649 ms
                        concurrent foa, tbb::spin_rw_mutex:   633 ms
                         concurrent foa, std::shared_mutex:   727 ms
                                  tbb::concurrent_hash_map:   853 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1141 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1360 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   992 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1082 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1481 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1137 ms
                           concurrent_foa, single threaded:  1359 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1360 ms
        concurrent_foa, std::shared_mutex, single threaded:  1635 ms
                 tbb::concurrent_hash_map, single threaded:  2355 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   762 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  3331 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   594 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   791 ms
                                            concurrent foa:   608 ms
                        concurrent foa, tbb::spin_rw_mutex:   616 ms
                         concurrent foa, std::shared_mutex:   694 ms
                                  tbb::concurrent_hash_map:   884 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1020 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  3449 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   992 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
<!--vs-x86/main.cpp.txt-->
