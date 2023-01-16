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
                boost::unordered_flat_map, single threaded:  8583 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12577 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9456 ms
                           concurrent_foa, single threaded: 12795 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12991 ms
        concurrent_foa, std::shared_mutex, single threaded: 14859 ms
                 tbb::concurrent_hash_map, single threaded: 22753 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6668 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15732 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7369 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7860 ms
                                            concurrent foa:  4839 ms
                        concurrent foa, tbb::spin_rw_mutex:  4882 ms
                         concurrent foa, std::shared_mutex:  4788 ms
                                  tbb::concurrent_hash_map:  7661 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6868 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 32282 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10331 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9256 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13058 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10353 ms
                           concurrent_foa, single threaded: 12738 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12712 ms
        concurrent_foa, std::shared_mutex, single threaded: 14775 ms
                 tbb::concurrent_hash_map, single threaded: 23223 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6663 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 15689 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7740 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7602 ms
                                            concurrent foa:  4681 ms
                        concurrent foa, tbb::spin_rw_mutex:  4854 ms
                         concurrent foa, std::shared_mutex:  5133 ms
                                  tbb::concurrent_hash_map:  7534 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8312 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 22951 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12567 ms
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
                boost::unordered_flat_map, single threaded:  5807 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10274 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6057 ms
                           concurrent_foa, single threaded:  7338 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7417 ms
        concurrent_foa, std::shared_mutex, single threaded: 11709 ms
                 tbb::concurrent_hash_map, single threaded: 17449 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5257 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11403 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3486 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4768 ms
                                            concurrent foa:  3659 ms
                        concurrent foa, tbb::spin_rw_mutex:  3687 ms
                         concurrent foa, std::shared_mutex:  4632 ms
                                  tbb::concurrent_hash_map:  5395 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7219 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11558 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3704 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   960 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1417 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1153 ms
                           concurrent_foa, single threaded:  1482 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1473 ms
        concurrent_foa, std::shared_mutex, single threaded:  1767 ms
                 tbb::concurrent_hash_map, single threaded:  2281 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   856 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   863 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   983 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   794 ms
                                            concurrent foa:   672 ms
                        concurrent foa, tbb::spin_rw_mutex:   674 ms
                         concurrent foa, std::shared_mutex:   735 ms
                                  tbb::concurrent_hash_map:   830 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1144 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2145 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   784 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1083 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1481 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1137 ms
                           concurrent_foa, single threaded:  1358 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1359 ms
        concurrent_foa, std::shared_mutex, single threaded:  1635 ms
                 tbb::concurrent_hash_map, single threaded:  2330 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   749 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2605 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   785 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   815 ms
                                            concurrent foa:   595 ms
                        concurrent foa, tbb::spin_rw_mutex:   637 ms
                         concurrent foa, std::shared_mutex:   734 ms
                                  tbb::concurrent_hash_map:   857 ms
                   gtl::parallel_flat_hash_map<std::mutex>:   996 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1831 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1032 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
<!--vs-x86/main.cpp.txt-->
