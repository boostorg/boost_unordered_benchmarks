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
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  191 + 1013 = 1204 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  177 +  941 = 1118 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  176 +  953 = 1129 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  199 + 1054 = 1253 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  194 + 1029 = 1223 ms
                                   std::hash<std::string> : n=786433, m=7, c=141786, q=524775,  169 +  831 = 1000 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141786, q=524775,  163 +  761 =  924 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  154 +  660 =  814 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  165 +  788 =  953 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  160 +  734 =  894 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  162 +  784 =  946 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  162 +  776 =  938 ms

```
<!--gcc-x64/unordered.cpp.txt-->

<!--gcc-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 12252 ms
                     std::hash: 11533 ms
                    fnv1a_hash: 14101 ms
                    absl::Hash:  9599 ms
 ankerl::unordered_dense::hash:  8154 ms
                   mulxp1_hash:  9975 ms
                   mulxp3_hash:  9137 ms
                 mulxp1_hash32: 11154 ms
                 mulxp3_hash32: 10298 ms
```
<!--gcc-x64/unordered_flat.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12242 ms
                     std::hash: 12727 ms
                    fnv1a_hash: 11817 ms
                    absl::Hash: 10864 ms
 ankerl::unordered_dense::hash: 10872 ms
                   mulxp1_hash: 11123 ms
                   mulxp3_hash: 11084 ms
                 mulxp1_hash32: 12357 ms
                 mulxp3_hash32: 11634 ms
```
<!--gcc-x64/word_count.cpp.txt-->

### Clang 12, x64
<!--clang-x64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  188 + 1020 = 1208 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  180 +  990 = 1170 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  175 +  974 = 1149 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  188 + 1041 = 1229 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  195 + 1038 = 1233 ms
                                   std::hash<std::string> : n=786433, m=7, c=141786, q=524775,  171 +  836 = 1007 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141746, q=524775,  165 +  809 =  974 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  155 +  744 =  899 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  168 +  846 = 1014 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  162 +  791 =  953 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  171 +  855 = 1026 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  169 +  861 = 1030 ms

```
<!--clang-x64/unordered.cpp.txt-->

<!--clang-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 12556 ms
                     std::hash: 11447 ms
                    fnv1a_hash: 12352 ms
                    absl::Hash: 10303 ms
 ankerl::unordered_dense::hash:  9122 ms
                   mulxp1_hash: 10477 ms
                   mulxp3_hash:  9960 ms
                 mulxp1_hash32: 11763 ms
                 mulxp3_hash32: 11196 ms
```
<!--clang-x64/unordered_flat.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12856 ms
                     std::hash: 13824 ms
                    fnv1a_hash: 13054 ms
                    absl::Hash: 12611 ms
 ankerl::unordered_dense::hash: 13160 ms
                   mulxp1_hash: 12151 ms
                   mulxp3_hash: 13415 ms
                 mulxp1_hash32: 13435 ms
                 mulxp3_hash32: 13733 ms
```
<!--clang-x64/word_count.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  384 + 1462 = 1846 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  341 + 1390 = 1731 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  348 + 1393 = 1741 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  336 + 1460 = 1796 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  335 + 1445 = 1780 ms
                                   std::hash<std::string> : n=786433, m=7, c=141361, q=524775,  384 + 1442 = 1826 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=8, c=141698, q=524775,  337 + 1358 = 1695 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  343 + 1102 = 1445 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  316 + 1269 = 1585 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  339 + 1160 = 1499 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  317 + 1328 = 1645 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  316 + 1270 = 1586 ms

```
<!--vs-x64/unordered.cpp.txt-->

<!--vs-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 23533 ms
                     std::hash: 23839 ms
                    fnv1a_hash: 23908 ms
                    absl::Hash: 22932 ms
 ankerl::unordered_dense::hash: 17826 ms
                   mulxp1_hash: 20828 ms
                   mulxp3_hash: 19522 ms
                 mulxp1_hash32: 21592 ms
                 mulxp3_hash32: 20295 ms
```
<!--vs-x64/unordered_flat.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 26223 ms
                     std::hash: 24327 ms
                    fnv1a_hash: 24380 ms
                    absl::Hash: 26999 ms
 ankerl::unordered_dense::hash: 25455 ms
                   mulxp1_hash: 26040 ms
                   mulxp3_hash: 26097 ms
                 mulxp1_hash32: 26316 ms
                 mulxp3_hash32: 26201 ms
```
<!--vs-x64/word_count.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  147 +  645 =  792 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  129 +  550 =  679 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  120 +  561 =  681 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  136 +  675 =  811 ms
                                 boost::hash<std::string> : n=786433, m=8, c=141759, q=524775,  134 +  598 =  732 ms
                                   std::hash<std::string> : n=786433, m=8, c=141905, q=524775,  113 +  472 =  585 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=8, c=141584, q=524775,  125 +  524 =  649 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  119 +  440 =  559 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  123 +  532 =  655 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  117 +  480 =  597 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  124 +  517 =  641 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  123 +  532 =  655 ms

```
<!--clang-arm64/unordered.cpp.txt-->

<!--clang-arm64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash:  7146 ms
                     std::hash:  5708 ms
                    fnv1a_hash:  8097 ms
                    absl::Hash:  6202 ms
 ankerl::unordered_dense::hash:  5475 ms
                   mulxp1_hash:  5987 ms
                   mulxp3_hash:  5950 ms
                 mulxp1_hash32:  6467 ms
                 mulxp3_hash32:  5953 ms
```
<!--clang-arm64/unordered_flat.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  7685 ms
                     std::hash:  7508 ms
                    fnv1a_hash:  7767 ms
                    absl::Hash:  7758 ms
 ankerl::unordered_dense::hash:  7850 ms
                   mulxp1_hash:  7568 ms
                   mulxp3_hash:  8186 ms
                 mulxp1_hash32:  7956 ms
                 mulxp3_hash32:  8450 ms
```
<!--clang-arm64/word_count.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  211 +  898 = 1109 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  183 +  828 = 1011 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  193 +  894 = 1087 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  206 +  928 = 1134 ms
                                 boost::hash<std::string> : n=786433, m=7, c=142125, q=524775,  194 +  892 = 1086 ms
                                   std::hash<std::string> : n=786433, m=8, c=141678, q=524775,  182 +  766 =  948 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141656, q=524775,  192 +  872 = 1064 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  196 +  939 = 1135 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  211 + 1113 = 1324 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  199 +  991 = 1190 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  179 +  808 =  987 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  177 +  751 =  928 ms

```
<!--gcc-x86/unordered.cpp.txt-->

<!--gcc-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 15694 ms
                     std::hash: 15521 ms
                    fnv1a_hash: 17431 ms
                    absl::Hash: 17150 ms
 ankerl::unordered_dense::hash: 17588 ms
                   mulxp1_hash: 20450 ms
                   mulxp3_hash: 18215 ms
                 mulxp1_hash32: 15479 ms
                 mulxp3_hash32: 13251 ms
```
<!--gcc-x86/unordered_flat.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1347 ms
                     std::hash:  1470 ms
                    fnv1a_hash:  1222 ms
                    absl::Hash:  1349 ms
 ankerl::unordered_dense::hash:  1499 ms
                   mulxp1_hash:  1848 ms
                   mulxp3_hash:  1765 ms
                 mulxp1_hash32:  1327 ms
                 mulxp3_hash32:  1296 ms
```
<!--gcc-x86/word_count.cpp.txt-->

### Clang 12, x86
<!--clang-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  211 +  868 = 1079 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  179 +  876 = 1055 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  189 + 1010 = 1199 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  192 +  895 = 1087 ms
                                 boost::hash<std::string> : n=786433, m=7, c=142125, q=524775,  192 +  900 = 1092 ms
                                   std::hash<std::string> : n=786433, m=8, c=141678, q=524775,  177 +  852 = 1029 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=8, c=141674, q=524775,  196 + 1033 = 1229 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  185 +  881 = 1066 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  205 + 1129 = 1334 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  191 + 1025 = 1216 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  177 +  876 = 1053 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  179 +  855 = 1034 ms

```
<!--clang-x86/unordered.cpp.txt-->

<!--clang-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 16787 ms
                     std::hash: 15308 ms
                    fnv1a_hash: 15984 ms
                    absl::Hash: 19656 ms
 ankerl::unordered_dense::hash: 17603 ms
                   mulxp1_hash: 21076 ms
                   mulxp3_hash: 19283 ms
                 mulxp1_hash32: 15720 ms
                 mulxp3_hash32: 16299 ms
```
<!--clang-x86/unordered_flat.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1352 ms
                     std::hash:  1417 ms
                    fnv1a_hash:  1276 ms
                    absl::Hash:  1598 ms
 ankerl::unordered_dense::hash:  1645 ms
                   mulxp1_hash:  2020 ms
                   mulxp3_hash:  1917 ms
                 mulxp1_hash32:  1387 ms
                 mulxp3_hash32:  1480 ms
```
<!--clang-x86/word_count.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  349 + 1603 = 1952 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  340 + 1571 = 1911 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  370 + 1713 = 2083 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  339 + 1580 = 1919 ms
                                 boost::hash<std::string> : n=786433, m=7, c=142125, q=524775,  363 + 1584 = 1947 ms
                                   std::hash<std::string> : n=786433, m=8, c=141524, q=524775,  356 + 1613 = 1969 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141464, q=524775,  351 + 1715 = 2066 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  409 + 2010 = 2419 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  362 + 1898 = 2260 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  376 + 1813 = 2189 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  319 + 1565 = 1884 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  323 + 1519 = 1842 ms

```
<!--vs-x86/unordered.cpp.txt-->

<!--vs-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 24269 ms
                     std::hash: 23940 ms
                    fnv1a_hash: 23933 ms
                    absl::Hash: 27316 ms
 ankerl::unordered_dense::hash: 32944 ms
                   mulxp1_hash: 29509 ms
                   mulxp3_hash: 29128 ms
                 mulxp1_hash32: 24497 ms
                 mulxp3_hash32: 22125 ms
```
<!--vs-x86/unordered_flat.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1649 ms
                     std::hash:  1439 ms
                    fnv1a_hash:  1396 ms
                    absl::Hash:  1949 ms
 ankerl::unordered_dense::hash:  3322 ms
                   mulxp1_hash:  2461 ms
                   mulxp3_hash:  2606 ms
                 mulxp1_hash32:  1713 ms
                 mulxp3_hash32:  1669 ms
```
<!--vs-x86/word_count.cpp.txt-->
