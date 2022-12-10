# Boost.Unordered aggregate benchmarks

## Benchmarks

Aggregated benchmarks simulating real-life scenarios, provided as part
of Boost.Unordered [source code](https://github.com/boostorg/unordered/tree/develop/benchmark).

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
<!--gcc-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31518 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22851 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12301 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9389 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12187 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11820 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35155 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25285 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14005 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17594 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17222 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16198 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30206 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23278 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11627 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9214 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11790 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10736 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33593 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26254 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13141 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17002 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16969 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15805 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10672 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9278 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4484 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4486 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4568 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4314 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4458 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7420 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8329 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5598 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 11457 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map:  9589 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4578 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4880 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4905 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4762 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4887 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7298 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  8477 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  5860 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 27473 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 22896 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9079 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9076 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9096 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8830 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8819 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 13815 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 12809 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 10772 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28289 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21278 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12150 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14028 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13497 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11536 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27742 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20300 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11755 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25846 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13943 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11959 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1293 ms,      3728 bytes in 114 allocations
            boost::unordered_map:   690 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   803 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   602 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   598 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   567 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   561 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   582 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   596 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   507 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36767 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 26973 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 14120 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12809 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 15688 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 15381 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37722 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25636 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13913 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18029 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18316 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17295 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30991 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24898 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11603 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11264 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14068 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13175 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31505 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24415 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11619 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16193 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16674 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15323 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 11146 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9231 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4449 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4456 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4532 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4337 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4462 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7184 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8551 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5796 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 13942 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map: 10545 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  5298 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  5726 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  5780 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  5571 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  5694 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7691 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  9648 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  6892 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 33588 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 28102 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 10539 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10525 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10516 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 10322 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10327 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 15561 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 15668 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 12694 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31295 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23506 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12515 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16539 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16397 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13965 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28521 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22704 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12747 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26462 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16511 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14329 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1452 ms,      3728 bytes in 114 allocations
            boost::unordered_map:  1009 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   953 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   702 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   705 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   673 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   714 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   873 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   976 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   654 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38730 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38638 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23610 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 18459 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30368 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31009 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38102 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38807 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24207 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24128 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30978 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31163 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35175 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 38036 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21033 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16563 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30013 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29011 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34971 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38645 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21804 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23005 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30821 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28674 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 21016 ms, 278138072 bytes in 5996682 allocations
            boost::unordered_map: 14928 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 11035 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11587 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8766 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11397 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 11540 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12921 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 17186 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map: 12605 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 24986 ms, 326217760 bytes in 6000002 allocations
            boost::unordered_map: 18985 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12398 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 12993 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11235 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 13351 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 12786 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 11781 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 18320 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map: 14970 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 29408 ms, 374217768 bytes in 6000002 allocations
            boost::unordered_map: 40386 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 15682 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 15487 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 15440 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 15414 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 15697 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 20155 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 29546 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 26161 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36864 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42815 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26229 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28474 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 42831 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36201 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34003 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 40124 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23189 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44351 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33950 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27059 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1286 ms,     11840 bytes in 115 allocations
            boost::unordered_map:  2567 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  1738 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1697 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1695 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1681 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1681 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1144 ms,      4304 bytes in 2 allocations
             absl::node_hash_map:  2614 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:  2297 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15818 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14294 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7155 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7183 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8244 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7939 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21197 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16137 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8174 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10828 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9307 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8758 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14135 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13486 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6400 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6618 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8205 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7501 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20075 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15665 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7840 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10501 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8951 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8024 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map:  8592 ms, 196600184 bytes in 5996681 allocations
            boost::unordered_map:  5066 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  2535 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2158 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2227 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2291 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2185 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  4474 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  4489 ms, 123470912 bytes in 5996681 allocations
             absl::flat_hash_map:  3403 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map:  7816 ms, 244679864 bytes in 6000001 allocations
            boost::unordered_map:  4986 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  2095 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2199 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2193 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2242 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2275 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  3706 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  3974 ms, 171497472 bytes in 6000001 allocations
             absl::flat_hash_map:  3138 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 15100 ms, 292679864 bytes in 6000001 allocations
            boost::unordered_map: 12485 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4115 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4092 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4224 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4048 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4118 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map:  7627 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map:  5920 ms, 219497472 bytes in 6000001 allocations
             absl::flat_hash_map:  4929 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 21764 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 21991 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 15220 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 23142 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 29871 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 24396 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 45876 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 34266 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 19837 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 37705 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25603 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 24228 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  2417 ms,      5192 bytes in 114 allocations
            boost::unordered_map:  2291 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  2319 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1351 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1153 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1112 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1108 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1279 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:  1201 ms,      4112 bytes in 114 allocations
             absl::flat_hash_map:  2868 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30719 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22688 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15498 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25092 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17068 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16882 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34371 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25443 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17312 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19654 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17835 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17790 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28327 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22691 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15183 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24433 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17017 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16367 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32218 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26023 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16492 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19285 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17572 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16961 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10887 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map: 11213 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8625 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8561 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8575 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8725 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8653 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12126 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13829 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11672 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 17858 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 10842 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10469 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10450 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 10548 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10445 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 15050 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 15165 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 12851 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 33751 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 30837 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16369 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16258 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16381 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16336 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16242 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 20627 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 20257 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 18713 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1972 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1980 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1834 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1582 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1479 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1799 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1862 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1230 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1498 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1458 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1363 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   105 ms,       932 bytes in 59 allocations
            boost::unordered_map:   111 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   136 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   125 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   127 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   141 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32325 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22711 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16786 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20065 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20596 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20712 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32445 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25415 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15943 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20320 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19076 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18710 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30279 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22727 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15141 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19392 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20354 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19988 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30308 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22229 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15461 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19371 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18698 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18220 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10943 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map:  9978 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8732 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8588 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8712 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8898 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8808 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 10304 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13129 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11317 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 15980 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 11235 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10934 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10931 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 10949 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10787 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 18876 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 13772 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 12000 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 40917 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 34749 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16844 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16925 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16824 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16795 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16788 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 22208 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 23213 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 22024 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2208 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2057 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1358 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2033 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1963 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1859 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1819 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1977 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1277 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1671 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1589 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   107 ms,       932 bytes in 59 allocations
            boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   128 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   128 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   128 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   120 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   127 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   183 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38231 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36922 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 24140 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 32199 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 33169 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34514 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36754 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36698 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24026 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24308 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28962 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31077 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34248 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 34819 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19840 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29976 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31091 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28973 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32831 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34130 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19450 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22595 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26955 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24795 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 19707 ms, 163055760 bytes in 5996682 allocations
            boost::unordered_map: 13808 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 10135 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11830 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11577 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11675 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10744 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 17053 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 18274 ms,  89916492 bytes in 5996681 allocations
             absl::flat_hash_map: 13789 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 24627 ms, 211108888 bytes in 6000002 allocations
            boost::unordered_map: 26122 ms, 172311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12639 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 14746 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 14530 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 14631 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 13829 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 21604 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 21721 ms, 137943052 bytes in 6000001 allocations
             absl::flat_hash_map: 18473 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 35984 ms, 259108896 bytes in 6000002 allocations
            boost::unordered_map: 42924 ms, 220311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 22073 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 21682 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 22307 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 22367 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 21762 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 32960 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 40617 ms, 185943052 bytes in 6000001 allocations
             absl::flat_hash_map: 41143 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2718 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3024 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1626 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3917 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  3013 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2567 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2737 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2852 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1422 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2109 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2186 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1836 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   167 ms,      1456 bytes in 60 allocations
            boost::unordered_map:   231 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   114 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   113 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   114 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   106 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   116 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   158 ms,      1528 bytes in 2 allocations
             absl::node_hash_map:   168 ms,      1116 bytes in 59 allocations
             absl::flat_hash_map:   155 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
