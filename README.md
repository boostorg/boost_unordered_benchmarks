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
                  std::unordered_map: 35064 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21922 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11016 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11465 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10790 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 13241 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13147 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 40470 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28033 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15274 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16503 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19922 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18892 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17798 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34609 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 22395 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11148 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11196 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10572 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 13275 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12109 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 40260 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29284 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15360 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15717 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19384 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19285 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17424 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13457 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10186 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6896 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4626 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8245 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9614 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6448 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14368 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11593 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7541 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5539 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8545 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9760 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7105 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31039 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25224 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10939 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9928 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15132 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13734 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10615 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 29737 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21267 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 13694 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11469 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14339 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 14066 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 12002 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29133 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20943 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13983 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12267 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25345 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14727 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12635 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1306 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   601 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   611 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   532 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   592 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   559 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   521 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34931 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21413 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10849 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 11662 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13521 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12430 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12311 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36039 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24633 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13292 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13863 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18236 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16880 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15631 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32818 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21447 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10959 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11187 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 13546 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12319 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11271 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34147 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25149 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13221 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13087 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17761 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16479 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15582 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12355 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10840 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7029 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4722 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7847 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9313 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6215 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14749 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11717 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7510 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5762 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7995 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 10008 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7451 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30343 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 23933 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11400 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10159 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13329 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14414 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11837 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31793 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24212 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14774 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 13142 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16894 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16572 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14402 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30671 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23477 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14890 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13462 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26788 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16986 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14844 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1428 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1067 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   632 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   646 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   884 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   982 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   621 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 26383 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 19857 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11029 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9894 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11651 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 15765 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14557 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 26481 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 26052 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14533 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13454 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17144 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17945 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16564 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23691 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 19092 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9912 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  8470 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11076 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 14222 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12322 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23663 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 25067 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12878 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11438 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16228 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16182 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 14160 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10551 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map:  8987 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  5407 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3239 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  6530 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  7755 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  4912 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13788 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 11909 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6175 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  3697 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  6411 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  8487 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5336 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14491 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 21152 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  9039 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  6650 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 11617 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 16088 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12815 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16681 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 19051 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12137 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10167 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13046 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 16430 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14284 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 15051 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 17258 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 11833 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  9182 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21770 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13600 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11747 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   813 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  1576 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1296 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   458 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   706 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  1690 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1510 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15703 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12755 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6851 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6378 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7181 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8449 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7899 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20890 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16090 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8806 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8152 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10784 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9913 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9248 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14123 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10605 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6439 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5676 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6704 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8333 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7403 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20092 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15649 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8638 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7927 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10427 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8966 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8194 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7713 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4738 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3179 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2136 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4063 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3574 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2558 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7777 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5138 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3201 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2138 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3654 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4034 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3122 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15168 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12455 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  5080 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4169 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7714 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6055 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4866 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 17334 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15256 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8503 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7593 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11029 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9228 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8505 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16224 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14325 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8517 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7581 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24266 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8654 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7915 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   707 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   614 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   331 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   276 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   313 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34701 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25133 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 16916 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16520 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 26145 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18948 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18772 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39886 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28314 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18640 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18433 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22325 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19515 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19343 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31703 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25334 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17067 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16155 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 25832 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18896 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 17747 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37759 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28616 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18873 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18031 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21267 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19374 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19120 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 17258 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12566 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 12052 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9592 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13725 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14898 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12742 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 20623 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14599 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11711 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20737 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15983 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 14286 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 38289 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33342 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18912 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17487 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22361 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21631 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19477 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2130 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2029 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1425 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1329 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1993 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1579 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1467 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1883 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1883 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1349 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1231 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1503 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1455 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1356 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   103 ms,       932 bytes in 59 allocations
        boost::unordered_map:   110 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   164 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   158 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   161 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36109 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25736 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17548 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17100 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25275 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20946 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 21055 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36529 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25439 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18182 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17844 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23037 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19191 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19845 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31314 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24057 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16852 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15629 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23459 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 21690 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 18833 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33007 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23990 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17280 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17260 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22830 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18452 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17878 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12135 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10933 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11571 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9246 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11845 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14081 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11928 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 18026 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14363 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11889 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15516 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16189 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 15031 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 42812 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35191 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19685 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18078 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 26562 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 22158 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20714 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2258 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2135 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1502 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1390 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2029 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1958 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1859 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2031 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2057 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1423 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1325 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1691 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1685 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1602 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   165 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   135 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   141 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   189 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   176 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   116 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 24338 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 23057 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 11961 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 11549 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 23015 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 17519 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 16770 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24256 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 22986 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 11967 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11535 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16730 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 15071 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15339 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23728 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 20834 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 10055 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map:  9084 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21675 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 16429 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 14805 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 22196 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 21907 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 10772 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  9714 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16213 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13862 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 12267 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11692 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map:  8786 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  6014 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  4200 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10517 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map:  9357 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  5731 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14832 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 15116 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map:  7649 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  5817 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15752 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  9629 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map:  7628 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 22744 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 25990 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 11556 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10600 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 17998 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 16996 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 14404 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1415 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  1538 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:   971 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:   860 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2117 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  1554 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1424 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1268 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1355 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:   834 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   737 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1095 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1061 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:   932 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   103 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   108 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    74 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    67 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:    93 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:    89 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:    85 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
