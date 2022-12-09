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
                  std::unordered_map: 31523 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22951 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12337 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9398 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12202 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11815 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35150 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25333 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13999 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17679 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17241 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16168 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30208 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23306 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11656 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9315 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11793 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10778 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33568 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26253 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13216 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16985 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16956 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15732 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 10605 ms, 192888392 bytes in 5996681 allocations
           boost::unordered_map:  9221 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  4465 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4297 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map:  7420 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map:  8317 ms, 123470920 bytes in 5996681 allocations
            absl::flat_hash_map:  5601 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 11493 ms, 240941512 bytes in 6000001 allocations
           boost::unordered_map:  9619 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  4609 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4799 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map:  7333 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map:  8313 ms, 171497480 bytes in 6000001 allocations
            absl::flat_hash_map:  5973 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 27277 ms, 288941512 bytes in 6000001 allocations
           boost::unordered_map: 23118 ms, 245477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  9089 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx:  8851 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 13856 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map: 12931 ms, 219497480 bytes in 6000001 allocations
            absl::flat_hash_map: 10792 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28281 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21340 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12176 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13944 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13450 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11530 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27629 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20093 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11739 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25138 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13968 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11968 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:  1306 ms,      3728 bytes in 114 allocations
           boost::unordered_map:   694 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:   806 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   568 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:   577 ms,      4096 bytes in 2 allocations
            absl::node_hash_map:   589 ms,      4120 bytes in 114 allocations
            absl::flat_hash_map:   509 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32107 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24698 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12518 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11569 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14230 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14080 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34159 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23702 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12221 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16422 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16772 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15925 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31138 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25000 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11699 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11302 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14129 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13217 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31661 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24633 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11633 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16278 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16664 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15430 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 12030 ms, 192888392 bytes in 5996681 allocations
           boost::unordered_map: 10098 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  4847 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4675 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map:  7756 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map:  9343 ms, 123470920 bytes in 5996681 allocations
            absl::flat_hash_map:  6231 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 12966 ms, 240941512 bytes in 6000001 allocations
           boost::unordered_map:  9674 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  4804 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4967 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map:  7069 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map:  8834 ms, 171497480 bytes in 6000001 allocations
            absl::flat_hash_map:  6320 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 29990 ms, 288941512 bytes in 6000001 allocations
           boost::unordered_map: 25500 ms, 245477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  9320 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx:  9073 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 14202 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map: 14473 ms, 219497480 bytes in 6000001 allocations
            absl::flat_hash_map: 11705 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31382 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23545 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12512 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16470 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16519 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14093 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28529 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22713 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12789 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27575 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16577 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14280 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:  1419 ms,      3728 bytes in 114 allocations
           boost::unordered_map:  1010 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:   908 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   671 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:   869 ms,      4096 bytes in 2 allocations
            absl::node_hash_map:   977 ms,      4120 bytes in 114 allocations
            absl::flat_hash_map:   633 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38382 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39919 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 26330 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17584 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 29963 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30900 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37926 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39428 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24438 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24281 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30963 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31372 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34893 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 40299 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 24159 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16679 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30121 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29344 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34850 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39088 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22044 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22417 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30202 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28110 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 20995 ms, 278138072 bytes in 5996682 allocations
           boost::unordered_map: 18921 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx: 10939 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx: 11777 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 12957 ms, 130888368 bytes in 2 allocations
            absl::node_hash_map: 17275 ms, 123470920 bytes in 5996681 allocations
            absl::flat_hash_map: 13106 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 25161 ms, 326217760 bytes in 6000002 allocations
           boost::unordered_map: 19619 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 12740 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 12816 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 12180 ms, 194667872 bytes in 2 allocations
            absl::node_hash_map: 18643 ms, 171497480 bytes in 6000001 allocations
            absl::flat_hash_map: 15064 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 29093 ms, 374217768 bytes in 6000002 allocations
           boost::unordered_map: 40724 ms, 245477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 15644 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 16265 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 20295 ms, 258447376 bytes in 2 allocations
            absl::node_hash_map: 29824 ms, 219497480 bytes in 6000001 allocations
            absl::flat_hash_map: 26683 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33858 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 41738 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26287 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27986 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 44194 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36433 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34272 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39929 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23735 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43580 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34433 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27484 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:  1388 ms,     11840 bytes in 115 allocations
           boost::unordered_map:  2670 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:  1899 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:  1666 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:  1149 ms,      4304 bytes in 2 allocations
            absl::node_hash_map:  2620 ms,      4120 bytes in 114 allocations
            absl::flat_hash_map:  2226 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15840 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14324 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7134 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7216 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8575 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  8294 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21098 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16138 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8254 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10671 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9263 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8729 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14153 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13475 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6289 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6742 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8243 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7500 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20143 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15677 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7934 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10533 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9087 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8195 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map:  7740 ms, 196600184 bytes in 5996681 allocations
           boost::unordered_map:  4752 ms, 149424400 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  2055 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  2081 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map:  4025 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map:  3703 ms, 123470912 bytes in 5996681 allocations
            absl::flat_hash_map:  2592 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map:  7751 ms, 244679864 bytes in 6000001 allocations
           boost::unordered_map:  5095 ms, 197477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  2131 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx:  2257 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map:  3693 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map:  4035 ms, 171497472 bytes in 6000001 allocations
            absl::flat_hash_map:  3164 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 16100 ms, 292679864 bytes in 6000001 allocations
           boost::unordered_map: 13286 ms, 245477520 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx:  4295 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx:  4217 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map:  7965 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map:  6297 ms, 219497472 bytes in 6000001 allocations
            absl::flat_hash_map:  5217 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33255 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 30489 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 18748 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 22348 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 22098 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 20291 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29257 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 29750 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 20147 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 36497 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 21596 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 22201 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:  2634 ms,      5192 bytes in 114 allocations
           boost::unordered_map:  1572 ms,      4392 bytes in 115 allocations
 boost::unordered_flat_map, xmx:  1408 ms,      4096 bytes in 1 allocations
boost::unordered_flat_map, mulx:  1177 ms,      4096 bytes in 1 allocations
   ankerl::unordered_dense::map:  1260 ms,      4096 bytes in 2 allocations
            absl::node_hash_map:  1123 ms,      4112 bytes in 114 allocations
            absl::flat_hash_map:  1124 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30990 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22827 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15689 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25304 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17207 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16961 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34587 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25603 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17355 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19658 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17912 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17837 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28368 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22710 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15226 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24421 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17035 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16380 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32316 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25991 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16498 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19333 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17595 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16962 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 10938 ms, 120430916 bytes in 5996681 allocations
           boost::unordered_map: 11272 ms, 100271784 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  8703 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  8673 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 12220 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map: 13895 ms,  89916484 bytes in 5996681 allocations
            absl::flat_hash_map: 11754 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
           boost::unordered_map: 17821 ms, 148311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 10803 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 10558 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 15006 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map: 15324 ms, 137943044 bytes in 6000001 allocations
            absl::flat_hash_map: 12808 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 34097 ms, 216470756 bytes in 6000001 allocations
           boost::unordered_map: 31005 ms, 196311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 16187 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 16131 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 20646 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map: 20315 ms, 185943044 bytes in 6000001 allocations
            absl::flat_hash_map: 18709 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2018 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1978 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1845 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1586 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1481 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1800 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1865 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1234 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1502 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1456 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1362 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   108 ms,       932 bytes in 59 allocations
           boost::unordered_map:   110 ms,      1152 bytes in 60 allocations
 boost::unordered_flat_map, xmx:   130 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   117 ms,      1096 bytes in 1 allocations
   ankerl::unordered_dense::map:   161 ms,      1536 bytes in 2 allocations
            absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
            absl::flat_hash_map:   140 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35395 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24473 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17906 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 21751 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 21754 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22104 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35447 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27410 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17047 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21977 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20340 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19991 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30314 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22701 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15161 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19358 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20290 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19959 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30338 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22330 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15458 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19358 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18714 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18291 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 11070 ms, 120430916 bytes in 5996681 allocations
           boost::unordered_map:  9980 ms, 100271784 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx:  8698 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx:  8888 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 10317 ms, 134217728 bytes in 2 allocations
            absl::node_hash_map: 13234 ms,  89916484 bytes in 5996681 allocations
            absl::flat_hash_map: 11364 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
           boost::unordered_map: 15971 ms, 148311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 11181 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 10991 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 18910 ms, 201326592 bytes in 2 allocations
            absl::node_hash_map: 13758 ms, 137943044 bytes in 6000001 allocations
            absl::flat_hash_map: 11672 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 40961 ms, 216470756 bytes in 6000001 allocations
           boost::unordered_map: 34663 ms, 196311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 16868 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 16836 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 22177 ms, 268435456 bytes in 2 allocations
            absl::node_hash_map: 23091 ms, 185943044 bytes in 6000001 allocations
            absl::flat_hash_map: 22005 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2173 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2056 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1358 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2036 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1985 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1851 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1815 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1986 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1274 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1676 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1620 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   107 ms,       932 bytes in 59 allocations
           boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
 boost::unordered_flat_map, xmx:   130 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx:   119 ms,      1096 bytes in 1 allocations
   ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
            absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
            absl::flat_hash_map:   131 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36903 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 38228 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 26091 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31697 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32856 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34264 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36074 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35918 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23626 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24179 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28708 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29893 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32840 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35135 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 22168 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29562 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31350 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28910 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32384 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 33971 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21818 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23020 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26978 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24873 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
             std::unordered_map: 21145 ms, 163055760 bytes in 5996682 allocations
           boost::unordered_map: 17010 ms, 100271784 bytes in 5996682 allocations
 boost::unordered_flat_map, xmx: 10485 ms,  71303176 bytes in 1 allocations
boost::unordered_flat_map, mulx: 11891 ms,  71303176 bytes in 1 allocations
   ankerl::unordered_dense::map: 17966 ms, 130888368 bytes in 2 allocations
            absl::node_hash_map: 18445 ms,  89916492 bytes in 5996681 allocations
            absl::flat_hash_map: 14287 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
             std::unordered_map: 25806 ms, 211108888 bytes in 6000002 allocations
           boost::unordered_map: 26253 ms, 172311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 12701 ms, 134217728 bytes in 1 allocations
boost::unordered_flat_map, mulx: 14507 ms, 134217728 bytes in 1 allocations
   ankerl::unordered_dense::map: 21945 ms, 194667872 bytes in 2 allocations
            absl::node_hash_map: 22227 ms, 137943052 bytes in 6000001 allocations
            absl::flat_hash_map: 19583 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
             std::unordered_map: 36676 ms, 259108896 bytes in 6000002 allocations
           boost::unordered_map: 41917 ms, 220311624 bytes in 6000002 allocations
 boost::unordered_flat_map, xmx: 21766 ms, 197132280 bytes in 1 allocations
boost::unordered_flat_map, mulx: 21801 ms, 197132280 bytes in 1 allocations
   ankerl::unordered_dense::map: 32301 ms, 258447376 bytes in 2 allocations
            absl::node_hash_map: 40672 ms, 185943052 bytes in 6000001 allocations
            absl::flat_hash_map: 40569 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2633 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3127 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1705 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  4017 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  3014 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2608 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2587 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2930 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1444 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2113 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2234 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1856 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
             std::unordered_map:   156 ms,      1456 bytes in 60 allocations
           boost::unordered_map:   223 ms,      1152 bytes in 60 allocations
 boost::unordered_flat_map, xmx:    90 ms,      1096 bytes in 1 allocations
boost::unordered_flat_map, mulx:    85 ms,      1096 bytes in 1 allocations
   ankerl::unordered_dense::map:   171 ms,      1528 bytes in 2 allocations
            absl::node_hash_map:   158 ms,      1116 bytes in 59 allocations
            absl::flat_hash_map:   154 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
