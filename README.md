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
                  std::unordered_map: 31294 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 18928 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9853 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9824 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9247 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12071 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11757 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34893 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25008 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13944 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14379 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17565 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17220 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16215 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30179 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 18994 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9841 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9369 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  8823 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11757 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10724 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33524 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26279 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13874 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13450 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16991 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16856 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15725 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10587 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9174 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6504 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4430 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7394 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8230 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5612 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11465 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9594 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6597 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4783 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7292 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8490 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6371 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27432 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22999 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10477 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8989 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13833 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12827 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10865 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28298 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19976 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12952 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11096 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14099 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13425 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11515 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27713 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20153 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13543 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11744 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24453 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13932 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11960 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1300 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   689 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   605 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   542 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   580 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   548 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   500 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32049 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21229 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10578 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10663 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11542 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14227 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14052 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34156 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23656 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12157 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12177 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16318 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16728 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15454 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34331 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23628 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11685 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11728 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12456 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15408 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 15025 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34847 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26734 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13340 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13238 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17608 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18024 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16650 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11136 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9215 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6412 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4326 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7088 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8480 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5733 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12856 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9557 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6573 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4938 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7011 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8859 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6701 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29684 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25319 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10465 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9039 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14097 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14352 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11662 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31217 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23245 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14501 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12734 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16471 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16266 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13891 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28386 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22677 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14285 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12656 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26513 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16487 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14303 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1432 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1016 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   673 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   653 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   858 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   969 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   622 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36498 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 31678 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 20456 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 20706 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17112 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28729 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 29333 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36248 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37222 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23482 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23149 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22730 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28954 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30458 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33555 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 31411 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 20186 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 18335 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16072 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 28352 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 26983 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33182 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37053 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23123 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 20853 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21518 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28639 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 26749 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20103 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14201 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 14585 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map: 11209 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12418 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 16525 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12254 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24556 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18070 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 14604 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 12348 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11867 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 17921 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14306 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27865 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 38559 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 17545 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 14904 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18541 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 28213 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26224 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35727 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 41117 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 31508 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 25405 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26754 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 42231 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35183 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32231 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 37808 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 27981 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 22356 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42199 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32317 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 25716 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1221 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2543 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1772 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1610 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1103 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2611 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2155 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15812 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12855 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6605 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6425 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7134 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8386 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7894 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21092 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16147 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8343 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8138 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10755 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9795 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9197 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14083 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10657 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6174 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5750 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6694 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8300 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7380 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20069 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15653 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8433 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7831 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10472 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8992 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8061 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7733 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4760 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3190 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2121 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  3991 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3656 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2576 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7770 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5109 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3210 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2243 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3707 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4024 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3061 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15103 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12395 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4911 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4024 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7722 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5947 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4924 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16764 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15253 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8587 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7610 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11045 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9258 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8523 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16208 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14389 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8429 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7638 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24360 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8750 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7924 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   430 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   604 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   345 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   274 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   268 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   313 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30650 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22457 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15701 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15286 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21798 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16968 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16858 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34440 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25358 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17603 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17191 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19545 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17891 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17723 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28289 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22745 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15374 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14697 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24422 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16849 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16105 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32232 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25841 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17250 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16762 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19223 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17538 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17186 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10865 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11188 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11306 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8849 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12026 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13753 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11678 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17641 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 12977 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10317 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15260 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14511 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12816 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33619 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30711 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 17748 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16150 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20495 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20186 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18713 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1968 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1990 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1436 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1318 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1916 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1575 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1484 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1808 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1856 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1340 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1249 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1516 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1457 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1365 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   146 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   127 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   136 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32266 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23903 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17357 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17513 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20194 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20537 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20600 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32373 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25487 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16255 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15979 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20304 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19042 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18690 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33547 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23778 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16998 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16147 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21391 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 21913 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 21330 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33527 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24194 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17761 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17020 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21300 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20078 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19893 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10924 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9943 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 10885 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8705 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10244 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13095 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11313 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15873 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13234 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10756 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18735 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14146 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12719 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 45089 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 37450 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 20098 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18225 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 24008 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 24924 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 23901 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2208 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2133 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1457 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1344 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2027 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1950 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1858 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1839 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1990 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1377 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1277 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1676 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1656 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1576 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   137 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36349 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35911 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 22934 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 24034 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31498 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 30675 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 31887 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35402 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35381 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 21711 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22634 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23478 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26811 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28616 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32013 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32487 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 21093 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 18779 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28751 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 29539 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 27165 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31558 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32859 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 21117 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 19262 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22086 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25981 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24009 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19119 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13318 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 13627 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10439 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16824 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17698 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13115 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23204 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24912 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15407 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13338 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19820 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19981 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 17818 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34249 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40543 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21448 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 21009 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 30837 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 37461 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 37095 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2669 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2917 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1968 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1610 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3709 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2706 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2371 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2526 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2692 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1626 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1333 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1987 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2141 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1794 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   155 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   216 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   119 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   108 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   150 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   170 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
