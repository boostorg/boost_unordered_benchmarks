# Boost.Unordered aggregate benchmarks

## Benchmarks

Aggregated benchmarks simulating real-life scenarios, provided as part
of Boost.Unordered [source code](https://github.com/boostorg/unordered/tree/develop/benchmark).

## Detailed results
### Folder
* `gcc-x64`: GCC 12, x64
* `clang-x64`: Clang 15, x64
* `vs-x64`: Visual Studio 2022, x64
* `vs-x86`: Visual Studio 2022, x86
<!---
* `clang-arm64`: Clang 12 ARM64
* `gcc-x86`: GCC 12, x86
* `clang-x86`: Clang 12, x86
-->

## Summary results

### GCC 12, x64
<!--gcc-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36656 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22348 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11262 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12324 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10937 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 12726 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  9769 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14421 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14330 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 40330 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27320 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15328 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17326 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19365 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 19791 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 15088 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 19165 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17326 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33386 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21771 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10808 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10616 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10008 ms, 167772160 bytes in 2 allocations
                   indivi::flat_umap: 10531 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  8301 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 13397 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12081 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37543 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27663 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14490 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14385 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18495 ms, 167772160 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16609 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13270 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 18031 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16509 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13814 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10549 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6494 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4440 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8167 ms, 134217728 bytes in 2 allocations
           indivi::flat_umap:  5147 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  3993 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9290 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6508 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14566 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10949 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6987 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5309 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8070 ms, 201326592 bytes in 2 allocations
           indivi::flat_umap:  6754 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4611 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  8648 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6882 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 32776 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 26101 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11211 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10364 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15791 ms, 268435456 bytes in 2 allocations
           indivi::flat_umap: 13227 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  9601 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 14361 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11456 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 30772 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21944 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14352 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12193 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 15054 ms,  67108864 bytes in 2 allocations
                   indivi::flat_umap: 12721 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap: 12171 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14823 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 12699 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29911 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 21570 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14781 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12872 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25605 ms,  67108864 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 13155 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13006 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 15308 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 13342 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1317 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   725 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   653 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   542 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   599 ms,      4096 bytes in 2 allocations
           indivi::flat_umap:   589 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:   588 ms,         0 bytes in 0 allocations
         absl::node_hash_map:   571 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   525 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35160 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21346 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11097 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12162 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13298 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 12020 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  9654 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 12761 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12792 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35900 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24050 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13646 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14731 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17951 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16736 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13741 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 16941 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16208 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33169 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21311 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11506 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11653 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12604 ms, 167772160 bytes in 2 allocations
                   indivi::flat_umap: 10648 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  8544 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 12193 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11481 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34127 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24877 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13551 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13414 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17279 ms, 167772160 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15057 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 12721 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 16270 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15399 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12319 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10079 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6539 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4360 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8009 ms, 134217728 bytes in 2 allocations
           indivi::flat_umap:  5446 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  3933 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  8713 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5796 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14575 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10841 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7116 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5435 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8010 ms, 201326592 bytes in 2 allocations
           indivi::flat_umap:  7165 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4724 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9574 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7323 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29689 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 23576 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11376 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10360 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13276 ms, 268435456 bytes in 2 allocations
           indivi::flat_umap: 12851 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  9380 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 14214 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11662 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32548 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24441 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14232 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12535 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 17498 ms,  67108864 bytes in 2 allocations
                   indivi::flat_umap: 14872 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap: 13870 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16864 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14836 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31223 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23941 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 15705 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13585 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27533 ms,  67108864 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16023 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 15223 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17130 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 15086 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1481 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1079 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   687 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   582 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   896 ms,      4096 bytes in 2 allocations
           indivi::flat_umap:   801 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:   801 ms,         0 bytes in 0 allocations
         absl::node_hash_map:   923 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   540 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 26127 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 19654 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10842 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9788 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11485 ms, 279707224 bytes in 2 allocations
                   indivi::flat_umap: 10938 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  9374 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 15526 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14151 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 26142 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 25610 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14313 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13344 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16905 ms, 279707224 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15459 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13390 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17583 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16372 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23457 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 19018 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9857 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  8469 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11003 ms, 194667880 bytes in 2 allocations
                   indivi::flat_umap:  9765 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  8229 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14061 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12225 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23402 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 24692 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12824 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11313 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 15879 ms, 194667880 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 13854 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 11849 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 16054 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 13991 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10390 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map:  8977 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  5400 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3241 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  6399 ms, 130888368 bytes in 2 allocations
           indivi::flat_umap:  5965 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4735 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  7671 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  4820 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13619 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 11727 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6181 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  3675 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  6333 ms, 194667872 bytes in 2 allocations
           indivi::flat_umap:  7116 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  5398 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  8439 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5166 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14339 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 20839 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  9005 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  6556 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 11560 ms, 258447376 bytes in 2 allocations
           indivi::flat_umap:  9408 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  7270 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 15849 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12652 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16782 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 18661 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12161 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10034 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 12999 ms,  54572488 bytes in 2 allocations
                   indivi::flat_umap: 11902 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap: 11449 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16346 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14202 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 14938 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 17295 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 11799 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  9312 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22049 ms,  54572488 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 10929 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 10571 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 13541 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11679 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   820 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  1581 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1299 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   432 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   708 ms,      4304 bytes in 2 allocations
           indivi::flat_umap:   675 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:   674 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  1690 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1508 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->

<!---
### Clang 12, ARM64
<!~~clang-arm64/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 15645 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12872 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  7084 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6382 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7103 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8453 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7892 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21112 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16191 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8793 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8173 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10832 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9932 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9219 ms, 276824040 bytes in 1 allocations
```
<!~~clang-arm64/string.cpp.txt~~>

<!~~clang-arm64/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 14175 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10736 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6425 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5915 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6690 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8231 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7417 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20243 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15732 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8724 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7908 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10474 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9013 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8220 ms, 209715184 bytes in 1 allocations
```
<!~~clang-arm64/string_view.cpp.txt~~>

<!~~clang-arm64/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map:  7794 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4670 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3149 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2107 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4068 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3664 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2578 ms,  75497472 bytes in 1 allocations
```
<!~~clang-arm64/uint32.cpp.txt~~>

<!~~clang-arm64/uint64.cpp.txt~~>
```
uint64.cpp
          std::unordered_map:  7768 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  4964 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3252 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2207 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3766 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4100 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3125 ms, 142606328 bytes in 1 allocations
```
<!~~clang-arm64/uint64.cpp.txt~~>

<!~~clang-arm64/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 15123 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12471 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  5069 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4245 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7705 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6004 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4885 ms, 209715184 bytes in 1 allocations
```
<!~~clang-arm64/uuid.cpp.txt~~>

<!~~clang-arm64/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map: 17858 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15365 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8572 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7630 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11076 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9344 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8529 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16356 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14477 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8470 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7567 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24269 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8761 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7837 ms,  52428784 bytes in 1 allocations
```
<!~~clang-arm64/word_count.cpp.txt~~>

<!~~clang-arm64/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   936 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   609 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   329 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   273 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   315 ms,      4344 bytes in 1 allocations
```
<!~~clang-arm64/word_size.cpp.txt~~>

### GCC 12, x86
<!~~gcc-x86/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 34827 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24586 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 16971 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16445 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 26552 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18569 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18191 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38342 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28084 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18938 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18074 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22045 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19375 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19016 ms, 243269612 bytes in 1 allocations
```
<!~~gcc-x86/string.cpp.txt~~>

<!~~gcc-x86/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 32141 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25307 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17044 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16239 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 26205 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18110 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 17626 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36884 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28785 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18678 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17962 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21467 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18807 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18471 ms, 109051900 bytes in 1 allocations
```
<!~~gcc-x86/string_view.cpp.txt~~>

<!~~gcc-x86/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map: 16869 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12188 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11891 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9257 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13071 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14779 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12572 ms,  75497472 bytes in 1 allocations
```
<!~~gcc-x86/uint32.cpp.txt~~>

<!~~gcc-x86/uint64.cpp.txt~~>
```
uint64.cpp
        boost::unordered_map: 19166 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14500 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11150 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20215 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15919 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13316 ms, 142606328 bytes in 1 allocations
```
<!~~gcc-x86/uint64.cpp.txt~~>

<!~~gcc-x86/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 37872 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33326 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18879 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17182 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22155 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21590 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19883 ms, 209715184 bytes in 1 allocations
```
<!~~gcc-x86/uuid.cpp.txt~~>

<!~~gcc-x86/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map:  2057 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2019 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1430 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1330 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2014 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1560 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1453 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1835 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1866 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1340 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1247 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1510 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1418 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1373 ms,   6815740 bytes in 1 allocations
```
<!~~gcc-x86/word_count.cpp.txt~~>

<!~~gcc-x86/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   102 ms,       932 bytes in 59 allocations
        boost::unordered_map:   112 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   138 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   132 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   153 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   158 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   138 ms,      1152 bytes in 1 allocations
```
<!~~gcc-x86/word_size.cpp.txt~~>

### Clang 12, x86
<!~~clang-x86/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 34373 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24395 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17139 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16822 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24527 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20518 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 21221 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34689 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24222 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17513 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17608 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21955 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18340 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18858 ms, 243269612 bytes in 1 allocations
```
<!~~clang-x86/string.cpp.txt~~>

<!~~clang-x86/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 31242 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23505 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16831 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15692 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21522 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 19962 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19831 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32714 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23909 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17528 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16825 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21592 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18233 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17262 ms, 109051900 bytes in 1 allocations
```
<!~~clang-x86/string_view.cpp.txt~~>

<!~~clang-x86/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map: 12210 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10996 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11985 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9240 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11292 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14131 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11964 ms,  75497472 bytes in 1 allocations
```
<!~~clang-x86/uint32.cpp.txt~~>

<!~~clang-x86/uint64.cpp.txt~~>
```
uint64.cpp
        boost::unordered_map: 17945 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14253 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11838 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15481 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16307 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13413 ms, 142606328 bytes in 1 allocations
```
<!~~clang-x86/uint64.cpp.txt~~>

<!~~clang-x86/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 41739 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35563 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19968 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18250 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 25564 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21682 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20668 ms, 209715184 bytes in 1 allocations
```
<!~~clang-x86/uuid.cpp.txt~~>

<!~~clang-x86/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map:  2233 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2160 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1495 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1389 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2076 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1962 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1864 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2026 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2062 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1429 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1315 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1718 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1688 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1591 ms,   6815740 bytes in 1 allocations
```
<!~~clang-x86/word_count.cpp.txt~~>

<!~~clang-x86/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   169 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   135 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   140 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   189 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   175 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   116 ms,      1152 bytes in 1 allocations
```
<!~~clang-x86/word_size.cpp.txt~~>

### Visual Studio 2022, x86
<!~~vs-x86/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 24175 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 22969 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 11885 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 11512 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22860 ms, 215927716 bytes in 2 allocations
                   indivi::flat_umap: 23202 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 17328 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 16864 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24156 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 22869 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 11868 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11519 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16711 ms, 215927716 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16241 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 14941 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15213 ms, 243269620 bytes in 1 allocations
```
<!~~vs-x86/string.cpp.txt~~>

<!~~vs-x86/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 23457 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 20668 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map:  9947 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map:  9007 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21546 ms, 130888372 bytes in 2 allocations
                   indivi::flat_umap: 21456 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16462 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 14754 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 22081 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 21626 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 10612 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  9676 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16068 ms, 130888372 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 14719 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 13722 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 12225 ms, 109051908 bytes in 1 allocations
```
<!~~vs-x86/string_view.cpp.txt~~>

<!~~vs-x86/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map: 11628 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map:  8891 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  5932 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  4177 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10387 ms, 130888368 bytes in 2 allocations
           indivi::flat_umap:  9265 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9290 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  5745 ms,  75497480 bytes in 1 allocations
```
<!~~vs-x86/uint32.cpp.txt~~>

<!~~vs-x86/uint64.cpp.txt~~>
```
uint64.cpp
          std::unordered_map: 14771 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 15050 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map:  7577 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  5774 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15616 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  9675 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map:  7291 ms, 142606336 bytes in 1 allocations
```
<!~~vs-x86/uint64.cpp.txt~~>

<!~~vs-x86/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 22632 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 25876 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 11448 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10527 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 17872 ms, 258447376 bytes in 2 allocations
           indivi::flat_umap: 16867 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 16910 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 14312 ms, 209715192 bytes in 1 allocations
```
<!~~vs-x86/uuid.cpp.txt~~>

<!~~vs-x86/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map:  1418 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  1512 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:   977 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:   858 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2162 ms,   9793612 bytes in 2 allocations
                   indivi::flat_umap:  2078 ms,         0 bytes in 0 allocations
                 absl::node_hash_map:  1560 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1403 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1262 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1379 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:   835 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   741 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1108 ms,   9793612 bytes in 2 allocations
           indivi::flat_umap, FNV-1a:   876 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a:  1059 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:   925 ms,   6815748 bytes in 1 allocations
```
<!~~vs-x86/word_count.cpp.txt~~>

<!~~vs-x86/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   103 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   108 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    78 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    66 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:    93 ms,      1528 bytes in 2 allocations
           indivi::flat_umap:   166 ms,         0 bytes in 0 allocations
         absl::node_hash_map:    89 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:    85 ms,      1160 bytes in 1 allocations
```
<!~~vs-x86/word_size.cpp.txt~~>
-->