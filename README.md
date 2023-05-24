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
                  std::unordered_map: 35638 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22351 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11101 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11616 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10893 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 13713 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13607 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 41102 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28756 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16095 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16719 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20504 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19697 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18765 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33942 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 22192 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10949 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10575 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10344 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 13220 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12094 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39537 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29175 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15775 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15368 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19719 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18827 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17877 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13696 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10375 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7139 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4843 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8590 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9914 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6896 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14316 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11095 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7367 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5357 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8457 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9796 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7575 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 32263 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 26716 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11455 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10086 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15883 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13937 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11452 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34562 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23694 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 15596 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 13698 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16764 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16455 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14120 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33585 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 24173 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 16639 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 14374 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 30677 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17199 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14843 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1627 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   728 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   738 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   634 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   704 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   680 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   620 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35605 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22115 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11397 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11665 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13831 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12988 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12923 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36691 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25119 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14078 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14732 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19077 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18155 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17740 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33559 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21777 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11113 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10964 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12808 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12308 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11225 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34942 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25638 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13871 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13601 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17907 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17533 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16270 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12793 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10290 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7344 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  5062 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8275 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9718 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6532 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 15007 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10493 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7338 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5601 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7886 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 10013 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7593 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31278 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 24804 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 12188 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10525 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14090 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15377 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12673 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36992 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 28371 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 17554 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 15352 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 19856 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 19853 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 17056 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35530 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 27393 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 17872 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 15961 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 32517 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20068 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 17586 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1781 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1329 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1085 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   768 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1096 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:  1215 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   758 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34829 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 28408 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 13790 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12326 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 15525 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 20591 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 19608 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35648 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35210 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17581 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18402 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22176 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 22462 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20989 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31734 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 27195 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 13499 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11912 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 15615 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 19284 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 18488 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33294 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32479 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17829 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16327 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21940 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 23476 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19942 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 14073 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 11358 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7132 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  5323 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10422 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 10175 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6821 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 17698 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 14747 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7376 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5138 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8998 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 11312 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7388 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 20667 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 29522 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 12046 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9626 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 16763 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 22165 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 18639 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 26263 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 30412 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 21498 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 16351 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 18145 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 24842 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 30401 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23952 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 28120 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 17719 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 16421 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 32067 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17451 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 20884 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1691 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2748 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   733 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1520 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   829 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2449 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2739 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15749 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12796 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6591 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6445 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7216 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8389 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7933 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20957 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16154 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8391 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8157 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10768 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9876 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9247 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14154 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10678 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6206 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5789 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6713 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8245 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7415 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20104 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15722 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8434 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7807 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10466 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9030 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8112 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7712 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4738 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3209 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2123 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4035 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3670 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2592 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7728 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5134 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3207 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2223 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3669 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4006 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3074 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15114 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12513 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4842 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4023 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7732 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6016 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4885 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16802 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15243 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8527 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7646 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11020 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9222 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8453 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16294 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14315 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8396 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7638 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24328 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8685 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7904 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   472 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   604 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   346 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   275 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   271 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   316 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35140 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25733 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17438 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17635 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 27783 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 19850 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 19935 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 40391 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28732 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20417 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 20162 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22947 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20115 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20664 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32827 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25671 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17944 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 17099 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 26859 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 19868 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19054 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38495 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29576 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 19711 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 19229 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21966 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20696 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19865 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 16909 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12477 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 12352 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10114 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13865 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 15437 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 13171 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 20703 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15068 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11868 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20497 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 17562 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 15214 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 39107 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33559 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19859 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17744 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22958 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23020 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20869 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2487 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2388 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1740 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1632 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2413 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1923 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1802 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2216 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2252 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1640 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1518 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1805 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1773 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1669 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   128 ms,       932 bytes in 59 allocations
        boost::unordered_map:   138 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   172 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   147 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   206 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   191 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   198 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34296 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25681 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17928 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17367 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25010 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 21767 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 21770 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35922 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25708 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18657 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18405 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22896 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19647 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20425 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31892 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24434 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17843 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 18518 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24089 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 21436 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20903 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33881 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25129 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18408 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18064 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23165 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19251 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19491 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12407 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11257 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11952 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9608 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12187 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14779 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12739 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 18929 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14716 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 12534 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 16049 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16414 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 14466 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 43348 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35831 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 20606 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 19141 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 27418 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23908 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22307 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2675 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2615 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1813 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1674 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2494 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  2419 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  2292 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2247 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2478 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1733 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1595 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2067 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2058 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1942 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   135 ms,       932 bytes in 59 allocations
        boost::unordered_map:   210 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   165 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   174 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   233 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   218 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   145 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32614 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 32519 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 13758 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15645 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 29277 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 23509 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 23158 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31098 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 30435 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16246 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15373 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23680 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21462 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19754 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31710 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 28056 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 13652 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 11991 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28383 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 22438 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 22344 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30968 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 28414 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14480 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13647 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23622 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20226 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15803 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 15742 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 12115 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  6991 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  5841 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 15902 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 11022 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  8075 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 19863 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 21785 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 10555 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  8436 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20680 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 12712 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map:  8933 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31244 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 35006 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13382 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13644 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 28970 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 25086 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 22040 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2275 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2893 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1620 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1501 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2505 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2006 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1698 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1533 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2029 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1208 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1484 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1777 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1805 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1548 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   138 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   230 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    95 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    87 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   179 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   160 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   220 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
