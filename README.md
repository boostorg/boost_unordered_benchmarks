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
                  std::unordered_map: 34753 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24779 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 13832 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 13730 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 10009 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 13265 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12864 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38480 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27292 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15647 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 15333 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19430 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18641 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17463 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30202 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23251 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11592 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12367 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9112 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11807 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10798 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33673 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26310 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13178 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13843 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17230 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16934 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15785 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10581 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9195 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4488 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6577 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7408 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8294 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5646 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11450 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9574 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4575 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6227 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7259 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8366 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5989 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27248 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22935 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9067 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10555 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 13790 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12823 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10781 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28252 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21270 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12136 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14033 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 14005 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13408 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11474 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27654 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20209 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11761 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13569 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 25820 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13958 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11908 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1300 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   689 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   796 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   812 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   575 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   518 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   493 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32096 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24933 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12475 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12733 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11426 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14206 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14075 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34138 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23604 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12231 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12322 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16275 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16705 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15939 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31132 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24899 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11661 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12556 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11581 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14141 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13127 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31680 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24687 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11641 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12297 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16529 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16652 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15426 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11101 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9212 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4457 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6507 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7205 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8482 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5761 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12891 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9630 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4800 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6230 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7000 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8924 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6108 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29806 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25360 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9246 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10645 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 14148 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14368 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11745 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31240 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23554 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12482 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14253 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 16492 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16289 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13941 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28508 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22735 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12742 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14506 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 31323 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16523 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14284 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1407 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   995 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   918 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   924 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   869 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   964 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   626 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40208 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39955 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24044 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 23735 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17634 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30451 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31465 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38263 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38871 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24054 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24246 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 23558 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30774 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31304 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36369 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39995 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 22094 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 24290 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 18192 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30755 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29860 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35492 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38790 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22287 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24068 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22650 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30516 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28306 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22580 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15836 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11394 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 14612 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map: 13275 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18210 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13662 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 26605 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19860 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13417 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 15129 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 12031 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19299 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 16667 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30976 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42872 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16229 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18911 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 21161 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30777 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27508 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 37027 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42788 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26615 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 31589 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 27538 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 44189 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36287 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34371 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39717 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23140 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 29265 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 44187 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34365 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27502 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1413 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2620 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1780 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:  1950 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:  1146 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2452 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2196 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15560 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14287 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7272 ms, 260046848 bytes in 1 allocations
              poc_unordered_node_map:  7919 ms, 199287432 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  7048 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8468 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7776 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20914 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16116 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8147 ms, 260046848 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8810 ms, 199287432 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10761 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9170 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8728 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14100 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13386 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6356 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map:  7515 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  6621 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8100 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7478 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20161 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15732 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7871 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8821 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10475 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8854 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8116 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7761 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4665 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2072 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  3108 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  4102 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3623 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2542 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7752 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5058 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2089 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  3020 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  3684 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4014 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3108 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15050 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12448 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4172 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map:  5210 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7631 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5931 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4866 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16836 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15018 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7502 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map:  8192 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 11052 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9213 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8477 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16227 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14401 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7718 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8529 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24306 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8833 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7962 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   446 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   609 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   487 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   532 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   314 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30732 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22800 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15553 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 16325 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 23881 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17089 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16939 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34629 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25542 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17412 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17798 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19440 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17932 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17765 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28515 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22807 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15227 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 15916 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 24882 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17033 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16386 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32450 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26125 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16582 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17302 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19659 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17670 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17207 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10943 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11268 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8645 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10920 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12105 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13849 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12024 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17720 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10681 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12536 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 15128 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15470 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13410 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33691 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30826 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16335 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 17850 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20601 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20262 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18751 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2013 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1979 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1341 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1449 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  1914 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1565 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1485 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1808 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1859 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1224 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1333 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1520 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1464 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1371 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   134 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   167 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   135 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32237 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22674 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16798 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 17091 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 19837 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20509 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20579 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32245 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25263 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15859 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16270 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 20048 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18944 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18627 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33653 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24714 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 16282 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 17336 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 21594 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 21846 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 21643 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33517 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24192 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16700 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17471 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 21577 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20094 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19789 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11019 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10015 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8786 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10807 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 10359 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13169 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11651 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15988 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11216 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12752 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 18904 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14203 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12650 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40882 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34742 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16845 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18552 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 22400 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23113 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22042 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2217 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2040 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1335 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1434 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  2017 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1954 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1861 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1835 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1982 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1267 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1392 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1682 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1666 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1730 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   130 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   129 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36880 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36677 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23418 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 22327 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 31553 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31989 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33695 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35548 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36299 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23466 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 22336 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 23538 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28372 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29708 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33277 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33721 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19710 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 21199 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 29414 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30736 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28317 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32527 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 33900 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19771 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21503 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22942 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26915 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24871 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19853 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13818 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9946 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 12697 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 16861 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17827 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13780 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24624 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26262 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12641 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14795 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20611 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21552 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19278 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36083 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43032 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22419 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 22311 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 31979 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40266 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40546 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2706 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3050 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1658 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1966 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  3859 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2936 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2479 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2643 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2869 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1464 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1716 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  2075 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2200 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1872 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   167 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   227 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   114 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   124 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   167 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   169 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   152 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
