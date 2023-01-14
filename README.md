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
                boost::unordered_flat_map, single threaded:  8528 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12632 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9467 ms
                           concurrent_foa, single threaded: 13098 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13199 ms
        concurrent_foa, std::shared_mutex, single threaded: 15107 ms
                 tbb::concurrent_hash_map, single threaded: 22779 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6808 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 16578 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7392 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7534 ms
                                            concurrent foa:  4339 ms
                        concurrent foa, tbb::spin_rw_mutex:  4634 ms
                         concurrent foa, std::shared_mutex:  4803 ms
                                 libcuckoo::cuckoohash_map: 23591 ms
                                  tbb::concurrent_hash_map:  7497 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6729 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 26035 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9912 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
                boost::unordered_flat_map, single threaded:  9284 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13031 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10319 ms
                           concurrent_foa, single threaded: 12993 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12999 ms
        concurrent_foa, std::shared_mutex, single threaded: 15139 ms
                 tbb::concurrent_hash_map, single threaded: 23461 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6653 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 12437 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7417 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7258 ms
                                            concurrent foa:  4714 ms
                        concurrent foa, tbb::spin_rw_mutex:  4944 ms
                         concurrent foa, std::shared_mutex:  5179 ms
                                 libcuckoo::cuckoohash_map: 27370 ms
                                  tbb::concurrent_hash_map:  7578 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8249 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 24044 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12153 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
                boost::unordered_flat_map, single threaded:  5824 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10276 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6040 ms
                           concurrent_foa, single threaded:  7491 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7558 ms
        concurrent_foa, std::shared_mutex, single threaded: 11724 ms
                 tbb::concurrent_hash_map, single threaded: 17559 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5422 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14829 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  4616 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  8056 ms
                                            concurrent foa:  3554 ms
                        concurrent foa, tbb::spin_rw_mutex:  3582 ms
                         concurrent foa, std::shared_mutex:  4331 ms
                                 libcuckoo::cuckoohash_map: 23738 ms
                                  tbb::concurrent_hash_map:  5222 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6525 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 14199 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  5583 ms
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
