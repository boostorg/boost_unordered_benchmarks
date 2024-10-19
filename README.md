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
                  std::unordered_map: 34808 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21542 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10817 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11063 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10552 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 11026 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 13350 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12967 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39045 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26856 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14528 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15850 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19095 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 18118 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 18534 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17718 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33325 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21747 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10488 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10407 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9883 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12906 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11803 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37682 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28088 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14490 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14589 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18353 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18030 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16836 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13145 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10170 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6712 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4553 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8082 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9417 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6645 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13625 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10975 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6956 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5247 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7906 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9152 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7098 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31145 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25371 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11178 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9634 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14985 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13837 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10887 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 29918 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21081 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 13543 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11598 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14321 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 14147 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 12051 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29232 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20654 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14176 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12185 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24785 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14623 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12602 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1302 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   693 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   615 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   530 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   591 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   546 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   513 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34919 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21386 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10903 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11676 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12604 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 11404 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 12237 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11914 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35600 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23881 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13292 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14292 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17574 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16564 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17257 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16456 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33530 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21425 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10964 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11187 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 13374 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12155 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11133 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34686 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25072 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13270 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13788 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17507 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16375 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15780 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12220 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10606 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6936 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4627 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7880 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9152 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6126 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14069 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11158 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7290 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5491 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7694 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9472 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7084 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29944 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 23567 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11787 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10223 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13449 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14121 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11719 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32253 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24537 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 15069 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 13030 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16940 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16947 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14475 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30870 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23917 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 15293 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13454 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27150 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17233 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14817 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1429 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1063 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   629 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   688 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   886 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   981 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   626 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 26188 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 19749 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10871 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9828 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11561 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 15542 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14390 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 26351 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 25758 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14418 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13379 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16984 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17790 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16436 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23553 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 18948 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9926 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  8450 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11015 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 14222 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12241 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23684 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 24853 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12884 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11338 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 15921 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16234 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 14121 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10442 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map:  9005 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  5419 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3248 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  6429 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  7717 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  4848 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13655 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 11824 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6237 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  3698 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  6383 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  8415 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5166 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14397 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 20892 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  9061 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  6587 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 11583 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 15879 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12725 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16738 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 18704 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12117 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10013 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13008 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 16365 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14212 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 14957 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 17303 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 10831 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  9159 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21844 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13476 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11710 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   823 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  1568 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1296 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   460 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   702 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  1691 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1506 ms,      4352 bytes in 1 allocations
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
                  std::unordered_map: 24111 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 22816 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 11853 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 11499 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22695 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 17122 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 16407 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24072 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 22846 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 11896 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11437 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16591 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14983 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15269 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23405 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 20584 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map:  9955 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map:  8956 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21447 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 16277 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 14714 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 22114 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 21740 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 10636 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  9679 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16658 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13721 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 12223 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11600 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map:  8738 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  5928 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  4171 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10461 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  9256 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  5722 ms,  75497480 bytes in 1 allocations
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
          std::unordered_map: 22651 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 25965 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 11448 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10535 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 17942 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 16839 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 14307 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1424 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  1550 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:   989 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:   868 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2136 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  1567 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1416 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1277 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1388 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:   840 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   760 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1102 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1058 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:   941 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   103 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   108 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    75 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    65 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:    94 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:    91 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:    85 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
