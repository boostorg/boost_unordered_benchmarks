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
                boost::unordered_flat_map, single threaded:  8528 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12585 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9466 ms
                           concurrent_foa, single threaded: 13192 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13346 ms
        concurrent_foa, std::shared_mutex, single threaded: 15125 ms
                 tbb::concurrent_hash_map, single threaded: 22845 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6776 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11604 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7100 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7611 ms
                                            concurrent foa:  4699 ms
                        concurrent foa, tbb::spin_rw_mutex:  4852 ms
                         concurrent foa, std::shared_mutex:  4864 ms
                                  tbb::concurrent_hash_map:  7614 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6823 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 38113 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10576 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9268 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12927 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10307 ms
                           concurrent_foa, single threaded: 12972 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12973 ms
        concurrent_foa, std::shared_mutex, single threaded: 15110 ms
                 tbb::concurrent_hash_map, single threaded: 23427 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6655 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16595 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7157 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7693 ms
                                            concurrent foa:  4874 ms
                        concurrent foa, tbb::spin_rw_mutex:  4604 ms
                         concurrent foa, std::shared_mutex:  5170 ms
                                  tbb::concurrent_hash_map:  7591 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8273 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 19422 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11879 ms
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
                boost::unordered_flat_map, single threaded:  5866 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10133 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6085 ms
                           concurrent_foa, single threaded:  7439 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7523 ms
        concurrent_foa, std::shared_mutex, single threaded: 11762 ms
                 tbb::concurrent_hash_map, single threaded: 17537 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5308 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11654 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3423 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4816 ms
                                            concurrent foa:  3779 ms
                        concurrent foa, tbb::spin_rw_mutex:  3932 ms
                         concurrent foa, std::shared_mutex:  4567 ms
                                  tbb::concurrent_hash_map:  5290 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6044 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11421 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3676 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
<!--vs-x86/main.cpp.txt-->
