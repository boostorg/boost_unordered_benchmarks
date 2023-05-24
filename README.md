# Boost.Unordered aggregate benchmarks

## Benchmarks

Aggregated benchmarks simulating real-life scenarios, provided as part
of Boost.Unordered [source code](https://github.com/boostorg/unordered/tree/develop/benchmark).

## Detailed results
### Folder
* `gcc-x64`: GCC 12, x64
* `clang-x64`: Clang 15, x64
* `vs-x64`: Visual Studio 2022, x64
* `clang-arm64`: Clang 12 ARM64
* `gcc-x86`: GCC 12, x86
* `clang-x86`: Clang 12, x86
* `vs-x86`: Visual Studio 2022, x86

## Summary results

### GCC 12, x64
<!--gcc-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35240 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21960 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11292 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11733 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10852 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 13487 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13093 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39767 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28471 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16121 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16793 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20024 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19187 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18593 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33522 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21089 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10907 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10403 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9862 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12763 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11923 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36954 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29014 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15324 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15105 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18899 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18547 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17584 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11898 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10305 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7033 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4812 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8393 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9118 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6350 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13242 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11039 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7298 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5475 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8461 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9860 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7558 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31239 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 26751 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11884 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10195 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15932 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15101 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12353 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33886 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23887 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 15600 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 13683 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 17042 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16357 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14118 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32936 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23861 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 16406 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 14432 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 31171 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17030 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14528 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1627 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   833 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   730 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   661 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   765 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   677 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   606 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36006 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 23510 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 12140 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12504 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13788 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 16112 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 16120 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39752 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27040 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14107 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14725 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19462 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19677 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18312 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34519 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23615 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11968 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11578 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12525 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15713 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14814 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38142 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28048 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14106 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13631 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18810 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19115 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17848 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12719 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10381 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7055 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4813 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8130 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9548 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6557 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14780 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10756 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7337 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5441 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7939 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9967 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7342 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34721 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 28384 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11638 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10321 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 16174 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15807 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 13145 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 37563 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 28365 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 17896 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 15626 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 19945 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 19988 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 17221 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36298 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 27618 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 17587 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 15730 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 31176 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20331 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 17514 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1810 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1292 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1064 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   808 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1077 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:  1191 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   769 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34505 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 27602 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 15021 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 13239 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 14857 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 20293 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 20440 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33850 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34068 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18767 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17633 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22777 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25026 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 23096 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31145 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 24791 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 13411 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11732 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 15068 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 19301 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 16888 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31638 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34130 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18487 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16374 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22807 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 22184 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18990 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 14671 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 12077 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7438 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4146 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  9656 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 11054 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6457 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 17939 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 15235 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7839 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4754 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8778 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 10911 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7177 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 19680 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 31010 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 12392 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9123 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14837 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 20650 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 16966 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 25712 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 29684 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 20731 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 18234 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 19824 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 24175 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 23043 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 25672 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 25203 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 18083 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 14343 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 32803 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20099 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 18379 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1986 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  3004 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  2403 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  2019 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1242 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2240 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2557 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15642 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12817 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6603 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6430 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7176 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8343 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7823 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20942 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16086 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8417 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8154 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10825 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9812 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9203 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14120 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10612 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6178 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5755 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6697 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8312 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7424 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20092 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15674 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8351 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7896 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10450 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9047 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8120 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7726 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4724 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3154 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2065 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  3974 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3630 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2564 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7788 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5109 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3260 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2204 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3708 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4080 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3190 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15099 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12494 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4849 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4030 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7683 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5987 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4888 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16764 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15271 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8544 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7611 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11041 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9206 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8466 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16227 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14387 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8430 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7622 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24289 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8672 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7930 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   402 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   604 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   347 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   274 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   312 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34439 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 26308 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17973 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17392 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24015 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 19392 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 19358 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39002 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29188 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20253 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 20054 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22734 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20404 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20392 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31964 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 26157 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17769 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16629 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 27350 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18858 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 18580 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36504 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29323 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 19856 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 19341 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21844 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20028 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19232 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12266 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12700 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 12658 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9546 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13747 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 15756 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 13027 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 20307 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14700 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11600 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19980 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16856 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 14672 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 38454 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34046 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19936 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18271 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22916 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 22377 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 21163 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2442 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2438 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1777 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1612 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2275 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1935 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1805 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2230 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2267 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1649 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1541 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1829 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1798 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1670 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   134 ms,       932 bytes in 59 allocations
        boost::unordered_map:   133 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   169 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   153 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   204 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   191 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   177 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36008 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25849 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 18462 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 19395 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22287 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22667 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 23654 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38904 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27696 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17975 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17951 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22576 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20854 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20955 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35597 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24649 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17721 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16803 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23139 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 22534 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 22440 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38433 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25201 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18846 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17844 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21923 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21339 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20758 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12522 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11371 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 12470 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9988 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11803 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 15088 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12848 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17916 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14940 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11824 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20614 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 17232 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 14464 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 48818 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 38314 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21040 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18919 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 24592 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 26056 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 24923 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2644 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2610 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1776 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1645 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2527 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  2394 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  2282 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2400 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2419 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1711 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1585 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2065 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2049 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1947 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   131 ms,       932 bytes in 59 allocations
        boost::unordered_map:   197 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   167 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   153 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   229 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   231 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   158 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34629 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 31039 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 18065 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15557 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 35974 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 25194 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 21296 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31778 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32772 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16656 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15240 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23028 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21855 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20613 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30875 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 27852 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 14094 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 12430 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29132 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 22527 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 21016 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29071 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 30593 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13300 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13011 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22384 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18746 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18841 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 16223 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 11975 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  7462 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  5517 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16441 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 11725 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  7946 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 19745 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 20205 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 10359 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  7877 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20799 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 13902 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 10480 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31437 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 34844 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14932 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 14853 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 28266 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 24770 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 22334 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2402 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2566 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1584 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1416 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  4052 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2911 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2038 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2134 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2311 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1094 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   839 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1623 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1400 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1739 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   126 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    95 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   109 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   140 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   198 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   214 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
