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
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  192 + 1017 = 1209 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  178 +  944 = 1122 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  176 +  956 = 1132 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  199 + 1058 = 1257 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141767, q=524775,  165 +  809 =  974 ms
                                   std::hash<std::string> : n=786433, m=7, c=141786, q=524775,  170 +  833 = 1003 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141786, q=524775,  162 +  735 =  897 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  154 +  660 =  814 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  165 +  794 =  959 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  161 +  738 =  899 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  163 +  787 =  950 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  162 +  777 =  939 ms

```
<!--gcc-x64/unordered.cpp.txt-->

<!--gcc-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash:  9861 ms
                     std::hash: 11648 ms
                    fnv1a_hash: 14082 ms
                    absl::Hash:  9474 ms
 ankerl::unordered_dense::hash:  8111 ms
                   mulxp1_hash:  9966 ms
                   mulxp3_hash:  9182 ms
                 mulxp1_hash32: 11209 ms
                 mulxp3_hash32: 10293 ms
```
<!--gcc-x64/unordered_flat.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 11035 ms
                     std::hash: 12609 ms
                    fnv1a_hash: 11670 ms
                    absl::Hash: 10615 ms
 ankerl::unordered_dense::hash: 10788 ms
                   mulxp1_hash: 10960 ms
                   mulxp3_hash: 11089 ms
                 mulxp1_hash32: 12212 ms
                 mulxp3_hash32: 11681 ms
```
<!--gcc-x64/word_count.cpp.txt-->

### Clang 12, x64
<!--clang-x64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  188 + 1024 = 1212 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  179 +  985 = 1164 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  176 +  975 = 1151 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  189 + 1041 = 1230 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141767, q=524775,  166 +  832 =  998 ms
                                   std::hash<std::string> : n=786433, m=7, c=141786, q=524775,  173 +  842 = 1015 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141746, q=524775,  165 +  800 =  965 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  156 +  743 =  899 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  168 +  850 = 1018 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  168 +  793 =  961 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  172 +  859 = 1031 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  171 +  861 = 1032 ms

```
<!--clang-x64/unordered.cpp.txt-->

<!--clang-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 12386 ms
                     std::hash: 13088 ms
                    fnv1a_hash: 13962 ms
                    absl::Hash: 11860 ms
 ankerl::unordered_dense::hash: 10524 ms
                   mulxp1_hash: 12076 ms
                   mulxp3_hash: 11555 ms
                 mulxp1_hash32: 13409 ms
                 mulxp3_hash32: 12946 ms
```
<!--clang-x64/unordered_flat.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 12705 ms
                     std::hash: 13487 ms
                    fnv1a_hash: 12719 ms
                    absl::Hash: 12276 ms
 ankerl::unordered_dense::hash: 12731 ms
                   mulxp1_hash: 11762 ms
                   mulxp3_hash: 13079 ms
                 mulxp1_hash32: 12986 ms
                 mulxp3_hash32: 13342 ms
```
<!--clang-x64/word_count.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  349 + 1380 = 1729 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  333 + 1343 = 1676 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  350 + 1322 = 1672 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  328 + 1429 = 1757 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141767, q=524775,  313 + 1233 = 1546 ms
                                   std::hash<std::string> : n=786433, m=7, c=141361, q=524775,  327 + 1402 = 1729 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=8, c=141796, q=524775,  319 + 1354 = 1673 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  325 + 1088 = 1413 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  310 + 1210 = 1520 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  313 + 1127 = 1440 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  306 + 1245 = 1551 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  332 + 1260 = 1592 ms

```
<!--vs-x64/unordered.cpp.txt-->

<!--vs-x64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 22113 ms
                     std::hash: 24557 ms
                    fnv1a_hash: 24317 ms
                    absl::Hash: 22439 ms
 ankerl::unordered_dense::hash: 17300 ms
                   mulxp1_hash: 20599 ms
                   mulxp3_hash: 19353 ms
                 mulxp1_hash32: 20841 ms
                 mulxp3_hash32: 20156 ms
```
<!--vs-x64/unordered_flat.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash: 24569 ms
                     std::hash: 23859 ms
                    fnv1a_hash: 23323 ms
                    absl::Hash: 25448 ms
 ankerl::unordered_dense::hash: 24253 ms
                   mulxp1_hash: 24799 ms
                   mulxp3_hash: 24784 ms
                 mulxp1_hash32: 24948 ms
                 mulxp3_hash32: 24813 ms
```
<!--vs-x64/word_count.cpp.txt-->

### Clang 12, ARM64
<!--clang-arm64/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141342, q=524775,  141 +  693 =  834 ms
                                            mul31_x4_hash : n=786433, m=7, c=141342, q=524775,  127 +  550 =  677 ms
                                            mul31_x8_hash : n=786433, m=7, c=141342, q=524775,  124 +  548 =  672 ms
                                               fnv1a_hash : n=786433, m=7, c=141361, q=524775,  143 +  690 =  833 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141767, q=524775,  122 +  484 =  606 ms
                                   std::hash<std::string> : n=786433, m=8, c=141905, q=524775,  115 +  450 =  565 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141845, q=524775,  123 +  506 =  629 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141756, q=524775,  114 +  416 =  530 ms
                                             mulxp1_hash_ : n=786433, m=7, c=141767, q=524775,  117 +  519 =  636 ms
                                             mulxp3_hash_ : n=786433, m=8, c=141708, q=524775,  113 +  457 =  570 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  120 +  496 =  616 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  119 +  524 =  643 ms

```
<!--clang-arm64/unordered.cpp.txt-->

<!--clang-arm64/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash:  6384 ms
                     std::hash:  6012 ms
                    fnv1a_hash:  8194 ms
                    absl::Hash:  6172 ms
 ankerl::unordered_dense::hash:  5512 ms
                   mulxp1_hash:  5809 ms
                   mulxp3_hash:  5449 ms
                 mulxp1_hash32:  6513 ms
                 mulxp3_hash32:  6071 ms
```
<!--clang-arm64/unordered_flat.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  8059 ms
                     std::hash:  7288 ms
                    fnv1a_hash:  7715 ms
                    absl::Hash:  7759 ms
 ankerl::unordered_dense::hash:  7735 ms
                   mulxp1_hash:  7521 ms
                   mulxp3_hash:  8068 ms
                 mulxp1_hash32:  7792 ms
                 mulxp3_hash32:  7888 ms
```
<!--clang-arm64/word_count.cpp.txt-->

### GCC 11, x86
<!--gcc-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  193 +  897 = 1090 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  184 +  830 = 1014 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  194 +  898 = 1092 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  198 +  920 = 1118 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141249, q=524775,  179 +  798 =  977 ms
                                   std::hash<std::string> : n=786433, m=8, c=141678, q=524775,  183 +  766 =  949 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141656, q=524775,  191 +  877 = 1068 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  195 +  951 = 1146 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  211 + 1108 = 1319 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  198 +  997 = 1195 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  179 +  808 =  987 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  178 +  739 =  917 ms

```
<!--gcc-x86/unordered.cpp.txt-->

<!--gcc-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 15336 ms
                     std::hash: 15628 ms
                    fnv1a_hash: 17386 ms
                    absl::Hash: 16604 ms
 ankerl::unordered_dense::hash: 17703 ms
                   mulxp1_hash: 20399 ms
                   mulxp3_hash: 18201 ms
                 mulxp1_hash32: 15538 ms
                 mulxp3_hash32: 13177 ms
```
<!--gcc-x86/unordered_flat.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1319 ms
                     std::hash:  1420 ms
                    fnv1a_hash:  1238 ms
                    absl::Hash:  1332 ms
 ankerl::unordered_dense::hash:  1490 ms
                   mulxp1_hash:  1827 ms
                   mulxp3_hash:  1724 ms
                 mulxp1_hash32:  1304 ms
                 mulxp3_hash32:  1283 ms
```
<!--gcc-x86/word_count.cpp.txt-->

### Clang 12, x86
<!--clang-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  185 +  872 = 1057 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  178 +  871 = 1049 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  190 + 1014 = 1204 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  189 +  895 = 1084 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141249, q=524775,  180 +  855 = 1035 ms
                                   std::hash<std::string> : n=786433, m=8, c=141678, q=524775,  178 +  852 = 1030 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=8, c=141674, q=524775,  219 + 1029 = 1248 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  187 +  897 = 1084 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  211 + 1130 = 1341 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  191 + 1025 = 1216 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  178 +  876 = 1054 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  179 +  859 = 1038 ms

```
<!--clang-x86/unordered.cpp.txt-->

<!--clang-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 17487 ms
                     std::hash: 15307 ms
                    fnv1a_hash: 16023 ms
                    absl::Hash: 19599 ms
 ankerl::unordered_dense::hash: 17656 ms
                   mulxp1_hash: 21096 ms
                   mulxp3_hash: 19195 ms
                 mulxp1_hash32: 15739 ms
                 mulxp3_hash32: 16297 ms
```
<!--clang-x86/unordered_flat.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1358 ms
                     std::hash:  1407 ms
                    fnv1a_hash:  1270 ms
                    absl::Hash:  1591 ms
 ankerl::unordered_dense::hash:  1649 ms
                   mulxp1_hash:  2007 ms
                   mulxp3_hash:  1927 ms
                 mulxp1_hash32:  1401 ms
                 mulxp3_hash32:  1463 ms
```
<!--clang-x86/word_count.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/unordered.cpp.txt-->
```
unordered.cpp
                                               mul31_hash : n=786433, m=7, c=141292, q=524775,  322 + 1463 = 1785 ms
                                            mul31_x4_hash : n=786433, m=7, c=141292, q=524775,  321 + 1403 = 1724 ms
                                            mul31_x8_hash : n=786433, m=7, c=141292, q=524775,  341 + 1554 = 1895 ms
                                               fnv1a_hash : n=786433, m=8, c=141524, q=524775,  333 + 1420 = 1753 ms
                                 boost::hash<std::string> : n=786433, m=7, c=141249, q=524775,  312 + 1383 = 1695 ms
                                   std::hash<std::string> : n=786433, m=8, c=141524, q=524775,  360 + 1453 = 1813 ms
     absl::lts_20220623::hash_internal::Hash<std::string> : n=786433, m=7, c=141993, q=524775,  326 + 1440 = 1766 ms
 ankerl::unordered_dense::v1_3_1::hash<std::string, void> : n=786433, m=7, c=141666, q=524775,  373 + 1802 = 2175 ms
                                             mulxp1_hash_ : n=786433, m=8, c=141910, q=524775,  360 + 1670 = 2030 ms
                                             mulxp3_hash_ : n=786433, m=7, c=141660, q=524775,  353 + 1612 = 1965 ms
                                           mulxp1_hash32_ : n=786433, m=7, c=141249, q=524775,  308 + 1376 = 1684 ms
                                           mulxp3_hash32_ : n=786433, m=9, c=141718, q=524775,  314 + 1408 = 1722 ms

```
<!--vs-x86/unordered.cpp.txt-->

<!--vs-x86/unordered_flat.cpp.txt-->
```
unordered_flat.cpp
                   boost::hash: 26508 ms
                     std::hash: 23325 ms
                    fnv1a_hash: 23452 ms
                    absl::Hash: 26671 ms
 ankerl::unordered_dense::hash: 32571 ms
                   mulxp1_hash: 29347 ms
                   mulxp3_hash: 28566 ms
                 mulxp1_hash32: 24564 ms
                 mulxp3_hash32: 21884 ms
```
<!--vs-x86/unordered_flat.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                   boost::hash:  1626 ms
                     std::hash:  1394 ms
                    fnv1a_hash:  1354 ms
                    absl::Hash:  1927 ms
 ankerl::unordered_dense::hash:  3230 ms
                   mulxp1_hash:  2364 ms
                   mulxp3_hash:  2512 ms
                 mulxp1_hash32:  1614 ms
                 mulxp3_hash32:  1582 ms
```
<!--vs-x86/word_count.cpp.txt-->
