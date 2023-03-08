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
                  std::unordered_map: 31314 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 19163 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9789 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9720 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9216 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12076 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11686 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34919 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25059 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13860 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14316 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17526 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17158 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16215 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30389 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 19087 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9832 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9353 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  8818 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11797 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10720 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33662 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26359 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13909 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13372 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17008 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17050 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15735 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10568 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9174 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6391 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4401 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7447 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8247 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5641 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11455 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9578 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6427 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4734 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7302 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8433 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6368 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27231 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22912 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10425 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8904 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13814 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12757 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10764 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28132 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19805 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12857 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11049 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13940 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13367 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11444 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27461 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20075 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13403 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11719 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24684 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13863 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11853 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1301 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   686 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   607 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   541 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   578 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   548 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   500 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31856 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21258 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10575 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10545 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11520 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14219 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13892 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34137 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23639 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12137 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12168 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16342 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16630 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15434 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30865 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21371 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10609 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10248 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11086 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 13977 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13133 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31396 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24311 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12234 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11870 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 15955 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16475 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15285 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11186 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9221 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6313 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4303 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7163 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8532 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5808 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13887 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10496 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7205 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5445 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7666 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9506 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7128 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 32838 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 27916 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11345 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9977 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15440 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15570 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12602 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31319 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23310 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14525 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12641 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16502 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16280 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13888 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28499 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22753 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14274 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12803 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26299 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16475 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14337 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1434 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1012 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   666 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   656 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   873 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   967 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   627 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38109 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 32232 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 20563 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 21062 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 16885 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28893 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 29503 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36705 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36933 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23287 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23510 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22564 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28440 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29923 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34761 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 32738 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 21120 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 19279 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16562 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 28976 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 27911 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33458 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37164 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 22962 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 21215 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22070 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28492 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 27475 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 21053 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14796 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 14702 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map: 11455 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13195 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17289 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12755 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 26361 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 20238 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 15865 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 13354 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11563 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18909 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14852 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29960 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 40595 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 18283 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 16145 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18809 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 29550 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26030 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34763 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 40756 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 31117 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 24549 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26343 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 41143 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 34466 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32187 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 37367 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 28004 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 22103 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42105 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32666 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 26069 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1240 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2476 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1739 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1557 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1215 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2481 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2178 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15796 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12865 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6771 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6417 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7144 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8382 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7947 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20952 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16133 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8432 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8091 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10791 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9896 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9206 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14026 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10656 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6207 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5829 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6680 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8265 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7440 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20137 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15705 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8459 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7859 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10482 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9005 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8175 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7752 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4734 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3104 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2057 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4110 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3632 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2531 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7758 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5126 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3254 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2192 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3661 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4010 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3089 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15114 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12488 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4819 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4096 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7738 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5973 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4883 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16953 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15287 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8510 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7709 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10999 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9267 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8423 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16301 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14354 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8444 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7618 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24320 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8750 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7904 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   520 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   604 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   347 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   275 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   312 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30646 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22494 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15688 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15322 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 23847 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16990 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16840 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34401 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25330 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17630 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17159 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19434 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17803 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17805 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28310 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22595 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15421 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14671 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24420 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16928 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16116 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32073 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25970 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17215 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16635 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19311 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17571 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17143 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10898 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11199 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11424 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8877 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12076 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13772 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11705 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17684 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13046 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10261 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15046 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14653 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12767 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33662 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30812 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 17740 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16175 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20553 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20225 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18758 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1947 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1994 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1429 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1326 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1891 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1569 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1495 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1773 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1834 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1335 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1235 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1505 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1447 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1356 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   155 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   172 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   139 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32177 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23905 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17290 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17293 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 19965 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20441 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20743 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32275 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25309 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16122 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15908 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20498 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18920 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18554 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30464 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21839 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15775 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14863 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19533 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20341 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19702 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30447 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22377 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16368 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15737 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19494 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18760 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18357 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10941 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9953 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 10876 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8765 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10253 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13130 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11289 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15944 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13280 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10836 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18872 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14292 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12620 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41071 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34792 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18585 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16809 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22238 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23046 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22085 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2171 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2137 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1459 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1337 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2031 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1947 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1854 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1819 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1973 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1378 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1267 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1690 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1648 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1607 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   136 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   124 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37372 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36383 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 24303 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 24911 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 32466 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32129 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33514 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35249 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34890 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 21821 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22959 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23208 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27702 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29113 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31909 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32268 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 20635 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 18624 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28907 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 28747 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 26479 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31270 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32347 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20511 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18949 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21820 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25263 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 22873 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18752 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13405 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 13391 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10541 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16469 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17148 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13473 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23218 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24437 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15183 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13870 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20586 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21093 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 17436 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33982 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 39779 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21403 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 21016 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 31032 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 37352 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 36759 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2690 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2944 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1935 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1654 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3749 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2764 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2426 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2474 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2654 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1640 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1384 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2062 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2076 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1782 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   216 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   120 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   107 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   165 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   151 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
