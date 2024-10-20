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
                  std::unordered_map: 34657 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21420 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10977 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11121 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10410 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 10945 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 13302 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13054 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38671 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26592 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14564 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15668 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18977 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 18105 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 18491 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17730 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32838 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21586 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10392 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10237 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10023 ms, 167772160 bytes in 2 allocations
                   indivi::flat_umap: 10197 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 12818 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11650 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37377 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27270 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14309 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14143 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18119 ms, 167772160 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16520 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17856 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16472 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13366 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10307 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6817 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4595 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8264 ms, 134217728 bytes in 2 allocations
           indivi::flat_umap:  6123 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9628 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6701 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13823 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10707 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7011 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5443 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7988 ms, 201326592 bytes in 2 allocations
           indivi::flat_umap:  7410 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9309 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7148 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30889 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25097 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10888 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9652 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14853 ms, 268435456 bytes in 2 allocations
           indivi::flat_umap: 12669 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 13873 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10693 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 29736 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21111 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 13647 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11576 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14366 ms,  67108864 bytes in 2 allocations
                   indivi::flat_umap: 12081 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14228 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 12103 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29253 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20829 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14099 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12118 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25029 ms,  67108864 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 12692 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 14776 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12589 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1310 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   719 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   628 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   529 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   583 ms,      4096 bytes in 2 allocations
           indivi::flat_umap:   625 ms,         0 bytes in 0 allocations
         absl::node_hash_map:   566 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   506 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35012 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21411 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11038 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11580 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12630 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 11600 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 12380 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12105 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35928 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24138 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13560 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14601 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17530 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16570 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17401 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16566 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34497 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21783 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11245 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11387 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 13378 ms, 167772160 bytes in 2 allocations
                   indivi::flat_umap: 10793 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 12457 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11349 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35358 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25200 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13677 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13677 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17538 ms, 167772160 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15947 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17054 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15765 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12263 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9682 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6882 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4566 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8075 ms, 134217728 bytes in 2 allocations
           indivi::flat_umap:  5969 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9152 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6176 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13907 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10045 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7181 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5454 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7495 ms, 201326592 bytes in 2 allocations
           indivi::flat_umap:  7609 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9635 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7416 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29323 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 23471 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11499 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10052 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13065 ms, 268435456 bytes in 2 allocations
           indivi::flat_umap: 12816 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 14772 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12090 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31996 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24403 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14969 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 13165 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16857 ms,  67108864 bytes in 2 allocations
                   indivi::flat_umap: 15001 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16865 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14480 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30988 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23473 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 15249 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13331 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 28366 ms,  67108864 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15739 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17087 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14819 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1432 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1048 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   633 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   626 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   869 ms,      4096 bytes in 2 allocations
           indivi::flat_umap:   925 ms,         0 bytes in 0 allocations
         absl::node_hash_map:   980 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   617 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 26264 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 19753 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10900 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9875 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11517 ms, 279707224 bytes in 2 allocations
                   indivi::flat_umap: 11047 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 15518 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14463 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 26343 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 25774 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14437 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13386 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16916 ms, 279707224 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15527 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17883 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16513 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23453 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 19040 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9898 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  8470 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11003 ms, 194667880 bytes in 2 allocations
                   indivi::flat_umap:  9824 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14255 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12256 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23597 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 24887 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12960 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11329 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 15966 ms, 194667880 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 13962 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 16248 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 14080 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10415 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map:  8983 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  5390 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3241 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  6425 ms, 130888368 bytes in 2 allocations
           indivi::flat_umap:  6482 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  7712 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  4841 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13701 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 11705 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6200 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  3683 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  6342 ms, 194667872 bytes in 2 allocations
           indivi::flat_umap:  7550 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  8542 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5298 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14438 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 20946 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  9050 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  6609 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 11545 ms, 258447376 bytes in 2 allocations
           indivi::flat_umap:  9676 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 15993 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12716 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16853 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 18819 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12242 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10112 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13130 ms,  54572488 bytes in 2 allocations
                   indivi::flat_umap: 12112 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16618 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14362 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 15074 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 17438 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 11962 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  9380 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21911 ms,  54572488 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 11060 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 13672 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11747 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   825 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  1584 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1297 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   432 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   716 ms,      4304 bytes in 2 allocations
           indivi::flat_umap:   703 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  1690 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1507 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
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
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
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
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
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
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
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
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
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
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
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
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
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
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
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
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
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
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
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
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 19166 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14500 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11150 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20215 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15919 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13316 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
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
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
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
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
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
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
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
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
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
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
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
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17945 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14253 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11838 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15481 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16307 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13413 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
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
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
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
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
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
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/string.cpp.txt-->
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
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
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
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
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
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
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
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
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
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
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
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
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
<!--vs-x86/word_size.cpp.txt-->
