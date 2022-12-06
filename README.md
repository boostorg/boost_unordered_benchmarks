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
                  std::unordered_map: 32559 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 23524 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12939 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10152 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12795 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12374 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35880 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25951 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14659 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18169 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17790 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16592 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31195 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24115 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12270 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10150 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12433 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11405 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34319 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27104 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13954 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17617 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17482 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16240 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11408 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9892 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4957 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8035 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8765 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6118 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12188 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10177 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5123 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8158 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8831 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6472 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31742 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 26188 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 10893 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 16122 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14684 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12187 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28534 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21509 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12282 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14080 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13545 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11631 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27971 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20302 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11902 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25344 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14085 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12069 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   702 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   816 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   616 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   610 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   539 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37225 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 27933 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 15000 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13599 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 16200 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 15993 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39247 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26734 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14723 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18564 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18922 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17845 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35382 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 27909 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 13728 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 13116 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15882 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14761 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35960 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27461 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13702 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18262 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18572 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17011 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13066 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10760 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  5353 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8397 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9882 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6691 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14900 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11167 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5838 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8553 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 10396 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7382 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34555 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 28886 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 11120 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 16453 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 16342 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 13093 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32174 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24261 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12802 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16944 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16971 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14462 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29372 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23499 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 13048 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26777 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17014 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14652 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1419 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1023 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   897 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   888 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   982 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   646 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 39980 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 41547 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 27291 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17835 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30580 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31535 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38391 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39210 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24398 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23684 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30544 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31198 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35965 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 42080 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 24998 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17498 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 31470 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29928 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35285 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39381 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22082 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22468 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30855 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28738 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22589 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 20202 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11528 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13454 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18012 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13321 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 27792 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 20125 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13194 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 12271 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19441 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15868 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30707 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42278 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16331 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 21113 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30507 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27223 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36037 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 43230 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26298 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27895 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43878 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36514 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33923 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39936 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23076 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43271 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33896 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27410 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1269 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2678 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1763 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1158 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2478 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2322 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 16419 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14821 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7518 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7376 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8835 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  8147 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 22039 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16747 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  9187 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 11395 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 10003 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9438 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14251 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13474 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6404 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6676 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8532 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7629 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20255 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15648 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7872 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10553 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8980 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8133 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7945 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4693 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2120 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4140 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3759 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2568 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7760 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5114 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2117 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3656 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4037 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3145 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15199 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12532 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4118 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7682 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5907 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  5060 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 21942 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 24650 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 17676 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 23997 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 23572 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 23233 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29519 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 27646 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 18240 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 35918 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20314 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 21957 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   988 ms,      5192 bytes in 114 allocations
        boost::unordered_map:  1576 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1345 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1322 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:  1151 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:  1171 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31655 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23197 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15858 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25852 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17470 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 17152 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35029 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26416 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17552 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20198 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18220 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18080 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28940 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23245 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15452 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 25111 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17272 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16664 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32802 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26708 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16805 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19896 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17884 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17167 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11587 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11720 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9079 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12948 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14298 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12130 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 18558 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11368 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18018 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15414 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13492 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35326 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 31482 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16670 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 21305 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20801 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19190 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2016 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1980 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1867 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1589 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1492 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1805 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1870 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1234 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1499 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1463 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1366 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   162 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   141 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36678 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25230 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 18225 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22673 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22367 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22335 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36651 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28313 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17408 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22896 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20714 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20319 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31374 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23481 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15515 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 20171 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20708 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20420 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31299 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22983 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15757 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20187 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19019 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18762 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10982 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9981 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8876 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10475 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13269 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11469 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17499 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12161 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20539 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14873 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13369 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 43714 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 36960 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 18086 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 24071 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 24765 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 23603 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2194 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2079 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1372 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2087 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1979 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1862 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1842 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2008 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1285 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1695 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1667 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1635 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   131 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   188 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37595 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 38328 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 26042 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31555 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 33204 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34382 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36042 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35880 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23834 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24017 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28204 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29805 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33237 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35329 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 22180 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29647 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31407 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29250 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32529 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34102 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21912 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22703 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27286 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25081 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20033 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 16562 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10086 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 17911 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18093 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13851 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25856 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26465 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12584 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 21805 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21685 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19843 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35992 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42091 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22240 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 32796 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 39965 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 39972 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2651 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3155 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1742 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3979 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2992 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2686 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2676 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2932 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1454 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2120 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2226 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1885 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   170 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   219 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:    95 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   184 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   164 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
