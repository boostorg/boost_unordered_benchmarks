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
                  std::unordered_map: 31428 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22833 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12250 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9363 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12137 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11734 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35067 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25171 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13772 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17614 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17166 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16114 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30243 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23306 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11602 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9178 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11769 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10830 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33676 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26019 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13141 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16916 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16940 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15746 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10570 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9185 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4442 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7438 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8265 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5656 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11464 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9577 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4793 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7314 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8248 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5998 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27407 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22786 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  8935 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13782 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12849 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10765 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28276 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21284 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12121 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13894 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13493 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11393 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27549 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20120 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11621 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25232 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14020 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11793 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   692 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   543 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   586 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   595 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   511 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32172 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24439 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12587 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11583 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14234 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14008 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34208 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23530 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12222 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16424 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16792 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15996 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31086 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24950 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11555 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11272 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14093 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13171 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31603 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24465 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11617 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16226 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16651 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15378 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11102 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9233 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4346 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7201 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8537 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5801 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12911 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9640 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4974 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7041 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8902 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6353 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29938 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25188 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9006 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14199 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14410 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11404 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 30967 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23348 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12554 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16487 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16229 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13912 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28485 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22671 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12836 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25170 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16522 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14275 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1417 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1013 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   629 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   875 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   975 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   655 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37834 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38169 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23445 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17227 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 29710 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30208 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37677 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38431 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23971 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23487 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30502 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31193 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35164 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 38431 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 20950 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16510 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 29700 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28755 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34858 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39718 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21896 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22234 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30725 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28627 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20858 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14898 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11766 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12908 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17356 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12598 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25948 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18622 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13087 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11651 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18323 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15082 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29411 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 39930 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 15565 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18968 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 29644 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26238 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33234 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 40066 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25704 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27602 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43790 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36274 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33871 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39602 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23367 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44078 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33895 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27716 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1457 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2531 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1649 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1151 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2560 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2160 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15634 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14297 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7158 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7202 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8493 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7828 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21072 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16180 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8192 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10731 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9836 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9388 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14134 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13335 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6297 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6598 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8358 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7498 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20134 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15594 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7905 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10500 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8841 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8150 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7696 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4746 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2148 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4051 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3615 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2540 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7729 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5110 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2248 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3742 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4063 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3083 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15135 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12481 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4053 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7539 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6097 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4957 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 17006 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15053 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7421 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10933 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9350 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8456 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16235 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14387 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7683 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24212 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8696 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7858 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   500 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   607 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   275 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   393 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   312 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30787 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22769 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15622 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24786 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17025 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16875 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34532 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25452 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17262 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19228 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17964 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17808 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28527 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22855 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15058 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23401 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17015 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16425 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32532 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26200 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16516 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19370 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17655 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17015 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10876 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11163 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8937 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12101 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13825 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11785 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17702 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10661 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17087 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14808 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13265 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33665 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30914 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 15958 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20578 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20214 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18802 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2024 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1959 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1345 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1850 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1572 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1483 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1782 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1850 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1261 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1498 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1451 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1363 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   127 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   162 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   138 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32403 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22741 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16843 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20175 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20550 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20710 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32533 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25506 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15950 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20364 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19113 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18692 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30366 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22732 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15129 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19426 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20263 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20027 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30314 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22315 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15391 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19387 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18730 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18348 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10895 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9939 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8748 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10342 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13063 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11270 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16020 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11181 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18841 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13824 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12609 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41031 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34901 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16800 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22199 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23403 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22081 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2152 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2032 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1325 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2027 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1948 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1852 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1814 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1989 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1257 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1671 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1645 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1586 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   185 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35097 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35119 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 22585 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30885 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 30776 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 31918 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34908 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35455 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22778 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23588 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27560 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29383 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33866 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 34306 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19920 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29632 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30426 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28469 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32921 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34123 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19990 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23036 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26987 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24966 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19697 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13910 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10990 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 17209 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17847 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 14142 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24876 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26609 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 13908 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20929 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21121 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19139 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35887 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42742 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21988 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 32313 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 39825 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 39904 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2645 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2942 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1616 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3901 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2897 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2475 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2583 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2868 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1394 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2119 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2229 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1848 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   157 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   221 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   110 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   161 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   161 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   151 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
