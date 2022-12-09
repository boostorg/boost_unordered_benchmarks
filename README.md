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
                  std::unordered_map: 32131 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24703 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12542 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11565 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14273 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14114 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34112 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23695 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12193 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16352 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16782 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15945 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30999 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24867 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11615 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11251 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14040 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13151 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31516 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24547 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11609 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16218 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16626 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15378 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 12149 ms, 192888392 bytes in 5996681 allocations
           boost::unordered_map: 10144 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  4845 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4690 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map:  7817 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map:  9366 ms, 123470920 bytes in 5996681 allocations
            absl::flat_hash_map:  6268 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 12932 ms, 240941512 bytes in 6000001 allocations
           boost::unordered_map:  9619 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  4797 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4942 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map:  7030 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map:  8821 ms, 171497480 bytes in 6000001 allocations
            absl::flat_hash_map:  6326 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29928 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25398 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9275 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14139 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14442 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11637 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32220 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24246 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12861 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16904 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16986 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14490 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29576 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23541 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 13170 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 28104 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16977 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14615 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:  1419 ms,      3728 bytes in 114 allocations
           boost::unordered_map:  1011 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:   908 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   673 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:   869 ms,      4096 bytes in 2 allocations
            absl::node_hash_map:   977 ms,      4120 bytes in 114 allocations
            absl::flat_hash_map:   632 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38248 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 40018 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 26293 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17414 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30220 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30928 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38036 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39043 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24104 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23661 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30578 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31319 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36161 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 41823 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 25313 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17220 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30996 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29851 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35377 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39069 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22434 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22494 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30367 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28471 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 22618 ms, 278138072 bytes in 5996682 allocations
           boost::unordered_map: 20072 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx: 11460 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx: 11844 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 12925 ms, 130888368 bytes in 2 allocations
            absl::node_hash_map: 18323 ms, 123470920 bytes in 5996681 allocations
            absl::flat_hash_map: 13357 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 26630 ms, 326217760 bytes in 6000002 allocations
           boost::unordered_map: 20337 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 12831 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 13418 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 12341 ms, 194667872 bytes in 2 allocations
            absl::node_hash_map: 19583 ms, 171497480 bytes in 6000001 allocations
            absl::flat_hash_map: 15741 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 31177 ms, 374217768 bytes in 6000002 allocations
           boost::unordered_map: 43187 ms, 245477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 16446 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 16367 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 21321 ms, 258447376 bytes in 2 allocations
            absl::node_hash_map: 30759 ms, 219497480 bytes in 6000001 allocations
            absl::flat_hash_map: 27657 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36657 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 44154 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26933 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27985 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43387 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36290 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33974 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39851 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23745 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43001 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34326 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27348 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:  1349 ms,     11840 bytes in 115 allocations
           boost::unordered_map:  2596 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:  1758 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:  1685 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:  1136 ms,      4304 bytes in 2 allocations
            absl::node_hash_map:  2568 ms,      4120 bytes in 114 allocations
            absl::flat_hash_map:  2229 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15838 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14275 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7422 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7124 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8423 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7942 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21214 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16196 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8308 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10738 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9315 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8909 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14327 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13555 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6398 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6645 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8422 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7690 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20441 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15974 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8168 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10913 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9355 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8335 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map:  7933 ms, 196600184 bytes in 5996681 allocations
           boost::unordered_map:  4683 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  2148 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  2139 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map:  4299 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map:  4372 ms, 123470912 bytes in 5996681 allocations
            absl::flat_hash_map:  2710 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map:  7800 ms, 244679864 bytes in 6000001 allocations
           boost::unordered_map:  5122 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  2083 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx:  2183 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map:  3740 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map:  4045 ms, 171497472 bytes in 6000001 allocations
            absl::flat_hash_map:  3195 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 15179 ms, 292679864 bytes in 6000001 allocations
           boost::unordered_map: 12514 ms, 245477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  4163 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4204 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map:  7639 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map:  5935 ms, 219497472 bytes in 6000001 allocations
            absl::flat_hash_map:  4904 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 20943 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 20939 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12221 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16064 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 15889 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 18514 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24969 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23939 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 14854 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 32348 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17876 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 16819 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   983 ms,      5192 bytes in 114 allocations
           boost::unordered_map:  1544 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:  1427 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:  1151 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:  1353 ms,      4096 bytes in 2 allocations
            absl::node_hash_map:  1206 ms,      4112 bytes in 114 allocations
            absl::flat_hash_map:  1264 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30845 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22821 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15657 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25314 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17154 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16953 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34566 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25680 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17362 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19741 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17959 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17776 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28500 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22798 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15166 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24655 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16950 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16383 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32435 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26206 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16587 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19401 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17654 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16933 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 10942 ms, 120430916 bytes in 5996681 allocations
           boost::unordered_map: 11271 ms, 100271784 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  8640 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  8635 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 12232 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map: 13812 ms,  89916484 bytes in 5996681 allocations
            absl::flat_hash_map: 11753 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
           boost::unordered_map: 17743 ms, 148311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 10756 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 10469 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 14925 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map: 15210 ms, 137943044 bytes in 6000001 allocations
            absl::flat_hash_map: 12754 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 33959 ms, 216470756 bytes in 6000001 allocations
           boost::unordered_map: 30861 ms, 196311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 16133 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 16067 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 20621 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map: 20217 ms, 185943044 bytes in 6000001 allocations
            absl::flat_hash_map: 18756 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2007 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1976 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1351 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1844 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1573 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1492 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1798 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1864 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1232 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1497 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1463 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1362 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   108 ms,       932 bytes in 59 allocations
           boost::unordered_map:   111 ms,      1152 bytes in 60 allocations
 boost::unordered_flat_map, xmx:   132 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   117 ms,      1096 bytes in 1 allocations
   ankerl::unordered_dense::map:   172 ms,      1536 bytes in 2 allocations
            absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
            absl::flat_hash_map:   137 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32209 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22620 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16795 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 19941 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20501 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20624 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32294 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25350 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15881 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20185 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19006 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18735 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33613 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 24842 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 16333 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21362 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 21852 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 21451 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33545 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24300 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16701 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21291 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20063 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19747 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 11066 ms, 120430916 bytes in 5996681 allocations
           boost::unordered_map:  9974 ms, 100271784 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  8681 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  8875 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 10354 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map: 13200 ms,  89916484 bytes in 5996681 allocations
            absl::flat_hash_map: 11325 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
           boost::unordered_map: 15973 ms, 148311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 11249 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 11053 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 18957 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map: 13720 ms, 137943044 bytes in 6000001 allocations
            absl::flat_hash_map: 11661 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 40947 ms, 216470756 bytes in 6000001 allocations
           boost::unordered_map: 34735 ms, 196311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 16859 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 16847 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 22208 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map: 23112 ms, 185943044 bytes in 6000001 allocations
            absl::flat_hash_map: 22061 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2209 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2047 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1358 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2071 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1969 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1845 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1814 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1982 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1273 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1674 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1618 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   107 ms,       932 bytes in 59 allocations
           boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
 boost::unordered_flat_map, xmx:   129 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   118 ms,      1096 bytes in 1 allocations
   ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
            absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
            absl::flat_hash_map:   129 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38075 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 38032 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 26388 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31984 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 33125 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34366 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36209 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36149 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23860 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24172 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28811 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30288 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33056 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35511 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 22504 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 30281 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31210 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29262 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32515 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34006 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22063 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22777 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27169 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25389 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 20365 ms, 163055760 bytes in 5996682 allocations
           boost::unordered_map: 17086 ms, 100271784 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx: 10088 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx: 11972 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 18217 ms, 130888368 bytes in 2 allocations
            absl::node_hash_map: 18309 ms,  89916492 bytes in 5996681 allocations
            absl::flat_hash_map: 13879 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 25768 ms, 211108888 bytes in 6000002 allocations
           boost::unordered_map: 26292 ms, 172311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 12783 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 14683 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 21851 ms, 194667872 bytes in 2 allocations
            absl::node_hash_map: 22066 ms, 137943052 bytes in 6000001 allocations
            absl::flat_hash_map: 20180 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 36589 ms, 259108896 bytes in 6000002 allocations
           boost::unordered_map: 43115 ms, 220311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 22225 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 22382 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 33218 ms, 258447376 bytes in 2 allocations
            absl::node_hash_map: 40859 ms, 185943052 bytes in 6000001 allocations
            absl::flat_hash_map: 41018 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2669 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3242 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1678 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  4073 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2989 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2621 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2692 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2960 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1480 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2122 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2218 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1922 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   158 ms,      1456 bytes in 60 allocations
           boost::unordered_map:   237 ms,      1152 bytes in 60 allocations
 boost::unordered_flat_map, xmx:    91 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx:    95 ms,      1096 bytes in 1 allocations
   ankerl::unordered_dense::map:   175 ms,      1528 bytes in 2 allocations
            absl::node_hash_map:   155 ms,      1116 bytes in 59 allocations
            absl::flat_hash_map:   152 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
