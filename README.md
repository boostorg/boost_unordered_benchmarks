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
                  std::unordered_map: 31361 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22864 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12315 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9334 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12094 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11759 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34935 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25150 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13982 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17568 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17157 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16177 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30191 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23325 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11589 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9314 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11785 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10779 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33586 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26272 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13188 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17025 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16980 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15765 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10602 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9196 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4452 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4464 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4553 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4312 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4430 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7383 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8326 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5646 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 11446 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map:  9637 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4639 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4917 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4976 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4774 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4930 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7312 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  8597 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  5959 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 27312 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 22942 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9083 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9070 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9090 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8834 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8858 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 13811 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 12856 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 10771 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28260 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21362 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12160 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13943 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13460 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11563 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27692 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20202 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11763 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25323 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13980 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11995 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1296 ms,      3728 bytes in 114 allocations
            boost::unordered_map:   698 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   811 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   611 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   607 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   578 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   572 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   595 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   599 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   523 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35675 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 26932 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 14009 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12795 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 15686 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 15371 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37733 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25734 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13846 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17750 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18263 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17313 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31149 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25006 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11752 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11298 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14114 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13226 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31672 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24621 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11631 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16285 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16729 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15424 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 11174 ms, 192888392 bytes in 5996681 allocations
            boost::unordered_map:  9245 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  4462 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4468 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4547 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4344 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4478 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  7071 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  8599 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map:  5772 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 12905 ms, 240941512 bytes in 6000001 allocations
            boost::unordered_map:  9584 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4772 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  5124 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  5127 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4943 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  5059 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  7040 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  8900 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map:  6341 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 30029 ms, 288941512 bytes in 6000001 allocations
            boost::unordered_map: 25523 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  9307 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9320 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9329 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  9086 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  9087 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 14176 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 14461 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 11706 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31265 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23518 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12519 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16469 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16507 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14111 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28474 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22681 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12753 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27588 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16526 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14281 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1452 ms,      3728 bytes in 114 allocations
            boost::unordered_map:  1012 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:   952 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   737 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   742 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   719 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   655 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:   871 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:   978 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:   629 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37758 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39502 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 26171 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17734 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 29683 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30927 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37832 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39099 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24336 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23536 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30660 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31311 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35519 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 40564 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 24113 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17141 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30410 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29212 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34818 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38897 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21996 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23251 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30631 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28740 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 21377 ms, 278138072 bytes in 5996682 allocations
            boost::unordered_map: 19113 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 10830 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11521 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8836 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11663 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 11351 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 12971 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 17549 ms, 123470920 bytes in 5996681 allocations
             absl::flat_hash_map: 12917 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 26298 ms, 326217760 bytes in 6000002 allocations
            boost::unordered_map: 19077 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12744 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 13523 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11535 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 13068 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 12762 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 11798 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 18925 ms, 171497480 bytes in 6000001 allocations
             absl::flat_hash_map: 15172 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 29345 ms, 374217768 bytes in 6000002 allocations
            boost::unordered_map: 41825 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16391 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 15673 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16481 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16122 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16197 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 20495 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 30499 ms, 219497480 bytes in 6000001 allocations
             absl::flat_hash_map: 27063 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 34735 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42319 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25865 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28184 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43460 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36215 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33665 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39665 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23532 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43044 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34127 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27407 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1385 ms,     11840 bytes in 115 allocations
            boost::unordered_map:  2600 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  2198 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2025 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1998 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1961 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2007 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1127 ms,      4304 bytes in 2 allocations
             absl::node_hash_map:  2598 ms,      4120 bytes in 114 allocations
             absl::flat_hash_map:  2243 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15758 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14260 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7152 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7185 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8509 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7942 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21079 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16222 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8211 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10762 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9235 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8901 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14835 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13974 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6694 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6913 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8931 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7991 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21379 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16285 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8381 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10947 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9391 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8685 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map:  7707 ms, 196600184 bytes in 5996681 allocations
            boost::unordered_map:  4650 ms, 149424400 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  2018 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1981 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2135 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2053 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2018 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map:  4066 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map:  3652 ms, 123470912 bytes in 5996681 allocations
             absl::flat_hash_map:  2559 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map:  7801 ms, 244679864 bytes in 6000001 allocations
            boost::unordered_map:  5101 ms, 197477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  2097 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  2159 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  2160 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  2232 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  2236 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map:  3742 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map:  4018 ms, 171497472 bytes in 6000001 allocations
             absl::flat_hash_map:  3058 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 15127 ms, 292679864 bytes in 6000001 allocations
            boost::unordered_map: 12510 ms, 245477520 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx:  4037 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  4173 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  4143 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  4088 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  4107 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map:  7630 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map:  5974 ms, 219497472 bytes in 6000001 allocations
             absl::flat_hash_map:  4940 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 24025 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 22333 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 13555 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16872 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 17001 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 15642 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 25607 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22917 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 14221 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 33422 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20388 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 21034 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:  1949 ms,      5192 bytes in 114 allocations
            boost::unordered_map:  1584 ms,      4392 bytes in 115 allocations
  boost::unordered_flat_map, xmx:  1489 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  1281 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  1287 ms,      4096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  1222 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  1207 ms,      4096 bytes in 1 allocations
    ankerl::unordered_dense::map:  1367 ms,      4096 bytes in 2 allocations
             absl::node_hash_map:  1196 ms,      4112 bytes in 114 allocations
             absl::flat_hash_map:  1191 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30912 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22847 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15590 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25316 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17189 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16977 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34580 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25609 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17390 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19710 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17939 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17811 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28394 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22708 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15252 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24429 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16977 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16430 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32350 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25996 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16474 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19298 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17622 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16918 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 11917 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map: 12261 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  9427 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  9304 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  9340 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  9304 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  9177 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 13311 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 14901 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 12575 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 17766 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 10817 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10367 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10401 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 10494 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10323 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 14989 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 15140 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 12692 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 33994 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 31058 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16513 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16404 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16402 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16353 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16351 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 20655 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 20169 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 18757 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2013 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2012 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1367 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1882 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1605 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1500 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1840 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1900 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1249 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1520 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1473 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1375 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   105 ms,       932 bytes in 59 allocations
            boost::unordered_map:   111 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   133 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   126 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   129 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   127 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   133 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35601 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24685 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17894 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21886 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22054 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22115 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35699 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27570 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17220 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22164 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20429 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20092 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30312 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22732 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15094 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19325 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20220 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19898 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30286 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22260 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15464 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19391 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18661 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18300 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 10984 ms, 120430916 bytes in 5996681 allocations
            boost::unordered_map:  9976 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx:  8720 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:  8608 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:  8658 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx:  8873 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2:  8761 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 10337 ms, 134217728 bytes in 2 allocations
             absl::node_hash_map: 13203 ms,  89916484 bytes in 5996681 allocations
             absl::flat_hash_map: 11352 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
            boost::unordered_map: 15978 ms, 148311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 11246 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 10878 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 10969 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11009 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 10793 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 18886 ms, 201326592 bytes in 2 allocations
             absl::node_hash_map: 13491 ms, 137943044 bytes in 6000001 allocations
             absl::flat_hash_map: 12003 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 40978 ms, 216470756 bytes in 6000001 allocations
            boost::unordered_map: 34816 ms, 196311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 16906 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 16852 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 16854 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 16810 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 16913 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 22385 ms, 268435456 bytes in 2 allocations
             absl::node_hash_map: 23216 ms, 185943044 bytes in 6000001 allocations
             absl::flat_hash_map: 22069 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2169 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2053 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1357 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2043 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1963 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1844 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1816 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1984 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1273 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1676 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1654 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1620 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   107 ms,       932 bytes in 59 allocations
            boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:   128 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:   130 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:   128 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:   118 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:   127 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
             absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
             absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37572 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37850 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 26290 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31768 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32450 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34495 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36382 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36078 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24069 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24468 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28502 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30307 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33018 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35182 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 22250 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 30175 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31545 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29516 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33016 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34289 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22049 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22670 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27512 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25510 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
              std::unordered_map: 20209 ms, 163055760 bytes in 5996682 allocations
            boost::unordered_map: 16335 ms, 100271784 bytes in 5996682 allocations
  boost::unordered_flat_map, xmx: 10251 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 11944 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 11679 ms,  71303176 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 11999 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 11070 ms,  71303176 bytes in 1 allocations
    ankerl::unordered_dense::map: 18010 ms, 130888368 bytes in 2 allocations
             absl::node_hash_map: 18071 ms,  89916492 bytes in 5996681 allocations
             absl::flat_hash_map: 14016 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
              std::unordered_map: 25898 ms, 211108888 bytes in 6000002 allocations
            boost::unordered_map: 26160 ms, 172311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 12616 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 14656 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 14440 ms, 134217728 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 14376 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 13565 ms, 134217728 bytes in 1 allocations
    ankerl::unordered_dense::map: 21589 ms, 194667872 bytes in 2 allocations
             absl::node_hash_map: 22007 ms, 137943052 bytes in 6000001 allocations
             absl::flat_hash_map: 19804 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
              std::unordered_map: 36550 ms, 259108896 bytes in 6000002 allocations
            boost::unordered_map: 42210 ms, 220311624 bytes in 6000002 allocations
  boost::unordered_flat_map, xmx: 21763 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx2: 21783 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, xmx3: 21677 ms, 197132280 bytes in 1 allocations
 boost::unordered_flat_map, mulx: 21684 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx2: 22225 ms, 197132280 bytes in 1 allocations
    ankerl::unordered_dense::map: 31936 ms, 258447376 bytes in 2 allocations
             absl::node_hash_map: 40661 ms, 185943052 bytes in 6000001 allocations
             absl::flat_hash_map: 40906 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2698 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3209 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1709 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3986 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  3103 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2664 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2732 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2864 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1523 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2117 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2211 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1869 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
              std::unordered_map:   166 ms,      1456 bytes in 60 allocations
            boost::unordered_map:   237 ms,      1152 bytes in 60 allocations
  boost::unordered_flat_map, xmx:    93 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx2:    93 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, xmx3:    88 ms,      1096 bytes in 1 allocations
 boost::unordered_flat_map, mulx:    89 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx2:    95 ms,      1096 bytes in 1 allocations
    ankerl::unordered_dense::map:   205 ms,      1528 bytes in 2 allocations
             absl::node_hash_map:   164 ms,      1116 bytes in 59 allocations
             absl::flat_hash_map:   145 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
