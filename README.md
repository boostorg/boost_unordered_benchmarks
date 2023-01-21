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
                boost::unordered_flat_map, single threaded:  8791 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12765 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9693 ms
                           concurrent_foa, single threaded: 13566 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13612 ms
        concurrent_foa, std::shared_mutex, single threaded: 15455 ms
                 tbb::concurrent_hash_map, single threaded: 23383 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6751 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13515 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6725 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7710 ms
                                            concurrent foa:  4428 ms
                        concurrent foa, tbb::spin_rw_mutex:  4813 ms
                         concurrent foa, std::shared_mutex:  4846 ms
                                  tbb::concurrent_hash_map:  7535 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6678 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 23280 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10930 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9200 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12791 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10219 ms
                           concurrent_foa, single threaded: 12767 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12735 ms
        concurrent_foa, std::shared_mutex, single threaded: 14933 ms
                 tbb::concurrent_hash_map, single threaded: 23277 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6614 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 17731 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7693 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7686 ms
                                            concurrent foa:  4444 ms
                        concurrent foa, tbb::spin_rw_mutex:  4620 ms
                         concurrent foa, std::shared_mutex:  5135 ms
                                  tbb::concurrent_hash_map:  7611 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8316 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 21015 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11979 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded: 21013 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24814 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 26232 ms
                           concurrent_foa, single threaded: 28536 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 28580 ms
        concurrent_foa, std::shared_mutex, single threaded: 29580 ms
                 tbb::concurrent_hash_map, single threaded: 45435 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10227 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  8251 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  8405 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 23780 ms
                                            concurrent foa:  9509 ms
                        concurrent foa, tbb::spin_rw_mutex:  9868 ms
                         concurrent foa, std::shared_mutex:  9805 ms
                                  tbb::concurrent_hash_map: 14254 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 11779 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10157 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10868 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5752 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10225 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6055 ms
                           concurrent_foa, single threaded:  7439 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7532 ms
        concurrent_foa, std::shared_mutex, single threaded: 11777 ms
                 tbb::concurrent_hash_map, single threaded: 17516 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5505 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11414 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3477 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4775 ms
                                            concurrent foa:  4143 ms
                        concurrent foa, tbb::spin_rw_mutex:  4117 ms
                         concurrent foa, std::shared_mutex:  4841 ms
                                  tbb::concurrent_hash_map:  5348 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6103 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11490 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3709 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   960 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1399 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1148 ms
                           concurrent_foa, single threaded:  1495 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1505 ms
        concurrent_foa, std::shared_mutex, single threaded:  1786 ms
                 tbb::concurrent_hash_map, single threaded:  2250 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   841 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   852 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   643 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   821 ms
                                            concurrent foa:   594 ms
                        concurrent foa, tbb::spin_rw_mutex:   567 ms
                         concurrent foa, std::shared_mutex:   586 ms
                                  tbb::concurrent_hash_map:   851 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1139 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1294 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   792 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1071 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1496 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1126 ms
                           concurrent_foa, single threaded:  1388 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1383 ms
        concurrent_foa, std::shared_mutex, single threaded:  1680 ms
                 tbb::concurrent_hash_map, single threaded:  2335 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   738 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   916 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   695 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   789 ms
                                            concurrent foa:   560 ms
                        concurrent foa, tbb::spin_rw_mutex:   576 ms
                         concurrent foa, std::shared_mutex:   568 ms
                                  tbb::concurrent_hash_map:   850 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1028 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2090 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  1141 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1360 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1811 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1555 ms
                           concurrent_foa, single threaded:  2160 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  2072 ms
        concurrent_foa, std::shared_mutex, single threaded:  2416 ms
                 tbb::concurrent_hash_map, single threaded:  4183 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   991 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   818 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   721 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  2751 ms
                                            concurrent foa:   738 ms
                        concurrent foa, tbb::spin_rw_mutex:   907 ms
                         concurrent foa, std::shared_mutex:   891 ms
                                  tbb::concurrent_hash_map:  1450 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1101 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   917 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   896 ms
```
<!--vs-x86/main.cpp.txt-->
