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
                  std::unordered_map: 31378 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 19557 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9811 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9787 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9215 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12116 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11498 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34982 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25039 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13930 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14385 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17605 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17267 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16040 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30390 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 19518 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9805 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9360 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  8976 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11815 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10799 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33710 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26429 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13934 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13424 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17165 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16980 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15862 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10561 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9165 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6174 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4201 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7369 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8222 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5636 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11436 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9557 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6385 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4719 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7288 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8440 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6437 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27408 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22913 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10335 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8984 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13799 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12808 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10813 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28208 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19860 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12699 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 10879 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13966 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13234 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11490 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27667 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20082 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13481 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11682 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24966 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14007 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11911 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1305 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   675 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   625 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   544 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   584 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   563 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   503 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32116 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21248 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10576 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10698 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11545 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14350 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13831 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34145 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23454 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12181 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12221 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16365 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16737 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15461 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30985 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21500 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10616 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10254 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11264 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14073 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13107 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31519 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24395 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12224 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11804 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16180 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16652 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15355 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11249 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9263 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6296 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4308 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7233 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8550 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5798 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12883 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9564 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6491 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4854 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7017 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8681 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6587 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29799 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25341 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10372 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9012 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14140 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14363 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11633 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31817 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23831 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14849 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12851 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16707 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16413 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14163 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29278 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23392 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14553 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13016 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26697 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16750 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14564 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1434 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1012 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   680 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   632 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   875 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   969 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   626 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36515 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 31592 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 20421 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 20581 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 16856 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28803 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 29037 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36574 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37175 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23203 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23569 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23470 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28705 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30679 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33465 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 31406 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 20199 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 18159 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16939 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 28798 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 27224 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33424 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37344 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23082 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 21112 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21905 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 29301 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 26911 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20189 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14772 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 14827 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map: 11267 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12776 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17064 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12760 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23809 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18054 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 14481 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 12311 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11435 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 17944 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14995 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31746 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 41346 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 18188 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 15321 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20535 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30541 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27195 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32963 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 39186 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 31039 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 25120 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26584 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 41354 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 34430 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32205 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 37583 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 28103 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 22776 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42476 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32489 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 26145 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1181 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2442 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1737 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1538 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1053 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2441 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2116 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15688 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12897 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6708 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6370 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7045 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8371 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7725 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20945 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16146 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8431 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8171 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10736 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9668 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9298 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14113 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10671 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6155 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5937 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6700 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8123 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7483 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20143 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15650 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8340 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7866 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10500 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8928 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  7977 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7762 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4667 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3150 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2088 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4056 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3653 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2571 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7764 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5089 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3153 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2203 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3698 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  3949 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3115 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15058 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12449 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4811 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4122 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7670 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6006 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4900 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16795 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15242 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8594 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7595 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11041 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9281 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8440 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16308 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14512 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8526 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7571 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24246 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8750 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7847 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   476 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   624 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   351 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   279 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   397 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   274 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   318 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30677 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22611 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15735 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15301 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 23952 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17036 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16837 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34396 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25393 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17844 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17333 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19430 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17959 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17703 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28347 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22594 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15414 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14678 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 22852 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16906 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16177 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32262 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25889 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17296 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16808 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19237 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17575 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17190 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10886 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11204 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11362 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8872 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12101 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13749 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11701 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 19892 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14245 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11220 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 16406 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16420 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 14237 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 37077 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33644 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19347 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17704 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22438 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21868 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20174 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1967 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2000 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1447 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1329 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1896 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1578 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1483 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1812 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1847 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1337 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1248 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1493 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1455 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1362 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   110 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   143 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   137 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   160 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   152 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   141 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32165 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23819 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17667 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17402 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20154 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20466 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20594 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32297 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25283 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16124 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16000 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20241 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18988 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18621 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30466 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21813 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15686 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14886 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19490 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20386 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19824 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30421 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22378 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16411 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15761 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19499 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18688 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18356 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10930 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9957 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 10862 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8700 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10271 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13177 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11270 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17435 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14358 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11687 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20676 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15384 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13572 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40865 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34695 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18511 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16826 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22100 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23071 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22005 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2158 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2112 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1442 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1340 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2027 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1951 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1855 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1803 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1982 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1378 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1272 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1697 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1637 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1583 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   137 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34183 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 34239 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 22575 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 22968 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30127 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 30052 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 30833 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33993 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34688 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 21657 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22304 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22982 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26620 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28053 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31825 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32332 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 20573 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 18679 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28369 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 28887 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 26958 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31724 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32606 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20523 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18749 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21900 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25527 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24262 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18655 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13350 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 13648 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10410 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16447 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17262 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13387 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23119 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24525 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15575 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13214 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19849 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20367 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18053 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34283 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40018 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21352 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 21506 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 30610 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 36885 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 36928 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2580 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2982 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  2008 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1641 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3782 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2749 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2417 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2506 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2730 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1672 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1330 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2035 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2082 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1772 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   158 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   218 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   152 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   115 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   165 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   150 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
