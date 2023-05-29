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
                  std::unordered_map: 32580 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 20551 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10106 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10542 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10055 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12329 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12116 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37738 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26030 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14369 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15184 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18463 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17443 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17058 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31083 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 20042 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9853 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9408 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9474 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11906 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11054 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35380 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26131 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13687 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13435 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16964 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16926 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15701 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12657 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9564 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6543 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4422 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7763 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9013 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6206 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13057 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10218 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6897 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4812 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7756 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8711 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6652 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 28917 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 23653 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10345 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9012 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14199 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13094 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10435 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28881 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 20388 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 13215 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11350 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13919 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13690 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11888 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28230 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20114 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13769 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11979 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24889 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14384 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12282 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1304 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   597 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   609 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   517 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   578 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   541 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   504 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32810 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 20124 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10261 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10744 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12666 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 11764 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11681 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33911 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23317 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12758 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13062 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17343 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16301 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15438 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31138 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 19789 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10355 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10039 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12213 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11280 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10351 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31941 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23426 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12408 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12250 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16268 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 15417 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 14651 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11710 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9477 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6713 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4538 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7432 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8932 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6021 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13305 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9590 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6887 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5070 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7203 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9143 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6975 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 28711 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22639 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10991 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9525 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 12665 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14016 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11707 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31146 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23790 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14988 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12885 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16499 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16545 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14090 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30180 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23181 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14981 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13274 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27007 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16800 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14553 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1427 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1066 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   627 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   642 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   880 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   980 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   613 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32808 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 24329 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 14154 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12173 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 14747 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 19934 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 20536 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33797 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32379 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18625 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17235 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20852 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 22973 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 21100 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28251 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 22176 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 12390 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11833 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 14204 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 18155 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 17104 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28335 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 30734 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15919 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16886 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20866 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21103 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20136 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13500 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 10661 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6388 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3930 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8211 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  8484 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6157 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 17392 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 14647 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7392 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4504 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  9124 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 10394 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7847 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 19533 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 27219 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 12338 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8057 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15582 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 20304 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 17657 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 26406 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 28184 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 22516 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 17460 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 21452 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 23366 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 20326 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21419 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 27052 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 17372 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12719 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 33347 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18386 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 17522 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   815 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2237 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1876 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   646 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   874 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2099 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2438 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15643 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12871 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  7019 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6424 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7154 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8362 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7984 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20955 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16102 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8856 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8154 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10782 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9924 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9375 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14140 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10732 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6428 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5839 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6694 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8314 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7441 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20205 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15694 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8689 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7906 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10476 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8927 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8235 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7759 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4696 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3110 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2103 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4061 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3650 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2608 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7812 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5004 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3220 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2234 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3645 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4080 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3129 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15165 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12508 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  5099 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4177 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7717 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6054 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4866 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 17263 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15327 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8557 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7631 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10980 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9296 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8497 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16351 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14490 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8544 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7645 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24262 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8755 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7880 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   558 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   609 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   330 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   274 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   315 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32567 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24253 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 16303 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15801 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25264 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17945 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18960 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37693 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26763 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18309 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18628 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21039 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18497 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18491 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30166 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24119 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16427 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15526 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24426 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17464 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 17163 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35616 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27062 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17457 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16872 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20119 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18471 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18342 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 15701 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11567 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11252 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8767 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12588 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13992 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11732 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 18817 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13384 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10816 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18746 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15170 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13237 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36057 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 31571 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18104 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16413 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 21226 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20651 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19107 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2125 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1989 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1424 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1338 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1960 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1585 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1474 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1866 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1862 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1348 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1233 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1496 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1459 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1359 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   103 ms,       932 bytes in 59 allocations
        boost::unordered_map:   110 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   158 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   158 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   161 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 15, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31514 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22802 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 16141 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15794 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22728 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 19488 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 19927 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32570 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22928 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16221 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16408 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20365 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17320 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17751 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28988 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22135 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15815 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15004 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 20177 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 19123 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 18586 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30694 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22523 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15953 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15951 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19903 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16703 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16318 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11562 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10397 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11293 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8675 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10899 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13387 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11327 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16798 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13591 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10927 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 14329 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14861 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12353 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40063 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33545 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18938 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17147 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 25421 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21420 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19832 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2243 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2132 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1500 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1383 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2039 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1951 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1857 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2013 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2042 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1414 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1320 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1699 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1679 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1591 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   164 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   134 ms,      1084 bytes in 59 allocations
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
                  std::unordered_map: 30560 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 27424 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 14744 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 14700 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 29695 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 22583 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 20797 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28985 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 28260 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15472 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16062 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19803 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17000 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19263 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 29786 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 24893 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 12754 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 11748 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 26790 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 21742 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 18965 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28716 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 29484 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13750 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11586 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20988 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16988 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16130 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 15605 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 11278 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  7236 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  5436 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13508 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 11235 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  7074 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 18136 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 17232 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map:  9763 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  7222 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18686 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 11674 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map:  9142 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 28675 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 32349 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 16923 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 14623 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 24871 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 22618 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 20470 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1678 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  1801 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1013 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1144 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2426 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2398 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2250 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1462 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1406 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1001 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   736 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1537 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1498 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1575 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   231 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   254 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   101 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    79 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   110 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   139 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
