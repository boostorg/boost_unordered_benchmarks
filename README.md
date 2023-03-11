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
                  std::unordered_map: 31307 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 19211 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9792 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9790 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9210 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12089 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11755 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35000 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25049 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13898 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14330 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17556 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17212 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16123 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30190 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 18978 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9813 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9340 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  8797 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11754 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10757 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33471 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26315 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13788 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13372 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16920 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16960 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15788 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10603 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9186 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6390 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4436 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7419 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8284 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5586 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12350 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10564 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7201 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5382 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8009 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9317 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6934 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30833 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25415 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11443 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10185 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15266 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13968 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11698 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28317 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19750 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12579 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11022 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13818 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13192 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11431 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27379 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 19807 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13392 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11638 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25613 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13880 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11819 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1301 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   687 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   608 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   540 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   578 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   547 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   498 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32095 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21252 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10466 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10611 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11513 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14186 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14050 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33948 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23409 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 11919 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12162 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16170 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16303 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15468 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34763 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23475 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11574 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11534 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12356 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15150 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14297 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34518 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26188 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13280 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12997 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17467 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17895 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16461 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11945 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10161 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6915 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4682 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7849 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9314 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6269 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14069 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10538 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7198 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5488 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7717 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9560 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7105 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29871 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25536 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10488 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8936 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14196 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14432 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11676 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31231 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23272 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14511 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12742 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16402 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16305 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13936 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28398 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22761 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14290 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12746 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26450 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16343 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14184 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1435 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1011 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   674 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   635 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   879 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   966 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   657 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34789 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 30569 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 20165 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 19216 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 16503 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 27751 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 28298 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35732 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36398 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23102 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22632 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22698 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28562 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28400 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32695 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 30742 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 20144 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 17906 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 15954 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 28299 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 26590 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32784 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36762 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 22546 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 21155 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21738 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28417 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 26188 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19715 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14147 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 14476 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map: 11130 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12408 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 16515 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12028 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24571 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18016 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 14575 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 12183 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11335 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 17588 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14621 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27274 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 38651 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 17320 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 14928 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18446 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 28756 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 25587 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34435 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 39622 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 31731 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 25351 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26883 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 42044 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35226 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32198 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 37693 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 28029 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 22259 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42715 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32368 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 25925 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1254 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2502 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1803 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1596 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1129 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2468 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2206 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15601 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12817 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6694 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6385 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7193 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8432 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7855 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21125 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16113 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8454 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8150 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10727 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9912 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9275 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14116 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10664 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6237 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5722 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6754 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8333 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7428 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20196 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15693 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8405 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7870 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10492 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9010 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8213 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7750 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4685 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3092 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2131 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4115 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3688 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2608 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7795 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5082 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3214 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2222 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3723 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  3990 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3102 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15143 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12546 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4910 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4119 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7702 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5998 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4892 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16962 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15314 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8532 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7709 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11035 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9317 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8468 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16421 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14526 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8460 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7668 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24396 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8700 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7933 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   518 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   608 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   347 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   273 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   268 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   313 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30712 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22516 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15720 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15296 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 23561 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17027 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16933 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34379 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25352 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17595 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17247 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19612 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17894 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17715 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28508 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22901 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15508 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14743 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21366 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16948 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16169 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32331 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26141 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17271 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16765 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19385 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17703 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17182 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10887 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11178 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11315 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8916 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12047 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13761 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11668 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17677 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13024 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10252 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 14932 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14514 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12816 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33706 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30891 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 17711 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16058 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20545 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20207 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18668 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1937 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2001 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1427 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1328 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1864 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1563 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1485 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1791 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1838 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1335 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1235 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1492 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1459 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1348 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   139 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   134 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32318 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23959 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17361 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17435 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20150 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20564 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20705 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32404 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25478 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16150 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16064 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20637 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19046 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18609 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30329 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21759 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15699 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14786 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19440 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20173 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19715 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30256 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22272 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16308 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15683 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19371 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18743 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18262 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11963 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10943 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11972 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9551 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11272 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14309 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12210 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15993 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13235 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10797 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18895 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14135 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12653 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40869 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34749 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18564 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16802 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22175 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23145 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22041 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2146 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2110 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1458 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1343 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2058 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1943 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1837 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1801 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1958 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1375 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1274 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1678 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1637 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1582 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   151 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   137 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   124 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36152 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35563 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 23174 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 24049 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30577 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 30888 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 31938 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34690 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34775 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 21521 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22490 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22806 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26917 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28125 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32515 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33138 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 21217 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 19812 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29402 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 29941 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 26834 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31458 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32840 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20482 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 19037 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21956 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25376 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 23180 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18297 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13073 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 13552 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10369 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16351 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17464 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 12886 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24216 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24765 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15383 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13014 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20478 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20275 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 17942 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33997 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40096 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21474 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 20926 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 31026 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 36560 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 36816 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2596 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2949 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  2032 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1667 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3738 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2761 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2359 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2471 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2643 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1626 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1347 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1988 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2131 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1766 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   164 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   220 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   121 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   108 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   165 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   158 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
