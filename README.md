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
                  std::unordered_map: 32572 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 20522 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10337 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10591 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10094 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12467 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12392 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37752 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26106 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14614 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15240 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18409 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17451 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16888 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31244 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 20462 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10082 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9736 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9523 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12106 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11049 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36405 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26567 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14131 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13925 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17977 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17637 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16080 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12669 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9595 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6540 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4478 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7787 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9055 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6142 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13066 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10280 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6942 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4953 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7742 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8844 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6800 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29672 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 24779 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10645 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9100 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14481 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13137 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10314 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 29382 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 20176 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 13392 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11509 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14148 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13882 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11929 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28683 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20495 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13965 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11974 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25304 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14473 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12254 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1303 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   598 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   602 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   520 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   585 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   560 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   511 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32812 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 20376 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10590 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10723 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12761 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 11919 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11910 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33868 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23225 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12701 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13394 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17031 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16270 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16028 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31222 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 20268 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10690 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10393 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12489 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11387 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10924 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32252 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23853 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12991 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12459 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16925 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 15856 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 14836 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11722 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9470 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6667 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4556 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7486 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9085 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6036 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13262 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9593 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6837 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5136 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7174 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8884 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6916 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27596 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 21854 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10647 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  9297 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 12453 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13490 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11430 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 30975 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23597 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14252 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12948 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16445 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16287 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14077 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29537 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22654 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14568 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13299 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26311 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16655 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14419 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1427 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1067 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   877 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   620 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   882 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   980 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   612 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34262 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 26446 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 13450 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12641 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 15574 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 20251 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 20738 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32913 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 33246 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 19071 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16815 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23964 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 24283 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 22570 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30744 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 25844 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 13568 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 12167 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 15220 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 20953 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 17412 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30686 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 31570 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17721 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16124 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23142 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 23294 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 21162 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 14031 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 11388 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  7952 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4690 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  9367 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 10230 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  7277 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 18467 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 15847 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  8213 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4761 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  9297 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 12294 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7859 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 18682 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 25943 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10221 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  7520 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14863 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 20156 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 16352 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 26897 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 31880 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 19496 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 16264 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 19760 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 31462 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 24716 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21036 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 24890 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 20254 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 14830 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 34303 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21497 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 20389 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1711 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2001 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1532 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  2044 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1003 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  3718 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1944 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15662 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12788 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6577 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6412 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7136 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8392 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7902 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20930 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16043 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8415 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8175 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10765 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9843 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9177 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14135 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10672 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6157 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5744 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6690 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8286 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7387 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20077 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15690 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8453 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7821 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10434 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8998 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8122 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7745 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4710 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3128 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2103 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4085 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3667 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2579 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7787 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5128 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3272 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2169 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3670 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  3991 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3107 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15113 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12415 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4824 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4048 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7731 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6009 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4877 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16749 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15224 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8611 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7608 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11033 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9253 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8517 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16235 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14379 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8475 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7611 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24319 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8665 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7945 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   406 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   604 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   348 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   277 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   312 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 12, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32126 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22990 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 15914 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15600 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25211 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17332 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 17209 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35656 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26194 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18125 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17517 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20209 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18202 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18192 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30333 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24069 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16178 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15370 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24424 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17695 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16943 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35662 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27085 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17846 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17378 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20140 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18642 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18440 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 15767 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11531 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11663 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9113 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12650 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13803 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11917 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 18775 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 12990 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10606 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19059 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15250 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13348 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35958 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 31559 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18251 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 15815 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 21205 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20583 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19163 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2043 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1978 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1425 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1330 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1949 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1576 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1462 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1813 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1839 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1334 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1227 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1478 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1447 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1362 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   102 ms,       932 bytes in 59 allocations
        boost::unordered_map:   111 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   140 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   119 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   157 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   152 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   158 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32587 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23664 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 16348 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 15935 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22905 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 19663 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20076 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33240 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23550 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17508 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16654 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20976 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17824 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18534 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 29201 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22491 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15448 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15130 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21647 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18497 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 18508 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30837 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22763 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16658 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16038 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20625 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17242 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16897 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11524 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10313 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11247 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9046 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11224 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13387 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11436 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17271 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13879 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10976 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 14581 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15164 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12809 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40105 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33533 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18989 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17133 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 25290 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21276 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19567 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2244 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2119 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1486 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1380 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2025 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1947 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1849 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2000 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2054 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1410 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1318 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1694 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1686 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1584 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   164 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   133 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   140 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   187 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   174 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   116 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2022, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31569 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36156 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 14747 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16389 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31181 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 24882 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 24218 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33875 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 33544 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16699 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15360 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25001 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 22046 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 22511 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30517 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 30003 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 14330 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 13545 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29106 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 22213 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 23274 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31799 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32420 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16735 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13908 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25418 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21424 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19608 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 16052 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 12105 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  7328 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  5379 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16215 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 11571 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  6875 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 21227 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 21976 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 10893 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  8116 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19766 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 13609 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 11023 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29837 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 35612 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14205 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 14136 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 27825 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 25843 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 21988 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1932 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2705 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1832 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1053 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3549 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2036 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1728 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1777 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1574 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1140 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1180 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1850 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1840 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1793 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   233 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   203 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   189 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   252 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   238 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   177 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
