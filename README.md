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
                  std::unordered_map: 31446 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22589 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12268 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 12476 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 12480 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9192 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12136 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11741 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35170 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25191 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13819 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 14064 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 13868 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17483 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17259 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16120 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30314 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23340 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11685 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 12410 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 12641 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  8984 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11766 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10807 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33663 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26319 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13152 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13815 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 14053 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17299 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16597 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15763 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10567 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9174 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4478 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  6522 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  6537 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7391 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8244 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5594 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11400 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9563 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4602 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  6280 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  6234 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7308 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8356 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5880 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27449 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22985 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9024 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 10613 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 10647 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 13852 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12833 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10843 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28182 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21178 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12048 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 13975 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 13989 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 13941 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13405 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11459 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27535 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20111 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11672 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13581 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 13492 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 25026 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13634 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11906 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1291 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   692 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   797 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   811 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   783 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   637 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   527 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   510 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32228 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24765 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12514 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 12878 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 12664 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11483 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14262 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14087 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34303 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23502 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12245 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 12343 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 12183 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16352 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16820 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15538 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33663 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 26884 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12565 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 13459 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 13741 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 12614 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15243 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14227 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34432 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26462 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12725 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13197 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 13522 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17703 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17836 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16467 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11145 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9201 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4449 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  6533 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  6517 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7226 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8489 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5772 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12894 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9569 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4802 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  6243 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  6291 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7057 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8881 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6314 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29871 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25442 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9276 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 10655 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 10685 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 14158 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14366 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11690 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31158 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23508 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12365 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 14187 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 14151 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 16514 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16266 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13910 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28430 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22747 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12899 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 14296 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 14350 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 26436 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16465 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14319 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1433 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1017 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   918 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   944 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   926 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   874 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   963 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   656 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37935 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 37986 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23322 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 23104 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 23039 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17624 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 29576 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30580 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37889 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38194 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23920 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 23864 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 23900 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 23330 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30003 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31030 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34723 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 37880 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 20828 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 22861 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 22925 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 16651 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 29690 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28604 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34628 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38787 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21680 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 23860 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 23768 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22382 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30165 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28372 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 21050 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14835 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11052 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 13763 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map: 13966 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12976 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17463 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12782 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25599 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18659 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12281 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 14418 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map: 14605 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 11813 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18876 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15372 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 28855 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 41240 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16190 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 18017 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 18154 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 19950 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 29900 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26775 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35024 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42172 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26013 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 32007 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 32142 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 28050 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43994 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36428 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33782 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39151 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23358 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 29053 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 29247 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 43720 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34303 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27294 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2523 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1765 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:  1969 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:  1956 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:  1117 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2667 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2291 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15555 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14231 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7249 ms, 260046848 bytes in 1 allocations
           boost::unordered_node_map:  7612 ms, 199287432 bytes in 3999509 allocations
              poc_unordered_node_map:  7821 ms, 199287432 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  7068 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8497 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7741 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21195 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16152 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8119 ms, 260046848 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8427 ms, 199287432 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a:  8765 ms, 199287432 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10663 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9748 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9309 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14064 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13406 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6429 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map:  6935 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map:  7470 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  6581 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8230 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7326 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20199 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15662 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7862 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8327 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a:  8836 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10423 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8845 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8109 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7762 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4745 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2109 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  3139 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  3121 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  4057 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3610 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2513 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7757 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5054 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2067 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  3021 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  3023 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  3667 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4014 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3074 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15052 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12480 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4061 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map:  4940 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map:  5182 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7692 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5907 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4889 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16884 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15033 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7361 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map:  8247 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map:  8201 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 11013 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9227 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8512 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16228 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14251 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7624 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8499 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a:  8555 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24324 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8621 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7793 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   516 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   608 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   494 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   552 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   537 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   399 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   273 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   318 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30851 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22733 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15532 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 16234 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 16119 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 24409 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17075 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16791 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34499 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25430 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17077 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 17847 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 17674 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 18990 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17944 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17750 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28445 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22747 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15045 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 15924 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 16149 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 24416 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16956 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16386 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32336 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26027 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16601 ms, 102760452 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 17347 ms,  87839996 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 17597 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19422 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17661 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17101 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10859 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11188 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8576 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 10828 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 10833 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12372 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13795 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11991 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17752 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10819 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 12530 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 12505 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 15110 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14667 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13872 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33757 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30907 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16467 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 17835 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 17674 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20639 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20432 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18575 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1943 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1990 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1333 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1453 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1449 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  1886 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1576 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1471 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1807 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1859 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1214 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1327 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1335 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1496 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1477 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1335 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   138 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   140 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   137 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32301 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22640 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16630 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 17105 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 17047 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 20001 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20456 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20549 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32403 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25338 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15833 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 16288 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 16182 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 20124 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18968 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18622 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30378 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22659 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15102 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 16193 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 16490 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 19645 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20335 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19921 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30340 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22366 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15473 ms, 102760452 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 16407 ms,  87839996 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 16658 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19633 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18787 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18416 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10914 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9946 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8681 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 10702 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 10688 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 10658 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13073 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11641 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15971 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11274 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 12895 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 12837 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 19004 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14337 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12411 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41051 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34746 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16863 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 18577 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 18501 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 22306 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23263 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22220 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2120 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2024 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1408 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1419 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1418 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  2012 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1939 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1883 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1798 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1972 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1284 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1370 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1376 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1675 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1647 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1580 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   147 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   127 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   127 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   127 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   185 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37148 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36569 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23367 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 22562 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 22207 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 31283 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32038 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33173 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35476 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36079 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23463 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 22343 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 22228 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 24347 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27555 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29290 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32895 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33727 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19466 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 21005 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 20694 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 29350 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30329 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28318 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33116 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34064 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 20066 ms, 102760452 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 21340 ms,  87839996 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 21270 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22817 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26972 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25317 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20507 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13639 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9711 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 12692 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 12653 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 17282 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17889 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13690 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24684 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26179 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12695 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 14271 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 14374 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20667 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21773 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18754 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35642 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43499 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21726 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 22086 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 21982 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 31527 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 39944 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40579 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2693 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2990 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1628 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1911 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1939 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  3929 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2963 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2448 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2562 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2811 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1363 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1750 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1667 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  2067 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2104 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1810 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   166 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   220 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   114 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   122 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   125 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   152 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   174 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   151 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
