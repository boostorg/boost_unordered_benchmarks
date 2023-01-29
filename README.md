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
                  std::unordered_map: 31442 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22883 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12280 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9375 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12174 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11726 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35077 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25193 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13995 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17641 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17187 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16188 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30305 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23400 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11574 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9187 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11792 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10778 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33747 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25929 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13123 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17086 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16617 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15829 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10567 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9148 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4598 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7442 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8258 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5656 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11457 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9571 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4888 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7329 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8244 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6020 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27452 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22953 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  8970 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13897 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12930 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10810 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28068 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21135 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12095 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13964 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13152 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11395 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27220 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 19830 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11626 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24934 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13647 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11842 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1293 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   694 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   536 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   587 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   592 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   509 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32022 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24734 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12513 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11609 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14284 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14035 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34214 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23566 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12204 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16483 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16813 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15941 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31245 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25062 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11706 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11331 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14120 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13235 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31766 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24585 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11598 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16067 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16637 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15391 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11087 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9214 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4485 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7187 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8530 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5813 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12904 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9620 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5089 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7049 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8930 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6376 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29918 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25177 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9026 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14180 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14375 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11604 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31090 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23371 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12527 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16500 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 15982 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13912 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28359 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22572 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12810 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26295 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16351 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14192 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1416 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1017 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   623 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   873 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   977 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   655 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 39640 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39534 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24390 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17846 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30574 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31446 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38552 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38791 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24395 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24625 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30877 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31548 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36620 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39078 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21958 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 18355 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30866 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29814 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35379 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39228 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22076 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23147 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30885 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28704 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22423 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15804 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11874 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13131 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18061 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13186 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 27871 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 20521 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13279 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 12162 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19166 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 16007 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31246 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42016 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16046 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 19473 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30708 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26708 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36501 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 43680 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26324 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27799 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43201 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35793 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34016 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39585 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23218 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44050 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34049 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27264 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1320 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2631 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1642 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1144 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2590 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2241 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15680 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14206 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7086 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7274 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8562 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7793 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21106 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16138 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8145 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10779 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9987 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9377 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14143 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13475 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6296 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6529 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8423 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7455 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20204 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15651 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7869 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10499 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8918 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8204 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7725 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4696 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2169 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4090 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3570 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2482 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7780 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5140 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2315 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3619 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4079 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3111 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15158 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12377 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4066 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7552 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6090 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4862 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16997 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15110 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7382 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10975 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9293 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8497 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16266 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14376 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7669 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24225 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8699 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7850 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   512 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   606 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   274 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   396 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   271 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   314 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30766 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22771 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15576 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24515 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16973 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16891 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34540 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25457 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17222 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19582 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17911 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17814 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28414 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22740 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15152 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 23225 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16903 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16460 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32366 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25974 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16351 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19315 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17597 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17017 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10861 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11166 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8856 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12173 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13741 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11669 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17760 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10696 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17193 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14972 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13327 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33795 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30880 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16023 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20592 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20277 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18747 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2022 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1979 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1332 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1831 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1587 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1485 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1801 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1868 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1264 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1502 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1453 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1372 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   125 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   162 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   143 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32399 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22720 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16727 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20022 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20551 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20616 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32435 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25373 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16012 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20253 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19121 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18645 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30482 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22854 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15249 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19568 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20361 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20033 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30522 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22382 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15528 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19579 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18800 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18493 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10910 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9947 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8761 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10259 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13105 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11219 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15976 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11121 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18837 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13820 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12572 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40938 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34804 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16794 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22196 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23199 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22021 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2140 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2032 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1324 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2005 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1906 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1856 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1772 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1947 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1247 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1663 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1630 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1578 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
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
                  std::unordered_map: 35417 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35400 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 22811 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31187 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31253 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 32301 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35434 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35654 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23110 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23636 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27590 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29021 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35342 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35280 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 20187 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29695 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31706 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29563 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33319 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34615 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19930 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22706 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27777 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25735 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19684 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13995 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10800 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16978 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18153 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13883 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24747 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26306 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 13825 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20780 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21390 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18005 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36201 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43008 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22704 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 32616 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40120 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40499 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2739 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3067 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1660 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3897 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2910 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2492 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2595 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2792 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1413 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2110 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2250 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1837 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   158 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   217 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   109 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   152 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   165 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   157 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
