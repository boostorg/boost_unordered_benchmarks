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
                  std::unordered_map: 31239 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22874 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12206 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9362 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12110 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11768 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35033 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25103 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13892 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17620 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17173 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15868 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30276 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23356 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11701 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9188 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11779 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10779 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33681 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26036 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13131 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17032 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16968 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15824 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10576 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9174 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4443 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7452 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8282 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5661 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11455 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9576 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4788 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7327 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8254 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6006 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27409 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22810 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  8954 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13765 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12848 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10739 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28290 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21303 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12139 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14026 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13443 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11523 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27572 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20161 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11663 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25287 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13977 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11905 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1295 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   699 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   559 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   601 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   608 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   528 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36989 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 27009 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 14094 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12800 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 15665 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 15381 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37819 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25664 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13898 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17841 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18253 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17228 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31049 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24958 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11619 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11296 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14106 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13191 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31583 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24441 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11611 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16190 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16580 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15337 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11104 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9204 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4322 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7185 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8569 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5783 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12906 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9634 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4979 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7036 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8911 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6322 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29948 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25422 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9050 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14154 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14377 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11624 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31094 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23331 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12468 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16453 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 15889 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13862 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28400 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22625 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12918 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26084 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16317 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14193 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1417 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1008 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   629 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   875 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   980 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   655 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37872 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38274 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23301 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17409 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30331 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30237 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37973 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38625 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24175 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23591 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30426 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31005 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34770 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 37738 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 20956 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16717 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 29750 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28742 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35101 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38806 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21918 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22907 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30696 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28365 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20864 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14941 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11552 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12965 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17227 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12765 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25801 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 20480 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12653 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11744 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18162 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14845 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29568 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 39973 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 15501 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 19064 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30339 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27058 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34934 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 41169 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25310 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27925 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43832 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36478 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33564 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39368 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23367 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43889 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33707 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27138 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1402 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2575 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1631 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1190 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2554 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2214 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15715 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14232 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7089 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7292 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8498 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7817 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21011 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16124 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8119 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10835 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9849 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9341 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14183 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13454 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6323 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6594 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8326 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7518 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20228 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15692 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7887 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10535 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8963 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8162 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7769 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4734 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2167 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4067 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3649 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2587 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7752 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5104 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2262 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3616 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4032 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3107 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15121 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12404 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4058 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7552 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6120 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4872 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16852 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15033 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7435 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10949 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9347 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8438 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16282 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14377 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7673 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24209 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8681 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7898 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   475 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   604 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   276 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   271 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   315 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30780 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22782 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15568 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24799 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16959 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16902 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34506 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25545 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17325 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19536 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17878 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17772 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28393 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22716 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15067 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23191 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16912 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16469 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32281 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25970 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16461 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19285 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17574 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16965 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10850 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11162 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9016 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12126 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13749 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11739 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17700 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10914 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17318 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14861 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13223 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33707 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30948 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16035 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20595 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20259 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18666 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1956 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1951 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1330 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1829 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1540 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1475 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1764 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1838 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1247 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1496 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1431 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1348 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   125 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   135 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35526 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24495 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17953 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21901 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22050 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22184 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35580 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27578 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17108 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22097 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20426 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19983 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33056 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24566 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 16221 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21091 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 21714 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 21326 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33123 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23979 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16582 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21104 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19934 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19598 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10906 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9943 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8884 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10378 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13068 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11297 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15986 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11292 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18875 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13859 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12577 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41059 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34822 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16889 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22276 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23209 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22104 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2171 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2063 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1335 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2011 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1956 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1863 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1819 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1971 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1259 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1694 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1633 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1592 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   117 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   185 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37099 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36765 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23338 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31556 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31977 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33304 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35392 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35903 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23290 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23749 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28115 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29437 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33065 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33246 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19434 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29518 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30399 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28360 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32730 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34072 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19523 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22633 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27320 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24781 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20744 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13756 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 12104 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 17251 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18129 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 14079 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24418 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26643 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 14695 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20594 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21117 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18949 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35867 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43849 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21689 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 32273 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40211 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40283 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2673 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3003 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1645 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3901 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2895 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2497 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2679 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2890 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1416 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2068 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2179 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1839 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   223 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   129 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   161 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   180 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   177 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
