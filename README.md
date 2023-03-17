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
                boost::unordered_flat_map, single threaded:  7773 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 11716 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  9259 ms
                                     cfoa, single threaded: 12581 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12395 ms
                  cfoa, std::shared_mutex, single threaded: 14163 ms
                    foa::concurrent_table, single threaded: 12209 ms
                 tbb::concurrent_hash_map, single threaded: 21898 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6461 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 13375 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7270 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  5978 ms
                                                      cfoa:  4829 ms
                                  cfoa, tbb::spin_rw_mutex:  4745 ms
                                   cfoa, std::shared_mutex:  4746 ms
                                     foa::concurrent_table:  4806 ms
                                  tbb::concurrent_hash_map:  7403 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7865 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 16615 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  9480 ms
```
<!--gcc-x64/main.cpp.txt-->

### Clang 12, x64
<!--clang-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  9284 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 12948 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 10302 ms
                                     cfoa, single threaded: 12681 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 12681 ms
                  cfoa, std::shared_mutex, single threaded: 14523 ms
                    foa::concurrent_table, single threaded: 12651 ms
                 tbb::concurrent_hash_map, single threaded: 23311 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  6218 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 21269 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  7337 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  6487 ms
                                                      cfoa:  4996 ms
                                  cfoa, tbb::spin_rw_mutex:  5175 ms
                                   cfoa, std::shared_mutex:  5154 ms
                                     foa::concurrent_table:  5212 ms
                                  tbb::concurrent_hash_map:  7555 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  7997 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 20152 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11416 ms
```
<!--clang-x64/main.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded: 20972 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 24452 ms
   boost::unordered_flat_map, single threaded, rw_spinlock: 23423 ms
                                     cfoa, single threaded: 23934 ms
                 cfoa, tbb::spin_rw_mutex, single threaded: 25285 ms
                  cfoa, std::shared_mutex, single threaded: 25515 ms
                    foa::concurrent_table, single threaded: 24789 ms
                 tbb::concurrent_hash_map, single threaded: 42790 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>: 10849 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  9107 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  9881 ms
    boost::unordered_flat_map, sharded isolated, prehashed: 10492 ms
                                                      cfoa:  8378 ms
                                  cfoa, tbb::spin_rw_mutex:  8802 ms
                                   cfoa, std::shared_mutex:  9085 ms
                                     foa::concurrent_table:  8872 ms
                                  tbb::concurrent_hash_map: 14871 ms
                   gtl::parallel_flat_hash_map<std::mutex>: 12516 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 10797 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>: 11855 ms
```
<!--vs-x64/main.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/main.cpp.txt-->
```
main.cpp
Number of threads: 8
                boost::unordered_flat_map, single threaded:  5752 ms
  boost::unordered_flat_map, single threaded, shared_mutex: 10081 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  6111 ms
                                     cfoa, single threaded:  7536 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  7562 ms
                  cfoa, std::shared_mutex, single threaded: 11658 ms
                    foa::concurrent_table, single threaded:  7429 ms
                 tbb::concurrent_hash_map, single threaded: 17511 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  5377 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>: 11468 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:  3429 ms
    boost::unordered_flat_map, sharded isolated, prehashed:  4511 ms
                                                      cfoa:  3624 ms
                                  cfoa, tbb::spin_rw_mutex:  3694 ms
                                   cfoa, std::shared_mutex:  4805 ms
                                     foa::concurrent_table:  3785 ms
                                  tbb::concurrent_hash_map:  5657 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  6322 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>: 11518 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:  3758 ms
```
<!--clang-arm64/main.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1046 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1476 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1127 ms
                                     cfoa, single threaded:  1517 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1536 ms
                  cfoa, std::shared_mutex, single threaded:  1804 ms
                    foa::concurrent_table, single threaded:  1497 ms
                 tbb::concurrent_hash_map, single threaded:  2225 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   769 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1464 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   784 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   769 ms
                                                      cfoa:   874 ms
                                  cfoa, tbb::spin_rw_mutex:   869 ms
                                   cfoa, std::shared_mutex:   814 ms
                                     foa::concurrent_table:   811 ms
                                  tbb::concurrent_hash_map:   886 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1101 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  2314 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   915 ms
```
<!--gcc-x86/main.cpp.txt-->

### Clang 12, x86
<!--clang-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 16
                boost::unordered_flat_map, single threaded:  1145 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1578 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1226 ms
                                     cfoa, single threaded:  1476 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1477 ms
                  cfoa, std::shared_mutex, single threaded:  1780 ms
                    foa::concurrent_table, single threaded:  1451 ms
                 tbb::concurrent_hash_map, single threaded:  2383 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:   772 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:  1396 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   624 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   783 ms
                                                      cfoa:   759 ms
                                  cfoa, tbb::spin_rw_mutex:   867 ms
                                   cfoa, std::shared_mutex:   769 ms
                                     foa::concurrent_table:   846 ms
                                  tbb::concurrent_hash_map:   885 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1000 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:  1303 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   872 ms
```
<!--clang-x86/main.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/main.cpp.txt-->
```
main.cpp
Number of threads: 4
                boost::unordered_flat_map, single threaded:  1284 ms
  boost::unordered_flat_map, single threaded, shared_mutex:  1662 ms
   boost::unordered_flat_map, single threaded, rw_spinlock:  1480 ms
                                     cfoa, single threaded:  1969 ms
                 cfoa, tbb::spin_rw_mutex, single threaded:  1980 ms
                  cfoa, std::shared_mutex, single threaded:  2222 ms
                    foa::concurrent_table, single threaded:  1889 ms
                 tbb::concurrent_hash_map, single threaded:  3879 ms
       boost::unordered_flat_map, sharded_prehashed<mutex>:  1000 ms
boost::unordered_flat_map, sharded_prehashed<shared_mutex>:   782 ms
 boost::unordered_flat_map, sharded_prehashed<rw_spinlock>:   629 ms
    boost::unordered_flat_map, sharded isolated, prehashed:   812 ms
                                                      cfoa:   807 ms
                                  cfoa, tbb::spin_rw_mutex:   749 ms
                                   cfoa, std::shared_mutex:   847 ms
                                     foa::concurrent_table:   792 ms
                                  tbb::concurrent_hash_map:  1364 ms
                   gtl::parallel_flat_hash_map<std::mutex>:  1145 ms
            gtl::parallel_flat_hash_map<std::shared_mutex>:   902 ms
                  gtl::parallel_flat_hash_map<rw_spinlock>:   890 ms
```
<!--vs-x86/main.cpp.txt-->
