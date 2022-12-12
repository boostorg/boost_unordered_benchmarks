# Boost.ContainerHash benchmarks

## Benchmarks

Aggregated benchmarks simulating real-life scenarios, provided as part
of Boost.ContainerHash [source code](https://github.com/boostorg/container_hash/tree/develop/benchmark).

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
<!--gcc-x64/unordered.cpp.txt-->
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
<!--gcc-x64/unordered.cpp.txt-->

<!--gcc-x64/unordered_flat.cpp.txt-->
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
<!--gcc-x64/unordered_flat.cpp.txt-->

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

### Clang 12, x64
<!--clang-x64/unordered.cpp.txt-->
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
<!--clang-x64/unordered.cpp.txt-->

<!--clang-x64/unordered_flat.cpp.txt-->
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
<!--clang-x64/unordered_flat.cpp.txt-->

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

### Visual Studio 2019, x64
<!--vs-x64/unordered.cpp.txt-->
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
<!--vs-x64/unordered.cpp.txt-->

<!--vs-x64/unordered_flat.cpp.txt-->
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
<!--vs-x64/unordered_flat.cpp.txt-->

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

### Clang 12, ARM64
<!--clang-arm64/unordered.cpp.txt-->
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
<!--clang-arm64/unordered.cpp.txt-->

<!--clang-arm64/unordered_flat.cpp.txt-->
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
<!--clang-arm64/unordered_flat.cpp.txt-->

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

### GCC 11, x86
<!--gcc-x86/unordered.cpp.txt-->
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
<!--gcc-x86/unordered.cpp.txt-->

<!--gcc-x86/unordered_flat.cpp.txt-->
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
<!--gcc-x86/unordered_flat.cpp.txt-->

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

### Clang 12, x86
<!--clang-x86/unordered.cpp.txt-->
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
<!--clang-x86/unordered.cpp.txt-->

<!--clang-x86/unordered_flat.cpp.txt-->
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
<!--clang-x86/unordered_flat.cpp.txt-->

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

### Visual Studio 2019, x86
<!--vs-x86/unordered.cpp.txt-->
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
<!--vs-x86/unordered.cpp.txt-->

<!--vs-x86/unordered_flat.cpp.txt-->
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
<!--vs-x86/unordered_flat.cpp.txt-->

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
