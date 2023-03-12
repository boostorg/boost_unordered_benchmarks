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
                  std::unordered_map: 31301 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 19565 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9806 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9745 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9272 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12122 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11791 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35023 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24835 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13906 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14325 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17589 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17207 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16121 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30166 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 19336 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9773 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9313 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  8804 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11730 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10756 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33606 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26206 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13887 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13339 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16984 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16923 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15703 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10553 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9178 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6195 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4191 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7391 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8219 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5618 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11373 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9549 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6375 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4712 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7277 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8453 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6390 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27148 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22919 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10334 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8957 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13827 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12817 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10797 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28263 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19806 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12741 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10763 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14039 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13371 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11447 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27507 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20014 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13456 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11689 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25232 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13939 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11832 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1301 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   687 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   617 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   545 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   577 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   557 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   500 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32078 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21242 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10553 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10536 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11561 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14208 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14017 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34088 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23420 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12200 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12237 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16425 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16682 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15467 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30949 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21455 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10645 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10249 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11238 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14039 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13142 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31488 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24508 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12243 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11806 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16231 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16539 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15271 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11251 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9265 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6282 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4247 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7247 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8549 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5787 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12871 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9574 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6502 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4834 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7028 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8727 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6601 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 32887 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 27732 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11344 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10174 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15491 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15596 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12485 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31307 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23219 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14433 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12583 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16404 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16270 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13851 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28453 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22677 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14268 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12645 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25792 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16157 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14157 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1433 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1010 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   677 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   628 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   872 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   967 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   625 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38448 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 32474 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 21123 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 21600 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 16570 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28859 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 29501 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36955 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37127 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23167 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23526 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22734 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28575 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30595 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33130 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 31712 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 20118 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 17941 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16804 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 28264 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 26816 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33002 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37484 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23262 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 21330 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21806 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28440 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 27250 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19742 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14760 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 14522 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map: 10967 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12269 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 16678 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12216 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24413 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18020 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 14553 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 12406 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11468 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 17599 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 13825 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27490 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 39502 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 17495 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 14685 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18448 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 27744 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 24352 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35167 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 40305 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 31023 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 24343 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26453 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 40482 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 34381 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32100 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 37521 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 27756 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 22465 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42026 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32432 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 26533 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1221 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2503 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  2020 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1591 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1071 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2436 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2105 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15711 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12872 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6865 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6328 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7131 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8441 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7947 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21137 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16167 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8393 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8189 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10766 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9845 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9232 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14141 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10673 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6263 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5792 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6736 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8314 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7449 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20192 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15729 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8399 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7891 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10516 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8976 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8144 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7736 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4742 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3128 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2084 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4082 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3651 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2560 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7769 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5060 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3173 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2223 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3701 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4083 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3115 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15100 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12464 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4867 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4099 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7665 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5982 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4903 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16885 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15263 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8521 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7692 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10993 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9329 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8473 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16331 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14484 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8434 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7646 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24294 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8771 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7912 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   448 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   619 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   351 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   276 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   395 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   314 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30650 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22455 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15617 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15338 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21811 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16987 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16821 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34417 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25347 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17672 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17250 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19727 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17867 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17693 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28279 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22758 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15447 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14704 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23626 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16904 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16152 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32128 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25943 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17267 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16780 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19293 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17601 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17119 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10948 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11254 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11358 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8947 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12093 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13845 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11724 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17669 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 12973 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10384 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 14950 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14690 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12883 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33758 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30871 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 17793 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16349 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20625 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20356 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18754 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1958 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1979 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1429 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1337 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1904 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1574 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1479 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1806 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1833 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1330 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1250 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1518 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1448 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1364 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   148 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   143 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   162 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   134 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32199 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23832 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17274 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17425 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 19876 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20493 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20692 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32270 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25390 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16133 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15984 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20176 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18969 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18675 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30231 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21723 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15619 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14770 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19360 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20247 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19614 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30239 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22245 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16352 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15667 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19343 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18628 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18248 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10931 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9971 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 10887 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8778 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10277 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13122 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11242 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15928 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13277 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10811 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18867 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14416 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12582 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40877 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34782 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18460 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16750 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22176 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23044 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22074 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2194 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2123 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1459 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1338 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2019 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1926 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1828 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1833 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2009 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1362 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1266 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1672 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1637 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1593 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   136 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   125 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   180 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35949 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35318 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 23949 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 24311 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30901 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31687 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 32890 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35116 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35705 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 22018 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23151 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23262 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27765 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29327 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32558 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32931 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 20890 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 18887 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29082 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 29144 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 26567 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31285 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32607 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20628 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18893 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22090 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25490 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 22864 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18450 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13254 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 13553 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10265 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16530 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17175 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13253 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23397 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24810 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15600 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13337 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20293 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20175 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 17663 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34439 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40606 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21403 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 20874 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 30755 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 37056 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 37405 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2631 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2934 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1998 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1604 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3714 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2827 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2383 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2452 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2694 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1633 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1327 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1995 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2051 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1761 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   217 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   121 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   112 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   165 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   149 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
