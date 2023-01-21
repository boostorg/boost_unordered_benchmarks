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
                boost::unordered_flat_map, single threaded:  8644 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12543 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9470 ms
                           concurrent_foa, single threaded: 13123 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 13161 ms
        concurrent_foa, std::shared_mutex, single threaded: 16485 ms
                 tbb::concurrent_hash_map, single threaded: 22831 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6752 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14510 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  6553 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7641 ms
                                            concurrent foa:  4643 ms
                        concurrent foa, tbb::spin_rw_mutex:  4886 ms
                         concurrent foa, std::shared_mutex:  5135 ms
                                  tbb::concurrent_hash_map:  7515 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6705 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 28471 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 10563 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9240 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 13028 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10297 ms
                           concurrent_foa, single threaded: 12615 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 12580 ms
        concurrent_foa, std::shared_mutex, single threaded: 14684 ms
                 tbb::concurrent_hash_map, single threaded: 23285 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6611 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 14942 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7472 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  7689 ms
                                            concurrent foa:  4643 ms
                        concurrent foa, tbb::spin_rw_mutex:  4606 ms
                         concurrent foa, std::shared_mutex:  5096 ms
                                  tbb::concurrent_hash_map:  7425 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  8254 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20961 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12375 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20459 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24730 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 25717 ms
                           concurrent_foa, single threaded: 26513 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded: 27104 ms
        concurrent_foa, std::shared_mutex, single threaded: 27138 ms
                 tbb::concurrent_hash_map, single threaded: 45766 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10652 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9102 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9191 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  9522 ms
                                            concurrent foa:  8498 ms
                        concurrent foa, tbb::spin_rw_mutex:  9375 ms
                         concurrent foa, std::shared_mutex:  9469 ms
                                  tbb::concurrent_hash_map: 14568 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12921 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10541 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 12829 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5774 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10230 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6038 ms
                           concurrent_foa, single threaded:  7341 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  7391 ms
        concurrent_foa, std::shared_mutex, single threaded: 11662 ms
                 tbb::concurrent_hash_map, single threaded: 17492 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5392 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11305 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3500 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4775 ms
                                            concurrent foa:  3659 ms
                        concurrent foa, tbb::spin_rw_mutex:  3712 ms
                         concurrent foa, std::shared_mutex:  4830 ms
                                  tbb::concurrent_hash_map:  5465 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6730 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11502 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3629 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:   959 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1440 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1151 ms
                           concurrent_foa, single threaded:  1478 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1478 ms
        concurrent_foa, std::shared_mutex, single threaded:  1758 ms
                 tbb::concurrent_hash_map, single threaded:  2281 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   846 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1119 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   727 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   782 ms
                                            concurrent foa:   662 ms
                        concurrent foa, tbb::spin_rw_mutex:   668 ms
                         concurrent foa, std::shared_mutex:   730 ms
                                  tbb::concurrent_hash_map:   846 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1129 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1446 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   813 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1085 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1486 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1147 ms
                           concurrent_foa, single threaded:  1366 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  1381 ms
        concurrent_foa, std::shared_mutex, single threaded:  1659 ms
                 tbb::concurrent_hash_map, single threaded:  2342 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   742 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   922 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   762 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   828 ms
                                            concurrent foa:   623 ms
                        concurrent foa, tbb::spin_rw_mutex:   615 ms
                         concurrent foa, std::shared_mutex:   715 ms
                                  tbb::concurrent_hash_map:   843 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1027 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1458 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   837 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1380 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1748 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1558 ms
                           concurrent_foa, single threaded:  2105 ms
       concurrent_foa, tbb::spin_rw_mutex, single threaded:  2168 ms
        concurrent_foa, std::shared_mutex, single threaded:  2373 ms
                 tbb::concurrent_hash_map, single threaded:  4205 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1087 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   806 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   778 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   912 ms
                                            concurrent foa:   804 ms
                        concurrent foa, tbb::spin_rw_mutex:   773 ms
                         concurrent foa, std::shared_mutex:   891 ms
                                  tbb::concurrent_hash_map:  1477 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1144 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   901 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   875 ms
```
<!--vs-x86/main.cpp.txt-->
