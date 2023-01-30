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
                  std::unordered_map: 34633 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24699 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 13698 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10255 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 13254 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12799 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38303 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27236 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15653 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19033 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18596 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17448 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30300 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23351 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11603 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9176 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11813 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10850 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33708 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26004 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13124 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16751 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16595 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15773 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10570 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9165 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4421 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7448 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8264 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5656 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11453 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9574 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4764 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7338 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8267 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6027 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27465 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22803 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  8930 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13798 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12826 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10772 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28190 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21287 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12136 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14017 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13458 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11518 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27566 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20088 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11691 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25236 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14008 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11854 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   695 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   545 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   582 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   584 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   513 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32195 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24783 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12439 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11611 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14259 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14014 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34235 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23554 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12123 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16484 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16784 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15973 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31072 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24927 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11638 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11268 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14047 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13094 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31601 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24459 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11590 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16208 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16561 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15345 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12179 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10119 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4676 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7817 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9349 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6273 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12975 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9678 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4937 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7063 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8961 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6391 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29904 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25424 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9065 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14196 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14478 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11432 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 30882 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23289 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12483 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16462 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16084 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13834 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28440 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22615 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12776 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27047 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16437 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14125 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1415 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1018 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   631 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   875 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   977 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   655 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37855 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38330 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23273 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17497 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 29761 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30519 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37962 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39017 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24198 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23625 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30455 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31131 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35889 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 38120 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 20867 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17564 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30161 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28914 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35127 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38855 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22120 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23189 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30480 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28616 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20935 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14902 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11474 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12766 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17718 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12967 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25788 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19022 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13086 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11875 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19476 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 17999 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31385 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42742 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16375 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 19727 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30830 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27019 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36570 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42938 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26415 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28296 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43188 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36009 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34344 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39704 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23203 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43973 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33728 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27282 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1362 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2576 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1607 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1186 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2529 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2226 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15772 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14218 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7104 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7183 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8615 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7844 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21117 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16188 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8170 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10767 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9885 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9418 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14152 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13475 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6325 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6563 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8330 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7509 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20227 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15644 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7823 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10501 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8955 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8186 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7747 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4748 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2137 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  3986 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3659 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2590 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7740 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5117 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2266 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3674 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4018 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3079 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15125 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12380 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4054 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7525 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6083 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4886 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16928 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15119 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7391 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10953 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9278 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8473 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16275 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14554 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7649 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24226 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8564 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7878 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   643 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   617 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   274 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   315 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30804 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22752 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15570 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25129 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16993 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16886 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34567 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25448 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17289 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19371 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17831 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17811 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28419 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22734 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15098 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23224 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16948 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16368 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32326 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26016 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16446 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19295 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17573 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16975 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10841 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11167 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9023 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12099 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13750 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11715 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17700 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10826 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17087 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14850 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13304 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33765 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30926 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 15974 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20584 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20170 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18751 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2027 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1963 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1346 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1834 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1579 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1485 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1799 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1867 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1249 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1488 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1462 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1364 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   124 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   142 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32337 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22652 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16691 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 19964 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20527 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20453 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32404 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25385 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15663 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19856 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19033 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18655 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30364 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22758 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15124 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19374 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20230 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19929 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30399 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22266 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15434 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19395 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18661 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18293 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10907 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9949 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8902 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10374 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13093 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11240 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16000 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11436 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18891 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13843 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12482 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40998 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34732 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16884 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22161 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23191 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22060 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2183 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2017 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1318 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2006 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1914 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1863 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1789 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1955 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1250 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1674 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1638 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1572 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   118 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   185 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37809 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37127 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23525 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31309 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32320 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33239 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35900 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36061 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23530 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23891 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27943 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29683 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33424 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33444 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19348 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29642 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30458 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28599 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32599 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34213 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19797 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22520 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27296 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25318 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19625 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13759 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 11824 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16906 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17862 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13875 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24442 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 25974 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 14480 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20437 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20929 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18145 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36402 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42472 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21493 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 31736 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 39688 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 39897 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2755 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2923 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1618 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3960 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2930 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2511 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2678 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2860 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1372 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2116 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2162 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1880 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   159 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   243 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   105 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   156 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   167 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   151 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
