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
                boost::unordered_flat_map, single threaded:  8530 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12581 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9503 ms
                           concurrent_foa, single threaded: 13499 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13706 ms
        concurrent_foa, std::shared_mutex, single threaded: 17312 ms
                 tbb::concurrent_hash_map, single threaded: 22757 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6798 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11812 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6865 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7693 ms
                                            concurrent foa:  4891 ms
                        concurrent foa, tbb::spin_rw_mutex:  4782 ms
                         concurrent foa, std::shared_mutex:  5239 ms
                                  tbb::concurrent_hash_map:  7351 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6820 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 28370 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10060 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9316 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12957 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10348 ms
                           concurrent_foa, single threaded: 12895 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12918 ms
        concurrent_foa, std::shared_mutex, single threaded: 14889 ms
                 tbb::concurrent_hash_map, single threaded: 23178 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6688 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14580 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7008 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7497 ms
                                            concurrent foa:  4939 ms
                        concurrent foa, tbb::spin_rw_mutex:  4738 ms
                         concurrent foa, std::shared_mutex:  5228 ms
                                  tbb::concurrent_hash_map:  7591 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8342 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 18044 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12608 ms
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
                boost::unordered_flat_map, single threaded:  5734 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10274 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6065 ms
                           concurrent_foa, single threaded:  7331 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7427 ms
        concurrent_foa, std::shared_mutex, single threaded: 11670 ms
                 tbb::concurrent_hash_map, single threaded: 17495 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5412 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11409 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3448 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4839 ms
                                            concurrent foa:  3649 ms
                        concurrent foa, tbb::spin_rw_mutex:  3673 ms
                         concurrent foa, std::shared_mutex:  4694 ms
                                  tbb::concurrent_hash_map:  5341 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6259 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11420 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3653 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   959 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1416 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1151 ms
                           concurrent_foa, single threaded:  1481 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1473 ms
        concurrent_foa, std::shared_mutex, single threaded:  1767 ms
                 tbb::concurrent_hash_map, single threaded:  2283 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   844 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   796 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   757 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   832 ms
                                            concurrent foa:   677 ms
                        concurrent foa, tbb::spin_rw_mutex:   643 ms
                         concurrent foa, std::shared_mutex:   713 ms
                                  tbb::concurrent_hash_map:   870 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1169 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2349 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   744 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1081 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1480 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1135 ms
                           concurrent_foa, single threaded:  1357 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1358 ms
        concurrent_foa, std::shared_mutex, single threaded:  1634 ms
                 tbb::concurrent_hash_map, single threaded:  2328 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   736 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2636 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   683 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   847 ms
                                            concurrent foa:   606 ms
                        concurrent foa, tbb::spin_rw_mutex:   608 ms
                         concurrent foa, std::shared_mutex:   723 ms
                                  tbb::concurrent_hash_map:   830 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1031 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  4072 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   969 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
<!--vs-x86/main.cpp.txt-->
