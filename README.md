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
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  191 + 1015 = 1206 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  177 +  943 = 1120 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  177 +  957 = 1134 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  199 + 1058 = 1257 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  194 + 1031 = 1225 ms
                                   std::hash<std::string> : n=786433, m=7, c=141786, q=524775,  169 +  832 = 1001 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141786, q=524775,  163 +  767 =  930 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  154 +  663 =  817 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  165 +  790 =  955 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  160 +  735 =  895 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  162 +  785 =  947 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  163 +  775 =  938 ms

```
<!--gcc-x64/unordered.cpp.txt-->

<!--gcc-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 12318 ms
                     std::hash: 11506 ms
                    fnv1a_hash: 14137 ms
                    absl::Hash:  9603 ms
 ankerl::unordered_dense::hash:  8090 ms
                   mulxp1_hash:  9957 ms
                   mulxp3_hash:  9182 ms
                 mulxp1_hash32: 11148 ms
                 mulxp3_hash32: 10271 ms
```
<!--gcc-x64/unordered_flat.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12266 ms
                     std::hash: 12731 ms
                    fnv1a_hash: 11792 ms
                    absl::Hash: 10870 ms
 ankerl::unordered_dense::hash: 10887 ms
                   mulxp1_hash: 11109 ms
                   mulxp3_hash: 11097 ms
                 mulxp1_hash32: 12319 ms
                 mulxp3_hash32: 11640 ms
```
<!--gcc-x64/word_count.cpp.txt-->

### Clang 12, x64
<!--clang-x64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  188 + 1022 = 1210 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  180 +  984 = 1164 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  175 +  974 = 1149 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  188 + 1040 = 1228 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  195 + 1038 = 1233 ms
                                   std::hash<std::string> : n=786433, m=7, c=141786, q=524775,  171 +  836 = 1007 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141746, q=524775,  165 +  806 =  971 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  155 +  742 =  897 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  167 +  846 = 1013 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  161 +  789 =  950 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  171 +  854 = 1025 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  168 +  860 = 1028 ms

```
<!--clang-x64/unordered.cpp.txt-->

<!--clang-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 14139 ms
                     std::hash: 13182 ms
                    fnv1a_hash: 13971 ms
                    absl::Hash: 11973 ms
 ankerl::unordered_dense::hash: 10552 ms
                   mulxp1_hash: 12128 ms
                   mulxp3_hash: 11596 ms
                 mulxp1_hash32: 13457 ms
                 mulxp3_hash32: 12950 ms
```
<!--clang-x64/unordered_flat.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12539 ms
                     std::hash: 13454 ms
                    fnv1a_hash: 12760 ms
                    absl::Hash: 12274 ms
 ankerl::unordered_dense::hash: 12844 ms
                   mulxp1_hash: 11858 ms
                   mulxp3_hash: 13116 ms
                 mulxp1_hash32: 13100 ms
                 mulxp3_hash32: 13395 ms
```
<!--clang-x64/word_count.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  370 + 1503 = 1873 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  348 + 1438 = 1786 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  338 + 1385 = 1723 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  337 + 1458 = 1795 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  336 + 1455 = 1791 ms
                                   std::hash<std::string> : n=786433, m=7, c=141361, q=524775,  344 + 1466 = 1810 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141433, q=524775,  337 + 1385 = 1722 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  341 + 1160 = 1501 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  327 + 1286 = 1613 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  331 + 1195 = 1526 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  314 + 1286 = 1600 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  318 + 1251 = 1569 ms

```
<!--vs-x64/unordered.cpp.txt-->

<!--vs-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 23588 ms
                     std::hash: 24070 ms
                    fnv1a_hash: 24483 ms
                    absl::Hash: 23217 ms
 ankerl::unordered_dense::hash: 17514 ms
                   mulxp1_hash: 20970 ms
                   mulxp3_hash: 19589 ms
                 mulxp1_hash32: 21453 ms
                 mulxp3_hash32: 20653 ms
```
<!--vs-x64/unordered_flat.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 24190 ms
                     std::hash: 22544 ms
                    fnv1a_hash: 22875 ms
                    absl::Hash: 25872 ms
 ankerl::unordered_dense::hash: 24943 ms
                   mulxp1_hash: 25705 ms
                   mulxp3_hash: 26010 ms
                 mulxp1_hash32: 26483 ms
                 mulxp3_hash32: 25892 ms
```
<!--vs-x64/word_count.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  311 +  770 = 1081 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  132 +  611 =  743 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  195 +  720 =  915 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  329 +  709 = 1038 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  141 +  797 =  938 ms
                                   std::hash<std::string> : n=786433, m=8, c=141905, q=524775,  134 +  475 =  609 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141663, q=524775,  138 +  664 =  802 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  124 +  426 =  550 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  135 +  529 =  664 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  119 +  482 =  601 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  171 +  525 =  696 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  118 +  540 =  658 ms

```
<!--clang-arm64/unordered.cpp.txt-->

<!--clang-arm64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash:  9907 ms
                     std::hash:  6374 ms
                    fnv1a_hash:  8258 ms
                    absl::Hash:  6194 ms
 ankerl::unordered_dense::hash:  5520 ms
                   mulxp1_hash:  5863 ms
                   mulxp3_hash:  5894 ms
                 mulxp1_hash32:  6550 ms
                 mulxp3_hash32:  6211 ms
```
<!--clang-arm64/unordered_flat.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 46075 ms
                     std::hash: 37471 ms
                    fnv1a_hash: 44928 ms
                    absl::Hash: 18304 ms
 ankerl::unordered_dense::hash: 24907 ms
                   mulxp1_hash: 19720 ms
                   mulxp3_hash: 32591 ms
                 mulxp1_hash32: 21390 ms
                 mulxp3_hash32: 22327 ms
```
<!--clang-arm64/word_count.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  210 +  897 = 1107 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  183 +  828 = 1011 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  193 +  893 = 1086 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  199 +  931 = 1130 ms
                                 boost::hash<std::string> : n=786433, m=7, c=142125, q=524775,  195 +  894 = 1089 ms
                                   std::hash<std::string> : n=786433, m=8, c=141678, q=524775,  183 +  769 =  952 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141656, q=524775,  192 +  875 = 1067 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  195 +  941 = 1136 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  211 + 1121 = 1332 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  199 +  992 = 1191 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  180 +  809 =  989 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  177 +  746 =  923 ms

```
<!--gcc-x86/unordered.cpp.txt-->

<!--gcc-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 15636 ms
                     std::hash: 15632 ms
                    fnv1a_hash: 17387 ms
                    absl::Hash: 17088 ms
 ankerl::unordered_dense::hash: 17668 ms
                   mulxp1_hash: 20396 ms
                   mulxp3_hash: 18208 ms
                 mulxp1_hash32: 15496 ms
                 mulxp3_hash32: 13127 ms
```
<!--gcc-x86/unordered_flat.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1347 ms
                     std::hash:  1420 ms
                    fnv1a_hash:  1222 ms
                    absl::Hash:  1346 ms
 ankerl::unordered_dense::hash:  1503 ms
                   mulxp1_hash:  1847 ms
                   mulxp3_hash:  1758 ms
                 mulxp1_hash32:  1326 ms
                 mulxp3_hash32:  1294 ms
```
<!--gcc-x86/word_count.cpp.txt-->

### Clang 12, x86
<!--clang-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  210 +  867 = 1077 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  179 +  876 = 1055 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  189 + 1011 = 1200 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  190 +  894 = 1084 ms
                                 boost::hash<std::string> : n=786433, m=7, c=142125, q=524775,  192 +  902 = 1094 ms
                                   std::hash<std::string> : n=786433, m=8, c=141678, q=524775,  178 +  853 = 1031 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=8, c=141674, q=524775,  197 + 1034 = 1231 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  185 +  883 = 1068 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  205 + 1130 = 1335 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  191 + 1024 = 1215 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  177 +  879 = 1056 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  179 +  857 = 1036 ms

```
<!--clang-x86/unordered.cpp.txt-->

<!--clang-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 16790 ms
                     std::hash: 15344 ms
                    fnv1a_hash: 16055 ms
                    absl::Hash: 19628 ms
 ankerl::unordered_dense::hash: 17608 ms
                   mulxp1_hash: 21133 ms
                   mulxp3_hash: 19232 ms
                 mulxp1_hash32: 15675 ms
                 mulxp3_hash32: 16294 ms
```
<!--clang-x86/unordered_flat.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1353 ms
                     std::hash:  1418 ms
                    fnv1a_hash:  1277 ms
                    absl::Hash:  1593 ms
 ankerl::unordered_dense::hash:  1650 ms
                   mulxp1_hash:  2008 ms
                   mulxp3_hash:  1920 ms
                 mulxp1_hash32:  1388 ms
                 mulxp3_hash32:  1482 ms
```
<!--clang-x86/word_count.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  331 + 1581 = 1912 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  358 + 1529 = 1887 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  362 + 1705 = 2067 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  342 + 1540 = 1882 ms
                                 boost::hash<std::string> : n=786433, m=7, c=142125, q=524775,  336 + 1621 = 1957 ms
                                   std::hash<std::string> : n=786433, m=8, c=141524, q=524775,  338 + 1601 = 1939 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141605, q=524775,  361 + 1682 = 2043 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  407 + 1985 = 2392 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  381 + 1892 = 2273 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  362 + 1808 = 2170 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  316 + 1538 = 1854 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  330 + 1526 = 1856 ms

```
<!--vs-x86/unordered.cpp.txt-->

<!--vs-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 24309 ms
                     std::hash: 23719 ms
                    fnv1a_hash: 23683 ms
                    absl::Hash: 27095 ms
 ankerl::unordered_dense::hash: 32869 ms
                   mulxp1_hash: 29102 ms
                   mulxp3_hash: 28953 ms
                 mulxp1_hash32: 24547 ms
                 mulxp3_hash32: 22325 ms
```
<!--vs-x86/unordered_flat.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1614 ms
                     std::hash:  1393 ms
                    fnv1a_hash:  1410 ms
                    absl::Hash:  2036 ms
 ankerl::unordered_dense::hash:  3315 ms
                   mulxp1_hash:  2409 ms
                   mulxp3_hash:  2607 ms
                 mulxp1_hash32:  1725 ms
                 mulxp3_hash32:  1640 ms
```
<!--vs-x86/word_count.cpp.txt-->
