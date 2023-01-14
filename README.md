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
                boost::unordered_flat_map, single threaded:  8539 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12647 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9475 ms
                           concurrent_foa, single threaded: 13102 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13215 ms
        concurrent_foa, std::shared_mutex, single threaded: 15116 ms
                 tbb::concurrent_hash_map, single threaded: 22811 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6801 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14218 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7057 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7909 ms
                                            concurrent foa:  4628 ms
                        concurrent foa, tbb::spin_rw_mutex:  4569 ms
                         concurrent foa, std::shared_mutex:  4791 ms
                                 libcuckoo::cuckoohash_map: 23345 ms
                                  tbb::concurrent_hash_map:  7507 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6731 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 34772 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10056 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
                boost::unordered_flat_map, single threaded:  9550 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13261 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10568 ms
                           concurrent_foa, single threaded: 13277 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13277 ms
        concurrent_foa, std::shared_mutex, single threaded: 15418 ms
                 tbb::concurrent_hash_map, single threaded: 24052 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6638 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16520 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7184 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7693 ms
                                            concurrent foa:  4669 ms
                        concurrent foa, tbb::spin_rw_mutex:  4560 ms
                         concurrent foa, std::shared_mutex:  5228 ms
                                 libcuckoo::cuckoohash_map: 26002 ms
                                  tbb::concurrent_hash_map:  7512 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8209 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22539 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11594 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
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
