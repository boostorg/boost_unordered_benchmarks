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
                boost::unordered_map: 18918 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9823 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9818 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9197 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12089 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11730 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34908 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24960 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13917 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14347 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17545 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17205 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16068 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33403 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 20951 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10798 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10682 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9730 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12931 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11725 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36735 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28725 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15183 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14986 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18428 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18317 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17065 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10544 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9172 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  4465 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map:  4464 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7322 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8261 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5610 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11443 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9550 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6540 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4772 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7257 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8420 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6373 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27247 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22849 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10442 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8952 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13750 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12793 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10778 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28200 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19823 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12880 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11038 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14077 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13447 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11482 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27656 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20169 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13553 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11748 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24459 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13979 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11957 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1300 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   691 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   610 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   544 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   579 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   547 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   499 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32031 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21241 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10592 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10642 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11537 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14170 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13978 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34158 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23682 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12199 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12185 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16413 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16696 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15534 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30941 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21450 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10654 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10260 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11239 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14003 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13127 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31475 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24500 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12299 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11852 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16218 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16565 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15323 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11120 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9187 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  4382 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map:  4380 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7112 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8539 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5763 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12872 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9555 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6596 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4949 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7012 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8807 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6684 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29676 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25332 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10483 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9048 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14077 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14380 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11688 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31309 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23296 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14516 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12745 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16473 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16294 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13897 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28465 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22711 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14251 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12735 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26484 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16484 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14324 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1432 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1009 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   665 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   655 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   858 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   967 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   624 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38468 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 32721 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 21089 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 21657 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17101 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28800 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 29468 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36438 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36981 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23692 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23118 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22980 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 29407 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29930 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35119 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 33117 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 21000 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 19367 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17601 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 29908 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28742 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33914 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37789 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23684 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 21373 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21601 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 29912 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 27317 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22020 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15438 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 11849 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map: 11729 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13398 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17570 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12670 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 26325 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18694 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 15377 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 12660 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11835 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18566 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14752 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29093 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 41238 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 18381 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 15912 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20031 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 29531 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26042 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35964 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42177 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 31600 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 25401 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26574 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 41281 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 34862 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33272 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 38717 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 29162 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 23142 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42696 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32607 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 26568 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1251 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2563 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1819 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1612 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1083 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2501 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2144 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15675 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12828 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6487 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6457 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7132 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8441 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7846 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21135 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16166 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8394 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8121 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10754 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9857 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9153 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14083 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10633 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6213 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5734 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6755 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8223 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7431 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20068 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15692 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8411 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7836 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10481 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8960 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8124 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7699 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4746 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  2148 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map:  2107 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4038 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3648 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2576 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7789 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5104 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3196 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2246 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3648 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4140 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3149 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15119 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12444 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4868 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4005 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7708 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5974 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4927 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16775 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15326 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8585 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7642 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11012 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9262 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8589 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16217 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14383 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8453 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7625 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24343 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8691 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7884 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   456 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   607 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   347 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   275 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   392 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   312 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30674 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22461 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15633 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15282 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21810 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16975 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16806 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34426 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25347 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17597 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17229 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19536 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17882 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17751 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28247 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22679 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15389 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14726 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24380 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16841 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16163 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32088 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25842 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17320 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16646 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19236 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17555 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17201 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10857 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11183 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  8871 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map:  8871 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12132 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13771 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11659 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17612 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 12970 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10286 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15161 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14398 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12700 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33576 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30727 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 17722 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16102 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20529 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20154 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18756 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1964 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1993 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1436 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1319 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1905 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1576 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1485 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1805 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1856 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1341 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1249 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1516 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1457 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1354 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   145 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   127 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   145 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32219 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23814 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17199 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17416 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20056 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20438 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20558 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32226 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25305 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16156 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15991 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20147 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18940 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18646 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30231 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21710 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15620 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14831 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19332 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20308 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19659 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30186 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22232 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16292 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15704 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19357 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18674 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18248 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11002 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9938 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  8742 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map:  8750 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10276 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13081 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11281 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15900 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13244 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10769 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18858 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14163 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12508 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40768 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34690 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18437 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16775 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22075 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 22965 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22037 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2171 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2129 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1459 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1344 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2029 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1951 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1857 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1837 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1987 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1375 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1276 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1675 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1577 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   151 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   138 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   125 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36665 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35908 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 23319 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 24243 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31425 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31174 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 32262 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34628 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34968 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 22187 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22917 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23285 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27287 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28698 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32051 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32437 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 20838 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 19474 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28796 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 29467 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 27025 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31716 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32747 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20731 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18821 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21904 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25463 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 23116 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18936 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13449 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 10464 ms,  71303176 bytes in 1 allocations
   boost::unordered_flat_map: 10503 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16745 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17270 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13301 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23397 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 25077 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15547 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13440 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19800 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20344 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 17210 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34458 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40093 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21573 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 20827 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 30805 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 37260 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 36994 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2583 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2944 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1924 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1632 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3762 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2805 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2359 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2456 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2683 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1629 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1350 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1996 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2034 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1735 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   222 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   123 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   108 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   150 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   150 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
