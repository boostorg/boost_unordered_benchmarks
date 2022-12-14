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
                  std::unordered_map: 31371 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22756 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12283 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12646 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9108 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12103 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11741 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34999 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25070 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13967 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14108 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 18103 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17247 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16148 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30368 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23403 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11656 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12474 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9152 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11848 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10847 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33721 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26449 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13227 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13888 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17344 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17012 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15755 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10590 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9199 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4462 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6535 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7397 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8287 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5636 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11441 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9565 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4598 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6228 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7264 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8358 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5966 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27340 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22903 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9039 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10535 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 13805 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12799 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10718 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28241 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21312 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12164 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14045 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 13962 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13458 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11481 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27698 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20213 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11696 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13521 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24310 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13985 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11938 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1301 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   690 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   795 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   809 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   580 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   521 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   498 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32282 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 25041 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12546 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12806 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11493 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14379 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14127 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34359 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23546 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12255 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12398 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16352 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16872 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15969 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30970 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24756 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11618 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12527 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11530 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14027 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13069 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31500 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24580 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11572 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12317 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16477 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16592 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15368 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11153 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9260 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4527 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6588 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7212 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8560 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5807 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12903 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9617 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4766 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6230 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7016 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8925 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6134 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29832 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25359 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9280 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10639 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 14155 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14363 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11775 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31219 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23551 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12418 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14279 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 16490 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16285 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13939 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28452 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22666 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12739 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14397 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 31266 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16518 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14272 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1405 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   995 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   919 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   925 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   870 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   964 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   627 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40434 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 41382 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24427 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 24169 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17925 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30750 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31340 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39341 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 40117 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24262 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24195 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 24051 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30619 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30981 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36586 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39512 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21968 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 23632 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17581 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30450 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29216 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35488 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38733 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22095 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 23908 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22551 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30464 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28219 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 21004 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14888 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11004 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 14056 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12943 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17671 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12773 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25328 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19575 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12492 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14348 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 12065 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19153 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15039 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31586 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 43030 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16193 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18918 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 19418 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 31412 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27747 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36353 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42963 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25862 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 31918 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 27587 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 42991 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35673 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33698 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39396 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23243 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 28836 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 43512 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33727 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27515 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1275 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2569 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1747 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:  1990 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:  1142 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2560 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2300 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15691 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14262 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7301 ms, 260046848 bytes in 1 allocations
              poc_unordered_node_map:  7932 ms, 199287432 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  7018 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8397 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7782 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20971 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16128 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8202 ms, 260046848 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8851 ms, 199287432 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10709 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9046 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8751 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14086 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13382 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6421 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map:  7542 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  6518 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8174 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7463 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20154 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15661 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7898 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8801 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10445 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8849 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8124 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7743 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4733 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  1988 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  3078 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  4055 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3635 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2546 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7761 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5106 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2094 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  3002 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  3712 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4075 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3120 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15074 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12486 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4068 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map:  5301 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7639 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5944 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4871 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16764 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15079 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7418 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map:  8326 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 11017 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9247 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8466 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16323 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14255 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7752 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8517 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24326 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8813 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7964 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   418 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   609 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   495 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   541 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   398 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   317 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34146 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24742 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16775 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 17658 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 23797 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18504 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18254 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37904 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27824 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 18690 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 19171 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 21341 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19307 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19156 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28401 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22676 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15431 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 15966 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 24707 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16892 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16332 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32218 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25942 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16572 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17318 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19518 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17656 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17194 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10893 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11217 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8566 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10849 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12072 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13770 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12034 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17736 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10727 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12514 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 14925 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15436 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13347 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 37286 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33811 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 17828 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 19374 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 22495 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21816 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20138 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1966 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1977 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1341 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1444 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  1919 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1575 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1483 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1815 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1860 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1236 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1336 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1515 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1459 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1365 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   124 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   142 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   142 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32203 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22629 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16639 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 17058 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 20004 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20483 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20573 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32248 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25260 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15853 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16300 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 20066 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18889 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18709 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30482 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22724 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15203 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 16077 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 19759 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20324 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20035 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30490 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22329 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15498 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16103 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19725 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18713 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18345 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10930 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9975 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8729 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10686 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 10333 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13157 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11691 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15997 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11206 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12760 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 18902 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14055 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12576 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41090 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34829 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16877 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18605 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 22243 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23276 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22079 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2207 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2054 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1335 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1431 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  2021 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1954 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1859 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1828 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1979 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1269 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1391 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1694 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1667 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1614 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   129 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   128 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37403 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37070 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23501 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 22653 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 31863 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31912 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33625 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36306 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36643 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23556 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 22409 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 24549 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28524 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29476 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33089 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 34073 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19402 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 20969 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 29322 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30707 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28785 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33015 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34342 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19766 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21495 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22611 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27107 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25433 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19629 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13885 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9821 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 12874 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 16966 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17906 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13655 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24767 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26440 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12966 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14455 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20789 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21782 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18506 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35628 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42994 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21420 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 22181 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 32188 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 39825 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40377 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2690 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3062 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1664 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1932 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  3924 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2857 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2511 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2713 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2847 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1421 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1753 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  2113 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2218 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1873 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   161 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   229 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   118 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   126 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   163 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   168 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   155 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
