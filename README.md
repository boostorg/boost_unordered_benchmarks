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
                  std::unordered_map: 31366 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22762 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12267 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9364 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12097 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11738 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34938 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25132 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13939 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17566 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17159 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16108 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30198 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23292 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11605 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9217 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11769 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10765 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33560 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26247 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13186 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16945 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16954 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15712 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10594 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9192 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4469 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7307 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8236 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5659 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11461 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9608 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4611 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7313 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8274 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5994 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27342 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22769 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9039 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13771 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12814 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10758 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28308 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21324 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12159 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14084 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13483 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11535 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27748 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20291 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11743 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25923 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13951 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11938 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   694 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   807 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   590 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   595 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   515 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32114 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24722 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12539 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11547 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14242 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14066 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34184 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23525 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12185 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16413 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16705 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15907 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31004 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24899 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11600 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11246 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14062 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13174 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31516 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24420 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11599 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16172 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16667 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15344 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11171 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9280 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4502 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7126 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8618 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5802 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12973 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9677 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4800 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7041 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8944 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6324 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29987 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25513 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9301 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14203 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14391 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11718 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31332 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23524 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12545 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16599 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16405 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13960 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28525 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22734 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12793 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26511 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16505 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14352 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1416 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1015 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   887 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   860 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   979 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   625 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38167 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38300 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23129 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 18111 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30101 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30756 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37973 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38652 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23994 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24142 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30583 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31429 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34651 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 37981 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21019 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17471 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30000 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29067 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34942 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39117 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21947 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22552 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30343 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28262 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20983 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15139 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11107 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12729 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17291 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13049 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 26003 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19108 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12319 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11689 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18430 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15005 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33294 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42727 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16868 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 21174 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 31812 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 28330 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34015 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 39889 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25750 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28076 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 44148 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36713 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33579 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 40040 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23342 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44502 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34025 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27586 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1211 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2516 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1689 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1157 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2525 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2251 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 18779 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 18472 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map: 10348 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  9056 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map: 12011 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map: 12151 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24004 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16114 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8364 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10822 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9390 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8864 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14226 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13475 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6348 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6673 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8219 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7470 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20166 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15706 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7997 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10516 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8983 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8160 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7683 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4771 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2083 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4026 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3618 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2596 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  8683 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5976 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2513 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  4363 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4969 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3751 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15211 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12515 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4116 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7688 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6041 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4973 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 22984 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 24013 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 16012 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 20530 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 22769 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 35315 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33411 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 41952 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 31406 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 40830 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 50590 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 54435 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1535 ms,      5192 bytes in 114 allocations
        boost::unordered_map:  1563 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1315 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1388 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:  1134 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:  1191 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30901 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22814 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15582 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25299 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17112 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16963 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34578 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25611 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17338 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19739 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17973 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17809 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28523 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22780 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15266 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24605 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17100 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16499 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32439 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26143 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16618 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19465 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17670 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16996 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10915 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11200 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8612 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12109 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13814 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11740 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17693 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10861 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17440 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14908 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13244 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 37785 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33681 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 17374 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22388 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21876 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20044 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1977 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1986 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1844 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1585 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1484 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1798 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1864 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1229 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1497 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1458 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1358 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   133 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   136 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36723 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24652 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17902 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22017 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22028 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22264 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35789 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27706 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17170 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22213 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20536 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20117 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30314 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22715 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15102 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19353 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20324 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19958 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30272 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22281 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15447 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19381 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18650 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18303 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10956 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9977 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8735 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10310 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13085 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11300 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16025 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11264 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18932 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13845 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12619 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 44435 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 37257 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 18141 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 23883 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 24773 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 23500 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2206 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2061 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1359 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2061 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1965 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1853 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1818 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1977 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1274 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1669 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1654 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1588 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   130 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35436 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35611 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23111 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30982 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31546 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 32366 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36318 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35879 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23148 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23740 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27861 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29648 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32918 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33664 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19218 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29387 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30619 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28516 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32848 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34146 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19737 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22602 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26955 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24980 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19799 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 14079 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9796 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16929 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18021 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13942 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24556 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26153 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12677 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 21264 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21248 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18710 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35909 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42706 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21828 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 31534 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40136 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 41000 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2699 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3005 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1616 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3877 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2915 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2493 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2554 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2802 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1427 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2077 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2160 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1814 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   161 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   231 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   115 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   152 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   162 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   150 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
