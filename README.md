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
                boost::unordered_flat_map, single threaded:  8614 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12495 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9428 ms
                           concurrent_foa, single threaded: 13076 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13117 ms
        concurrent_foa, std::shared_mutex, single threaded: 16436 ms
                 tbb::concurrent_hash_map, single threaded: 22712 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6695 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13536 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7520 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7778 ms
                                            concurrent foa:  4638 ms
                        concurrent foa, tbb::spin_rw_mutex:  4904 ms
                         concurrent foa, std::shared_mutex:  5011 ms
                                  tbb::concurrent_hash_map:  7464 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6696 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 35428 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9691 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9198 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12989 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10287 ms
                           concurrent_foa, single threaded: 12574 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12533 ms
        concurrent_foa, std::shared_mutex, single threaded: 14659 ms
                 tbb::concurrent_hash_map, single threaded: 23231 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6662 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11109 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7316 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7575 ms
                                            concurrent foa:  4888 ms
                        concurrent foa, tbb::spin_rw_mutex:  4604 ms
                         concurrent foa, std::shared_mutex:  5049 ms
                                  tbb::concurrent_hash_map:  7716 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8266 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 24839 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12725 ms
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
                boost::unordered_flat_map, single threaded:  5675 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10249 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6047 ms
                           concurrent_foa, single threaded:  7302 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7412 ms
        concurrent_foa, std::shared_mutex, single threaded: 11663 ms
                 tbb::concurrent_hash_map, single threaded: 17471 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5493 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11429 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3445 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4789 ms
                                            concurrent foa:  3814 ms
                        concurrent foa, tbb::spin_rw_mutex:  3639 ms
                         concurrent foa, std::shared_mutex:  4633 ms
                                  tbb::concurrent_hash_map:  5347 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6156 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11457 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3696 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   959 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1439 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1152 ms
                           concurrent_foa, single threaded:  1477 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1478 ms
        concurrent_foa, std::shared_mutex, single threaded:  1759 ms
                 tbb::concurrent_hash_map, single threaded:  2277 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   851 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1447 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   692 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   806 ms
                                            concurrent foa:   655 ms
                        concurrent foa, tbb::spin_rw_mutex:   643 ms
                         concurrent foa, std::shared_mutex:   744 ms
                                  tbb::concurrent_hash_map:   837 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1151 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1274 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   835 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1084 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1485 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1193 ms
                           concurrent_foa, single threaded:  1366 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1382 ms
        concurrent_foa, std::shared_mutex, single threaded:  1661 ms
                 tbb::concurrent_hash_map, single threaded:  2372 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   758 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1996 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   581 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   837 ms
                                            concurrent foa:   636 ms
                        concurrent foa, tbb::spin_rw_mutex:   606 ms
                         concurrent foa, std::shared_mutex:   723 ms
                                  tbb::concurrent_hash_map:   850 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1017 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2425 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   969 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
<!--vs-x86/main.cpp.txt-->
