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
                  std::unordered_map: 31343 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22773 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12240 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 12741 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 12527 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9131 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12113 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11753 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35096 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25139 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13960 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 14081 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 13881 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17434 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17192 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16155 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30212 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23328 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11654 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 12359 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 12579 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9100 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11737 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10774 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33587 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26283 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13143 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13921 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17247 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17017 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15755 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10559 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9180 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4480 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  6502 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  6534 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7396 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8232 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5588 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11391 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9569 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4616 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  6246 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  6243 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7320 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8401 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5923 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27298 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22968 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9050 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 10558 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 10606 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 13848 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12835 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10789 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28357 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21307 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12131 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 14071 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 14102 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 14015 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13527 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11523 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27619 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20274 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11732 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13646 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 13626 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 25196 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13947 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11980 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1291 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   692 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   798 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   813 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   783 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   639 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   527 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   509 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32077 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24526 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12555 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 12752 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 12591 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11428 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14299 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14094 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34158 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23391 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12169 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 12298 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 12135 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16327 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16675 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15546 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30987 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24811 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11575 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 12449 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 12709 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11499 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14017 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13137 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31500 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24534 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11563 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12280 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16461 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16647 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15319 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11161 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9211 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4455 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  6534 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  6526 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7240 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8474 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5754 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12872 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9584 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4761 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  6242 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  6261 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7029 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8869 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6235 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29867 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25366 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9231 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 10648 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 10691 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 14175 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14417 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11705 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31276 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23564 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12438 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 14199 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 14194 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 16567 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16303 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13919 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28504 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22768 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12967 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 14341 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 14327 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 26405 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16536 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14329 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1434 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1012 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   916 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   941 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   926 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   874 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   963 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   657 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38086 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38328 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23303 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 23453 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 23168 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17403 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 29902 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30943 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38072 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38626 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24067 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 23971 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 23999 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 23655 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30247 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31289 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34676 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 37822 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21068 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 23253 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 23182 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 16705 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30019 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28785 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34993 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38532 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21948 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24167 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22293 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30763 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28706 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20977 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14907 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11049 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 14032 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map: 14061 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12837 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17278 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12787 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 26160 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19392 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12350 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 14469 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map: 14386 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 11869 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18527 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15407 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29557 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 40526 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 15638 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 18415 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 18083 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 19149 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 29757 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27090 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34448 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 41925 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25936 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 32719 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 32238 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 27996 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43555 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36060 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33783 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39719 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23457 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 29017 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 29371 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 43819 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34589 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27676 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1315 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2520 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1722 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:  1886 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:  1894 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:  1094 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2578 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2171 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15676 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14280 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7260 ms, 260046848 bytes in 1 allocations
           boost::unordered_node_map:  7647 ms, 199287432 bytes in 3999509 allocations
              poc_unordered_node_map:  7791 ms, 199287432 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  7102 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8462 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7865 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21291 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16129 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8152 ms, 260046848 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8508 ms, 199287432 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a:  8718 ms, 199287432 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10662 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9916 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9418 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14084 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13383 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6254 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map:  7013 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map:  7493 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  6566 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8153 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7461 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20175 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15656 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7887 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8821 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10449 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8788 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8086 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7749 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4626 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2104 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  3114 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  3120 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  4050 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3601 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2648 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7753 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5041 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2094 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  2963 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  3013 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  3713 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4018 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3111 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15095 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12516 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4095 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map:  5038 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map:  5136 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7606 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5909 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4960 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16828 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15029 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7351 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map:  8214 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map:  8198 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 10997 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9234 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8501 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16294 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14208 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7611 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8541 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a:  8503 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24347 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8605 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7591 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   481 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   613 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   493 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   554 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   534 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   312 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30746 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22689 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15554 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 16204 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 16092 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 25050 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16969 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16952 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34388 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25408 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17279 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 17797 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 17608 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19433 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17788 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17787 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28398 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22778 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15161 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 16007 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 16204 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 24671 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16947 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16446 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32251 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25981 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16529 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17350 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19622 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17660 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17220 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10853 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11188 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8561 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 10781 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 10846 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12391 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13777 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12055 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17753 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10805 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 12543 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 12537 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 15010 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14654 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13719 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33769 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30873 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16379 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 17817 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 17673 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20635 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20216 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18709 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1957 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1986 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1341 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1450 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1448 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  1893 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1579 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1485 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1806 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1865 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1224 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1331 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1340 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1490 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1474 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1348 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   127 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   146 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   148 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   164 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   140 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32287 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22617 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16669 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 17106 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 16916 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 20006 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20455 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20671 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32370 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25316 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15905 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 16256 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 16143 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 20078 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19038 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18720 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30289 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22668 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15111 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 16205 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 16391 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 19666 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20249 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20022 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30316 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22383 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15481 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16325 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19596 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18740 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18376 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10918 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9944 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8688 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 10733 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 10723 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 10645 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13117 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11699 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15947 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11222 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 12776 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 12760 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 18915 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14290 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12288 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40905 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34726 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16879 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 18492 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 18603 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 22234 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23167 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22073 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2207 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2046 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1444 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1445 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  2016 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1973 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1886 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1830 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2001 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1287 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1385 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1394 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1685 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1652 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1583 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   148 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   129 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   127 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   127 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   183 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37485 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37036 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23664 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 22668 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 22473 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 31951 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32136 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33530 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35505 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35845 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23397 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 22352 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 22140 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 23349 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28102 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29792 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33670 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 34191 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19843 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 21195 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 21028 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 29631 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30609 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28853 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33488 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34504 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 20183 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21654 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 23138 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26846 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25364 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20020 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13869 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10120 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 12876 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 12781 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 17025 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18065 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 14037 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24741 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26532 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12565 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 14625 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 14577 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20936 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21491 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18406 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 37041 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43452 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22124 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 22456 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 22484 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 31963 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40317 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40811 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2687 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3062 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1637 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1876 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1941 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  3928 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2937 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2485 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2631 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2808 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1363 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1667 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1717 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  2086 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2149 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1872 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   169 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   256 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   114 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   123 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   121 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   154 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   162 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   150 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
