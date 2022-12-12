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
unordered_flat.cpp
                   boost::hash: 12235 ms
                     std::hash: 11515 ms
                    fnv1a_hash: 14065 ms
                    absl::Hash:  9635 ms
 ankerl::unordered_dense::hash:  8075 ms
                   mulxp1_hash: 10002 ms
                   mulxp3_hash:  9144 ms
                 mulxp1_hash32: 11159 ms
                 mulxp3_hash32: 10275 ms
```
<!--gcc-x64/unordered_flat.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12272 ms
                     std::hash: 12736 ms
                    fnv1a_hash: 11814 ms
                    absl::Hash: 10864 ms
 ankerl::unordered_dense::hash: 10889 ms
                   mulxp1_hash: 11116 ms
                   mulxp3_hash: 11089 ms
                 mulxp1_hash32: 12338 ms
                 mulxp3_hash32: 11658 ms
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
unordered_flat.cpp
                   boost::hash: 12603 ms
                     std::hash: 11482 ms
                    fnv1a_hash: 12398 ms
                    absl::Hash: 10319 ms
 ankerl::unordered_dense::hash:  9150 ms
                   mulxp1_hash: 10564 ms
                   mulxp3_hash: 10016 ms
                 mulxp1_hash32: 11778 ms
                 mulxp3_hash32: 11266 ms
```
<!--clang-x64/unordered_flat.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12864 ms
                     std::hash: 13777 ms
                    fnv1a_hash: 13098 ms
                    absl::Hash: 12615 ms
 ankerl::unordered_dense::hash: 13162 ms
                   mulxp1_hash: 12161 ms
                   mulxp3_hash: 13414 ms
                 mulxp1_hash32: 13415 ms
                 mulxp3_hash32: 13718 ms
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
unordered_flat.cpp
                   boost::hash: 23329 ms
                     std::hash: 24094 ms
                    fnv1a_hash: 24011 ms
                    absl::Hash: 22638 ms
 ankerl::unordered_dense::hash: 17736 ms
                   mulxp1_hash: 20488 ms
                   mulxp3_hash: 19281 ms
                 mulxp1_hash32: 21667 ms
                 mulxp3_hash32: 20269 ms
```
<!--vs-x64/unordered_flat.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 24703 ms
                     std::hash: 22934 ms
                    fnv1a_hash: 23830 ms
                    absl::Hash: 27149 ms
 ankerl::unordered_dense::hash: 24995 ms
                   mulxp1_hash: 25980 ms
                   mulxp3_hash: 25570 ms
                 mulxp1_hash32: 26706 ms
                 mulxp3_hash32: 25991 ms
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
unordered_flat.cpp
                   boost::hash:  7869 ms
                     std::hash:  6498 ms
                    fnv1a_hash:  9454 ms
                    absl::Hash:  7319 ms
 ankerl::unordered_dense::hash:  6103 ms
                   mulxp1_hash:  6428 ms
                   mulxp3_hash:  6689 ms
                 mulxp1_hash32:  7266 ms
                 mulxp3_hash32:  6937 ms
```
<!--clang-arm64/unordered_flat.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 35773 ms
                     std::hash: 44701 ms
                    fnv1a_hash: 17543 ms
                    absl::Hash: 20672 ms
 ankerl::unordered_dense::hash: 19947 ms
                   mulxp1_hash: 21069 ms
                   mulxp3_hash: 20179 ms
                 mulxp1_hash32: 18799 ms
                 mulxp3_hash32: 19847 ms
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
unordered_flat.cpp
                   boost::hash: 15719 ms
                     std::hash: 15657 ms
                    fnv1a_hash: 17439 ms
                    absl::Hash: 17103 ms
 ankerl::unordered_dense::hash: 17555 ms
                   mulxp1_hash: 20399 ms
                   mulxp3_hash: 18174 ms
                 mulxp1_hash32: 15520 ms
                 mulxp3_hash32: 13169 ms
```
<!--gcc-x86/unordered_flat.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1349 ms
                     std::hash:  1419 ms
                    fnv1a_hash:  1222 ms
                    absl::Hash:  1352 ms
 ankerl::unordered_dense::hash:  1506 ms
                   mulxp1_hash:  1849 ms
                   mulxp3_hash:  1766 ms
                 mulxp1_hash32:  1326 ms
                 mulxp3_hash32:  1295 ms
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
unordered_flat.cpp
                   boost::hash: 16703 ms
                     std::hash: 15428 ms
                    fnv1a_hash: 16129 ms
                    absl::Hash: 19636 ms
 ankerl::unordered_dense::hash: 17617 ms
                   mulxp1_hash: 21065 ms
                   mulxp3_hash: 19171 ms
                 mulxp1_hash32: 15740 ms
                 mulxp3_hash32: 16214 ms
```
<!--clang-x86/unordered_flat.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1353 ms
                     std::hash:  1419 ms
                    fnv1a_hash:  1277 ms
                    absl::Hash:  1593 ms
 ankerl::unordered_dense::hash:  1651 ms
                   mulxp1_hash:  2025 ms
                   mulxp3_hash:  1923 ms
                 mulxp1_hash32:  1389 ms
                 mulxp3_hash32:  1481 ms
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
unordered_flat.cpp
                   boost::hash: 23603 ms
                     std::hash: 24014 ms
                    fnv1a_hash: 23990 ms
                    absl::Hash: 27152 ms
 ankerl::unordered_dense::hash: 32546 ms
                   mulxp1_hash: 29231 ms
                   mulxp3_hash: 29036 ms
                 mulxp1_hash32: 24401 ms
                 mulxp3_hash32: 21824 ms
```
<!--vs-x86/unordered_flat.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1585 ms
                     std::hash:  1377 ms
                    fnv1a_hash:  1418 ms
                    absl::Hash:  1968 ms
 ankerl::unordered_dense::hash:  3376 ms
                   mulxp1_hash:  2438 ms
                   mulxp3_hash:  2589 ms
                 mulxp1_hash32:  1742 ms
                 mulxp3_hash32:  1659 ms
```
<!--vs-x86/word_count.cpp.txt-->
