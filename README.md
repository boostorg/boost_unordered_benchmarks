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
                boost::unordered_flat_map, single threaded:  8591 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12519 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9410 ms
                           concurrent_foa, single threaded: 13038 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13110 ms
        concurrent_foa, std::shared_mutex, single threaded: 16432 ms
                 tbb::concurrent_hash_map, single threaded: 22829 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6686 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 10690 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6958 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7728 ms
                                            concurrent foa:  4735 ms
                        concurrent foa, tbb::spin_rw_mutex:  4944 ms
                         concurrent foa, std::shared_mutex:  4957 ms
                                  tbb::concurrent_hash_map:  7370 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6793 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 25961 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9960 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9271 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13062 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10325 ms
                           concurrent_foa, single threaded: 12613 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12597 ms
        concurrent_foa, std::shared_mutex, single threaded: 14718 ms
                 tbb::concurrent_hash_map, single threaded: 23281 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6670 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14500 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7233 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7258 ms
                                            concurrent foa:  4926 ms
                        concurrent foa, tbb::spin_rw_mutex:  4562 ms
                         concurrent foa, std::shared_mutex:  5083 ms
                                  tbb::concurrent_hash_map:  7573 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8209 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20703 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12051 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded: 22053 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 26086 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 26751 ms
                           concurrent_foa, single threaded: 26539 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 27378 ms
        concurrent_foa, std::shared_mutex, single threaded: 26891 ms
                 tbb::concurrent_hash_map, single threaded: 45150 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  9815 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8285 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  8145 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 23755 ms
                                            concurrent foa:  9336 ms
                        concurrent foa, tbb::spin_rw_mutex:  8963 ms
                         concurrent foa, std::shared_mutex:  9505 ms
                                  tbb::concurrent_hash_map: 14193 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11727 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10029 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10932 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5765 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10206 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6030 ms
                           concurrent_foa, single threaded:  7302 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7412 ms
        concurrent_foa, std::shared_mutex, single threaded: 11647 ms
                 tbb::concurrent_hash_map, single threaded: 17517 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5476 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11517 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3469 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4781 ms
                                            concurrent foa:  3730 ms
                        concurrent foa, tbb::spin_rw_mutex:  3651 ms
                         concurrent foa, std::shared_mutex:  4590 ms
                                  tbb::concurrent_hash_map:  5453 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6529 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11357 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3697 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   958 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1438 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1150 ms
                           concurrent_foa, single threaded:  1477 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1477 ms
        concurrent_foa, std::shared_mutex, single threaded:  1760 ms
                 tbb::concurrent_hash_map, single threaded:  2280 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   856 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1095 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   613 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   773 ms
                                            concurrent foa:   652 ms
                        concurrent foa, tbb::spin_rw_mutex:   645 ms
                         concurrent foa, std::shared_mutex:   703 ms
                                  tbb::concurrent_hash_map:   848 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1135 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2174 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   721 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1085 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1487 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1146 ms
                           concurrent_foa, single threaded:  1365 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1381 ms
        concurrent_foa, std::shared_mutex, single threaded:  1659 ms
                 tbb::concurrent_hash_map, single threaded:  2367 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   765 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  2452 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   591 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   843 ms
                                            concurrent foa:   631 ms
                        concurrent foa, tbb::spin_rw_mutex:   608 ms
                         concurrent foa, std::shared_mutex:   700 ms
                                  tbb::concurrent_hash_map:   845 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1024 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2243 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   994 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1427 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1961 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1633 ms
                           concurrent_foa, single threaded:  2173 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  2087 ms
        concurrent_foa, std::shared_mutex, single threaded:  2569 ms
                 tbb::concurrent_hash_map, single threaded:  4605 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1057 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   804 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   738 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  2943 ms
                                            concurrent foa:   795 ms
                        concurrent foa, tbb::spin_rw_mutex:   845 ms
                         concurrent foa, std::shared_mutex:   966 ms
                                  tbb::concurrent_hash_map:  1712 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1296 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   910 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   918 ms
```
<!--vs-x86/main.cpp.txt-->
