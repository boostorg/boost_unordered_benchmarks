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
                  std::unordered_map: 31369 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22763 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12245 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9337 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12131 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11717 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34939 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25155 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13928 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17561 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17247 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16236 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30201 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23293 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11586 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9214 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11785 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10771 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33546 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26254 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13130 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17031 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16936 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15698 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10613 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9210 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4476 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4480 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4562 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4302 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4446 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7407 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8255 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5615 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 11449 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map:  9592 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4632 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4948 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4956 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4771 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4886 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7312 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  8471 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  5842 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 27345 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 22891 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9020 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9032 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9050 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8797 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8778 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 13788 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 12838 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 10693 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28265 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21279 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12147 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14035 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13484 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11530 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27779 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20270 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11743 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25788 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13935 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11924 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
            boost::unordered_map:   692 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   804 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   605 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   601 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   570 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   564 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   580 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   595 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   508 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32285 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24790 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12562 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11632 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14293 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14113 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34310 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23613 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12240 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16494 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16805 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15978 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34289 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 27213 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12807 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12414 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15357 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14365 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34799 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26598 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12876 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17509 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18027 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16723 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 12289 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map: 10207 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4882 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4885 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  5024 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4730 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4897 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7937 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  9443 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  6334 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 12919 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map:  9602 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4773 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  5071 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  5091 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4920 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  5045 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7007 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  8822 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  6353 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 29996 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 25370 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9358 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9360 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9337 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  9127 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  9129 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 14162 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 14451 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 11755 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31273 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23522 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12534 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16573 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16426 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13964 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28565 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22755 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12821 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26487 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16533 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14355 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1453 ms,      3728 bytes in 114 allocations
            boost::unordered_map:  1015 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   956 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   705 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   707 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   676 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   715 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   876 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   978 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   656 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37862 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39847 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 25635 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17463 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30029 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30457 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38023 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38774 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23988 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24455 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30483 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31620 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35034 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 40561 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 23951 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17496 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 29844 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 28827 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35033 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38928 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21831 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22489 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30633 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28460 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 21012 ms, 278138072 bytes in 5996682 allocations
            boost::unordered_map: 14867 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 10757 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11655 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8894 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11674 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 11654 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12710 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 17168 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map: 12882 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 25231 ms, 326217760 bytes in 6000002 allocations
            boost::unordered_map: 19244 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12546 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 13160 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11434 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 12706 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 12596 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 12009 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 18694 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map: 15514 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 29825 ms, 374217768 bytes in 6000002 allocations
            boost::unordered_map: 40190 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 15576 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 15904 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 15568 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 15487 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 15784 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 19837 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 29781 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 26515 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33573 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 40443 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25254 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28438 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43949 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36633 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34345 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 40084 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23384 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44191 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34078 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27562 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1269 ms,     11840 bytes in 115 allocations
            boost::unordered_map:  2586 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  1780 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1690 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1657 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1651 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1649 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1097 ms,      4304 bytes in 2 allocations
             absl::node_hash_map:  2515 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:  2202 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15826 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14424 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7170 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7272 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8549 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7884 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21318 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16345 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8442 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10855 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9318 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9130 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14166 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13459 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6262 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6743 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8062 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7574 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20290 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15692 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7955 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10551 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9038 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8355 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map:  8454 ms, 196600184 bytes in 5996681 allocations
            boost::unordered_map:  5257 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  2399 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2318 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2326 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2292 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2510 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  4590 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  4057 ms, 123470912 bytes in 5996681 allocations
             absl::flat_hash_map:  2687 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map:  7797 ms, 244679864 bytes in 6000001 allocations
            boost::unordered_map:  5073 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  2099 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2175 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2154 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2216 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2243 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  3756 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  4023 ms, 171497472 bytes in 6000001 allocations
             absl::flat_hash_map:  3140 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 15184 ms, 292679864 bytes in 6000001 allocations
            boost::unordered_map: 12518 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4045 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4055 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4241 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4000 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4098 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map:  7582 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map:  5911 ms, 219497472 bytes in 6000001 allocations
             absl::flat_hash_map:  4933 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34300 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 29713 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 18335 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 22551 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 21558 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 19897 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29053 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 27254 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 18945 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 49114 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25706 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 21710 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1005 ms,      5192 bytes in 114 allocations
            boost::unordered_map:  1658 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  1387 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1177 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1137 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1147 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1074 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1268 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:  1099 ms,      4112 bytes in 114 allocations
             absl::flat_hash_map:  1154 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30693 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22678 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15555 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25124 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17086 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16850 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34355 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25451 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17326 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19628 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18002 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17776 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28504 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22788 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15220 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24597 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17047 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16431 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32480 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26134 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16628 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19443 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17552 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16981 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10883 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map: 11222 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8613 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8534 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8590 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8609 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8532 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12156 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13771 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11679 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 17884 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 10803 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10513 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10495 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 10584 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10404 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 15097 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 15109 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 12913 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 33772 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 30846 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16432 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16306 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16373 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16254 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16298 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 20566 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 20224 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 18829 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1980 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1987 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1851 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1572 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1478 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1800 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1862 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1229 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1496 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1446 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1357 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   105 ms,       932 bytes in 59 allocations
            boost::unordered_map:   110 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   121 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   127 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   137 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35494 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24410 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17961 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21732 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 21839 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 21951 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35442 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27374 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17040 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22011 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20401 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19860 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30279 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22709 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15124 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19373 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20316 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19905 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30308 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22269 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15478 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19317 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18655 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18308 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10961 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map:  9976 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8713 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8610 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8708 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8906 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8756 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 10309 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13186 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11307 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 16101 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 11313 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10895 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10974 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11076 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10847 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 19000 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 13779 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 11854 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 41008 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 34801 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16963 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16944 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16883 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16813 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16834 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 22170 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 23172 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 22040 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2207 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2043 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1358 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2024 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1967 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1854 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1824 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1980 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1276 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1669 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1652 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1588 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   107 ms,       932 bytes in 59 allocations
            boost::unordered_map:   151 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   129 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   129 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   130 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   119 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   128 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38944 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 38328 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 26545 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 32153 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 33069 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34718 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36981 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36804 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24100 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24394 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 29360 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30806 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33980 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 36070 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 22747 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 30085 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30774 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28741 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33152 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34256 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19941 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23222 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27013 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24982 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 19798 ms, 163055760 bytes in 5996682 allocations
            boost::unordered_map: 13837 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 10118 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11867 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11610 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11872 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10721 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 16982 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 17718 ms,  89916492 bytes in 5996681 allocations
             absl::flat_hash_map: 13708 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 24721 ms, 211108888 bytes in 6000002 allocations
            boost::unordered_map: 26483 ms, 172311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12895 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 15261 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 15196 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 14646 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 13751 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 20928 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 20685 ms, 137943052 bytes in 6000001 allocations
             absl::flat_hash_map: 18646 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 36721 ms, 259108896 bytes in 6000002 allocations
            boost::unordered_map: 43216 ms, 220311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 21715 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 22384 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 22216 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 21548 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 22213 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 32703 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 39899 ms, 185943052 bytes in 6000001 allocations
             absl::flat_hash_map: 40801 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2707 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3044 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1625 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3855 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2994 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2445 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2662 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2767 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1398 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2068 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2199 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1876 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   157 ms,      1456 bytes in 60 allocations
            boost::unordered_map:   224 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   118 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   117 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   113 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   118 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   119 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   155 ms,      1528 bytes in 2 allocations
             absl::node_hash_map:   158 ms,      1116 bytes in 59 allocations
             absl::flat_hash_map:   177 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
