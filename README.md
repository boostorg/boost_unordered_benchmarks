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
                boost::unordered_flat_map, single threaded:  8567 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12576 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9428 ms
                           concurrent_foa, single threaded: 12787 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12997 ms
        concurrent_foa, std::shared_mutex, single threaded: 14852 ms
                 tbb::concurrent_hash_map, single threaded: 22744 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6756 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13053 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7104 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7582 ms
                                            concurrent foa:  4890 ms
                        concurrent foa, tbb::spin_rw_mutex:  4724 ms
                         concurrent foa, std::shared_mutex:  4813 ms
                                  tbb::concurrent_hash_map:  7541 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6795 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 28919 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10394 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9235 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13047 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10338 ms
                           concurrent_foa, single threaded: 12708 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12684 ms
        concurrent_foa, std::shared_mutex, single threaded: 14761 ms
                 tbb::concurrent_hash_map, single threaded: 23195 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6627 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14175 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7709 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7702 ms
                                            concurrent foa:  4784 ms
                        concurrent foa, tbb::spin_rw_mutex:  4867 ms
                         concurrent foa, std::shared_mutex:  5023 ms
                                  tbb::concurrent_hash_map:  7665 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8278 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20667 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12490 ms
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
                boost::unordered_flat_map, single threaded:  5881 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10254 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6083 ms
                           concurrent_foa, single threaded:  7331 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7435 ms
        concurrent_foa, std::shared_mutex, single threaded: 11687 ms
                 tbb::concurrent_hash_map, single threaded: 17422 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5400 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11679 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3434 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4750 ms
                                            concurrent foa:  3767 ms
                        concurrent foa, tbb::spin_rw_mutex:  3812 ms
                         concurrent foa, std::shared_mutex:  4707 ms
                                  tbb::concurrent_hash_map:  5472 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6299 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11553 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3662 ms
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
