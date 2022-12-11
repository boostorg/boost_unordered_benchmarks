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
                  std::unordered_map: 31530 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22852 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12297 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9397 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12186 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11762 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35372 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25239 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14012 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17624 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17267 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16201 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30357 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23417 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11668 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9262 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11821 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10793 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33766 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26387 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13234 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17105 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17041 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15855 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10616 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9222 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4475 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4478 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4555 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4305 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4446 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7356 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8321 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5607 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 11500 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map:  9626 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4632 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4922 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4952 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4790 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4908 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7321 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  8453 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  5799 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 27359 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 22901 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9075 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9081 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9109 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8853 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8838 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 13787 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 12835 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 10758 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28253 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21319 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12194 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14060 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13484 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11516 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27633 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20162 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11725 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24255 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14015 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11898 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1293 ms,      3728 bytes in 114 allocations
            boost::unordered_map:   687 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   804 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   598 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   590 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   543 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   533 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   644 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   592 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   509 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32083 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24689 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12560 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11563 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14212 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14032 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34151 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23476 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12220 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16415 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16808 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15958 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30998 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24896 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11614 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11241 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14058 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13159 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31529 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24410 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11576 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16215 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16621 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15328 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 11167 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9288 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4484 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4492 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4573 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4367 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4503 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7205 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8572 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5785 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 13881 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map: 10539 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  5311 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  5709 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  5746 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  5541 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  5653 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7684 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  9651 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  6939 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 29834 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 25427 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9228 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9216 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9260 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  9037 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  9034 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 14112 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 14428 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 11609 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31284 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23516 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12588 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16555 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16370 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13929 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28549 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22725 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12814 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25988 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16545 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14279 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1452 ms,      3728 bytes in 114 allocations
            boost::unordered_map:  1014 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   934 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   689 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   705 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   663 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   636 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   865 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   979 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   633 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40372 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39878 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24225 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17529 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30664 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31399 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38546 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39134 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24425 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23643 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 31063 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31188 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36468 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39658 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 22130 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17344 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 31252 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29620 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35687 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39996 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22186 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22332 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30740 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28955 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 22469 ms, 278138072 bytes in 5996682 allocations
            boost::unordered_map: 15684 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 11635 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 12044 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9182 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11973 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 11614 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12960 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 17982 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map: 13008 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 25402 ms, 326217760 bytes in 6000002 allocations
            boost::unordered_map: 19334 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12657 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 13343 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11133 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 13318 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 12891 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 11712 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 18257 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map: 15073 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 30437 ms, 374217768 bytes in 6000002 allocations
            boost::unordered_map: 42270 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16254 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16820 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16884 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16276 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 15768 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 19390 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 31047 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 27337 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35918 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42464 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25986 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28528 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43785 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36880 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34193 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 40305 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23286 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44207 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34151 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27895 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1296 ms,     11840 bytes in 115 allocations
            boost::unordered_map:  2534 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  1780 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1674 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1680 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1645 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1642 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1124 ms,      4304 bytes in 2 allocations
             absl::node_hash_map:  2562 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:  2271 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 18428 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14472 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7132 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7035 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8692 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7934 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21180 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16130 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8259 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10764 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9325 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8945 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14190 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13530 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6698 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6726 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8377 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7564 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20348 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15762 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8076 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10499 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9009 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8227 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map:  7743 ms, 196600184 bytes in 5996681 allocations
            boost::unordered_map:  4633 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  2028 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1960 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2025 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2017 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2023 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  4077 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  3688 ms, 123470912 bytes in 5996681 allocations
             absl::flat_hash_map:  2584 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map:  7868 ms, 244679864 bytes in 6000001 allocations
            boost::unordered_map:  5177 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  2139 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2179 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2152 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2271 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2363 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  3747 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  4130 ms, 171497472 bytes in 6000001 allocations
             absl::flat_hash_map:  3185 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 16695 ms, 292679864 bytes in 6000001 allocations
            boost::unordered_map: 12659 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4093 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4081 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4058 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4115 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4186 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map:  7626 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map:  5983 ms, 219497472 bytes in 6000001 allocations
             absl::flat_hash_map:  4923 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 52523 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 38432 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 21483 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 23128 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 33892 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 25690 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36466 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 46275 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 20763 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 38174 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 22166 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 21389 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  2285 ms,      5192 bytes in 114 allocations
            boost::unordered_map:  2593 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  2241 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2176 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1721 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1977 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1121 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1257 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:  1086 ms,      4112 bytes in 114 allocations
             absl::flat_hash_map:  1217 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30676 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22694 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15514 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25105 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17043 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16881 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34345 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25410 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17257 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19656 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17853 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17746 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28344 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22697 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15191 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24460 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16981 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16378 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32246 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26011 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16439 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19357 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17553 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17038 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10901 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map: 11216 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8646 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8572 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8643 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8693 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8571 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12149 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13756 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11663 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 17751 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 10773 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10381 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10459 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 10550 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10363 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 15083 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 15057 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 12846 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 33713 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 30890 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16353 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16323 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16370 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16324 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16248 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 20609 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 20260 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 18693 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2016 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1976 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1346 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1844 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1581 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1479 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1798 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1865 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1230 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1497 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1460 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1358 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   105 ms,       932 bytes in 59 allocations
            boost::unordered_map:   111 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   127 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   127 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   127 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   120 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   131 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   169 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   137 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32159 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22765 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16785 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20082 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20474 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20594 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32335 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25337 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15852 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20225 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18980 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18587 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30275 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22720 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15128 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19373 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20327 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20033 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30312 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22312 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15408 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19396 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18683 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18317 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 11023 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map: 10019 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8760 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8692 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8772 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8932 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8843 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 10342 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13201 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11385 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 15968 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 11277 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10854 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10959 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11002 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10826 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 18922 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 13699 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 11950 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 45202 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 37496 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 18293 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 18337 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 18242 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 18071 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 18205 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 24009 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 25012 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 23735 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2168 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2055 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1338 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2031 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1954 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1868 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1817 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1975 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1271 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1691 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1645 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1589 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   107 ms,       932 bytes in 59 allocations
            boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   129 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   127 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   129 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   118 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   126 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37856 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36897 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23889 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 32077 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32672 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34237 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36653 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36645 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23974 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23925 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28906 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30560 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33872 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 34127 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19726 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29827 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31485 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29312 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32834 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 33995 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19617 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22441 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26806 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24673 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 19820 ms, 163055760 bytes in 5996682 allocations
            boost::unordered_map: 13867 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  9739 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11746 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11552 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11865 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10724 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 16974 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 18204 ms,  89916492 bytes in 5996681 allocations
             absl::flat_hash_map: 13874 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 25189 ms, 211108888 bytes in 6000002 allocations
            boost::unordered_map: 26386 ms, 172311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12625 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 15068 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 15159 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 15406 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 13850 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 21595 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 21534 ms, 137943052 bytes in 6000001 allocations
             absl::flat_hash_map: 19382 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 35735 ms, 259108896 bytes in 6000002 allocations
            boost::unordered_map: 42640 ms, 220311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 21525 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 21543 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 21603 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 21577 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 21631 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 31950 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 40392 ms, 185943052 bytes in 6000001 allocations
             absl::flat_hash_map: 40204 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2642 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3006 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1595 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3840 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2908 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2486 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2650 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2836 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1398 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2131 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2228 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1812 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   156 ms,      1456 bytes in 60 allocations
            boost::unordered_map:   228 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   125 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   117 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   114 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   107 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   118 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   164 ms,      1528 bytes in 2 allocations
             absl::node_hash_map:   157 ms,      1116 bytes in 59 allocations
             absl::flat_hash_map:   151 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
