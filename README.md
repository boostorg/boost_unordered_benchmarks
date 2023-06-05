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
* `clang-x86`: Clang 15, x86
* `vs-x86`: Visual Studio 2022, x86

## Summary results

### GCC 12, x64
<!--gcc-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34737 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21618 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10809 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11363 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10538 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 13218 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13481 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38873 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26576 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14689 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16239 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18831 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17749 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17355 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33203 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21649 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10535 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10425 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10109 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12876 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11780 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37431 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27801 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14567 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14497 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18313 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17852 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16618 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13786 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10505 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7054 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4791 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8363 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9960 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6770 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14123 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10902 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7435 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5457 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8320 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9394 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7098 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 32259 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25662 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11364 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10244 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15602 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13967 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11287 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 29948 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21254 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 13579 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11553 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14376 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 14122 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 12091 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29188 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20894 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14018 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12151 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25323 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14768 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12508 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1304 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   608 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   614 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   534 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   597 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   547 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   522 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35023 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21679 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11132 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11951 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13598 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12463 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12327 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36097 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24614 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13487 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14068 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18216 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17186 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16129 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34476 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21971 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11374 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11486 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 13231 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12480 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11382 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35338 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25550 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13582 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13976 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17671 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17042 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15951 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12756 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10163 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7303 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4910 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8040 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9674 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6562 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13995 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10225 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7438 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5529 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7661 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9673 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7442 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30662 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 24152 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11981 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10676 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13750 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15192 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12346 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31996 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24583 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 15153 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 13330 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16929 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 17040 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14588 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30865 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23826 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 15219 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13475 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27271 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17270 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14889 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1428 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1060 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   628 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   645 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   883 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   982 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   618 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 26353 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 19804 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10854 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9798 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11544 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 15640 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14472 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 26320 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 25940 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14429 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13380 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17079 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17857 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16472 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23583 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 19097 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9861 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  8490 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10970 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 14167 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12298 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23535 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 24935 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12894 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11430 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 15935 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16181 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 14083 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10427 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map:  8944 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  5382 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3222 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  6514 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  7689 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  4858 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13695 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 11810 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6143 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  3669 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  6377 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  8420 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5179 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14394 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 20897 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  8978 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  6611 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 11532 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 15950 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12726 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16824 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 19135 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12250 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10246 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13155 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 16563 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14357 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 15161 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 17396 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 11935 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  9225 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21964 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13742 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11811 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   827 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  1573 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1303 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   466 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   716 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  1699 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1511 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15673 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12807 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  7030 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6297 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7174 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8392 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7906 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20948 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16158 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8755 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8157 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10809 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9757 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9222 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14079 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10701 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6403 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5879 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6692 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8066 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7469 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20090 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15661 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8593 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7866 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10477 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9001 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  7984 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7725 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4705 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3059 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2088 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4062 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3638 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2554 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7787 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5068 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3106 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2158 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3663 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  3862 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3083 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15032 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12474 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  5078 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4352 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7690 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5955 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4859 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16870 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15241 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8399 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7689 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11000 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9253 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8404 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16279 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14404 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8424 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7620 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24303 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8749 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7897 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   440 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   616 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   331 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   273 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   271 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   315 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35491 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25152 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17349 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16637 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 27562 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18793 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18225 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39097 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28597 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 19100 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17997 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22064 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19693 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19504 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32523 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25007 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16592 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15721 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 26531 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18414 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 17554 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36710 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28616 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18373 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18226 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21395 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19167 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18960 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 16706 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12215 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11852 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9311 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13460 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14553 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12572 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 19966 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14289 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11348 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20012 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15840 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13843 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 38520 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 32926 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19081 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17404 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22317 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21772 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20253 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2152 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2029 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1424 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1337 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1968 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1581 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1477 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1890 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1883 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1353 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1218 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1502 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1457 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1358 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   103 ms,       932 bytes in 59 allocations
        boost::unordered_map:   112 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   171 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   131 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   158 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   158 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 15, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35254 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24806 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17482 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16951 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24977 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20828 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 21618 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35650 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24814 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17829 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17491 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21987 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18647 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19087 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32092 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23889 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17102 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16252 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 22205 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20696 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20181 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34070 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24570 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17711 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17191 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21869 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18200 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17680 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12146 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10923 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11819 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9501 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11220 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14001 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11873 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 18273 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14676 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11879 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15508 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15594 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13144 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 42675 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35310 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19943 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18094 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 26781 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 22311 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20794 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2214 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2156 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1505 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1403 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2036 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1965 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1869 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2017 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2051 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1420 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1317 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1711 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1689 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1606 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   165 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   135 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   141 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   189 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   175 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   116 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 24065 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 22939 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 11920 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 11482 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 23210 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 17335 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 16595 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24110 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 22808 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 11860 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11423 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16539 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14915 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15192 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23590 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 20813 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 10077 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map:  9085 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21466 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 16263 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 14733 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 22033 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 21838 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 10705 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  9644 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16608 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13779 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 12168 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11610 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map:  8876 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  5978 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  4188 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10439 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  9295 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  5698 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14729 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 15046 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map:  7596 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  5803 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15689 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  9496 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map:  7274 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 22676 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 25942 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 11494 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10555 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 17920 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 16862 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 14313 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1389 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  1544 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:   975 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:   867 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2141 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  1562 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1431 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1271 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1383 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:   836 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   742 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1103 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1060 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:   929 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   104 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   110 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    75 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    68 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:    95 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:    91 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:    86 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
