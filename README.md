# Boost.Unordered aggregate benchmarks

## Benchmarks

Aggregated benchmarks simulating real-life scenarios, provided as part
of Boost.Unordered [source code](https://github.com/boostorg/unordered/tree/develop/benchmark).

## Detailed results
### Folder
* `gcc-x64`: GCC 12, x64
* `clang-x64`: Clang 15, x64
* `vs-x64`: Visual Studio 2022, x64
* `vs-x86`: Visual Studio 2022, x86
<!---
* `clang-arm64`: Clang 12 ARM64
* `gcc-x86`: GCC 12, x86
* `clang-x86`: Clang 12, x86
-->

## Summary results

### GCC 12, x64
<!--gcc-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36883 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22385 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11400 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 12346 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10966 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 12593 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  9788 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14433 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14317 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 40526 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27549 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 15338 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17076 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19726 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 19825 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 14906 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 18879 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18011 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34912 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 22364 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11232 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 11363 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10358 ms, 167772160 bytes in 2 allocations
                   indivi::flat_umap: 11267 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  8266 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 13091 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12238 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37354 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27473 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14632 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14503 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18436 ms, 167772160 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16569 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13369 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17118 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16337 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 14519 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10670 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6852 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4758 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8437 ms, 134217728 bytes in 2 allocations
           indivi::flat_umap:  5606 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4335 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9739 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6826 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 15237 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 11482 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7208 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5621 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8384 ms, 201326592 bytes in 2 allocations
           indivi::flat_umap:  6971 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4887 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9153 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7202 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 32626 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25892 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11510 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 10366 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15828 ms, 268435456 bytes in 2 allocations
           indivi::flat_umap: 13598 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  9672 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 14062 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11439 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 30632 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21928 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14418 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12186 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14915 ms,  67108864 bytes in 2 allocations
                   indivi::flat_umap: 12691 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap: 12308 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14720 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 12571 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29859 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 21613 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14736 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12880 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25776 ms,  67108864 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 13100 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13004 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 15650 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 13328 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1317 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   720 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   651 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   544 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   599 ms,      4096 bytes in 2 allocations
           indivi::flat_umap:   587 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:   589 ms,         0 bytes in 0 allocations
         absl::node_hash_map:   571 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   525 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 15, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36658 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21946 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 11549 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 13098 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13672 ms, 234881024 bytes in 2 allocations
                   indivi::flat_umap: 12773 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  9873 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 13381 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 13121 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37244 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24412 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14142 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15921 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18155 ms, 234881024 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 17966 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 14348 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 16844 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16766 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34550 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21689 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 11955 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 12210 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 12866 ms, 167772160 bytes in 2 allocations
                   indivi::flat_umap: 11265 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  8737 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 13019 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11633 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35545 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25444 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14326 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13576 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17372 ms, 167772160 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15131 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 12657 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 16268 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15314 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12848 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10828 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6878 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4677 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8308 ms, 134217728 bytes in 2 allocations
           indivi::flat_umap:  5751 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4197 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9007 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6154 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 14646 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10896 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  7121 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  5526 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8041 ms, 201326592 bytes in 2 allocations
           indivi::flat_umap:  7168 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4538 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9611 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  7000 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30835 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 24291 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 11622 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 11154 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13764 ms, 268435456 bytes in 2 allocations
           indivi::flat_umap: 13742 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  9213 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 14649 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12720 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32886 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24700 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14632 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12569 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 17623 ms,  67108864 bytes in 2 allocations
                   indivi::flat_umap: 15161 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap: 13981 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 17222 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14701 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31772 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 24095 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 15831 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 13631 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27871 ms,  67108864 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16156 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 15257 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17518 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 15246 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1470 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1079 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   680 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   577 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   892 ms,      4096 bytes in 2 allocations
           indivi::flat_umap:   798 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:   798 ms,         0 bytes in 0 allocations
         absl::node_hash_map:   923 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   529 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2022, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 26136 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 19662 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10834 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9769 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11472 ms, 279707224 bytes in 2 allocations
                   indivi::flat_umap: 10938 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  9316 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 15408 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14111 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 26103 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 25638 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 14331 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13324 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16939 ms, 279707224 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 15509 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 13257 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 17654 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16392 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 23447 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 19015 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9859 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  8409 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10927 ms, 194667880 bytes in 2 allocations
                   indivi::flat_umap:  9712 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap:  8193 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 14074 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 12226 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 23390 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 24770 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12826 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11299 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 15850 ms, 194667880 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 13852 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 11776 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 15997 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 13970 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10370 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map:  8973 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  5374 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  3248 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  6425 ms, 130888368 bytes in 2 allocations
           indivi::flat_umap:  5981 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  4734 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  7632 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  4800 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13574 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 11736 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6168 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  3662 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  6336 ms, 194667872 bytes in 2 allocations
           indivi::flat_umap:  7086 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  5382 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  8389 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5164 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14335 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 20820 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  9046 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  6586 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 11501 ms, 258447376 bytes in 2 allocations
           indivi::flat_umap:  9445 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:  7325 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 15908 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12693 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16755 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 18599 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12087 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  9974 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13064 ms,  54572488 bytes in 2 allocations
                   indivi::flat_umap: 11976 ms,         0 bytes in 0 allocations
                   indivi::flat_wmap: 11542 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16293 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14185 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 14907 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 17200 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 11767 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  9259 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21965 ms,  54572488 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 10860 ms,         0 bytes in 0 allocations
           indivi::flat_wmap, FNV-1a: 10514 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 13444 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11649 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   822 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  1581 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  1296 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   432 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   710 ms,      4304 bytes in 2 allocations
           indivi::flat_umap:   674 ms,         0 bytes in 0 allocations
           indivi::flat_wmap:   674 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  1690 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  1500 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->

<!---
### Clang 12, ARM64
<!~~clang-arm64/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 15645 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12872 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  7084 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6382 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7103 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8453 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7892 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21112 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16191 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8793 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8173 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10832 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9932 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9219 ms, 276824040 bytes in 1 allocations
```
<!~~clang-arm64/string.cpp.txt~~>

<!~~clang-arm64/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 14175 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10736 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6425 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5915 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6690 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8231 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7417 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20243 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15732 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8724 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7908 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10474 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9013 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8220 ms, 209715184 bytes in 1 allocations
```
<!~~clang-arm64/string_view.cpp.txt~~>

<!~~clang-arm64/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map:  7794 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4670 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3149 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2107 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4068 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3664 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2578 ms,  75497472 bytes in 1 allocations
```
<!~~clang-arm64/uint32.cpp.txt~~>

<!~~clang-arm64/uint64.cpp.txt~~>
```
uint64.cpp
          std::unordered_map:  7768 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  4964 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3252 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2207 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3766 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4100 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3125 ms, 142606328 bytes in 1 allocations
```
<!~~clang-arm64/uint64.cpp.txt~~>

<!~~clang-arm64/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 15123 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12471 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  5069 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4245 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7705 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6004 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4885 ms, 209715184 bytes in 1 allocations
```
<!~~clang-arm64/uuid.cpp.txt~~>

<!~~clang-arm64/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map: 17858 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15365 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8572 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7630 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11076 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9344 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8529 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16356 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14477 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8470 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7567 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24269 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8761 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7837 ms,  52428784 bytes in 1 allocations
```
<!~~clang-arm64/word_count.cpp.txt~~>

<!~~clang-arm64/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   936 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   609 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   329 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   273 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   315 ms,      4344 bytes in 1 allocations
```
<!~~clang-arm64/word_size.cpp.txt~~>

### GCC 12, x86
<!~~gcc-x86/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 34827 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24586 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 16971 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16445 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 26552 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18569 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18191 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38342 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28084 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18938 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18074 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22045 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19375 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19016 ms, 243269612 bytes in 1 allocations
```
<!~~gcc-x86/string.cpp.txt~~>

<!~~gcc-x86/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 32141 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25307 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 17044 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 16239 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 26205 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18110 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 17626 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36884 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28785 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 18678 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17962 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21467 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18807 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18471 ms, 109051900 bytes in 1 allocations
```
<!~~gcc-x86/string_view.cpp.txt~~>

<!~~gcc-x86/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map: 16869 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12188 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11891 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9257 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13071 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14779 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12572 ms,  75497472 bytes in 1 allocations
```
<!~~gcc-x86/uint32.cpp.txt~~>

<!~~gcc-x86/uint64.cpp.txt~~>
```
uint64.cpp
        boost::unordered_map: 19166 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14500 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11150 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20215 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15919 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13316 ms, 142606328 bytes in 1 allocations
```
<!~~gcc-x86/uint64.cpp.txt~~>

<!~~gcc-x86/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 37872 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 33326 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18879 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 17182 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22155 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21590 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19883 ms, 209715184 bytes in 1 allocations
```
<!~~gcc-x86/uuid.cpp.txt~~>

<!~~gcc-x86/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map:  2057 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2019 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1430 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1330 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2014 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1560 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1453 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1835 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1866 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1340 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1247 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1510 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1418 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1373 ms,   6815740 bytes in 1 allocations
```
<!~~gcc-x86/word_count.cpp.txt~~>

<!~~gcc-x86/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   102 ms,       932 bytes in 59 allocations
        boost::unordered_map:   112 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   138 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   132 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   153 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   158 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   138 ms,      1152 bytes in 1 allocations
```
<!~~gcc-x86/word_size.cpp.txt~~>

### Clang 12, x86
<!~~clang-x86/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 34373 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24395 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17139 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16822 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 24527 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20518 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 21221 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34689 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24222 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17513 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 17608 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21955 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18340 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18858 ms, 243269612 bytes in 1 allocations
```
<!~~clang-x86/string.cpp.txt~~>

<!~~clang-x86/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 31242 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23505 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 16831 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 15692 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21522 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 19962 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19831 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32714 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23909 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17528 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16825 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21592 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18233 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17262 ms, 109051900 bytes in 1 allocations
```
<!~~clang-x86/string_view.cpp.txt~~>

<!~~clang-x86/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map: 12210 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10996 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11985 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  9240 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11292 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14131 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11964 ms,  75497472 bytes in 1 allocations
```
<!~~clang-x86/uint32.cpp.txt~~>

<!~~clang-x86/uint64.cpp.txt~~>
```
uint64.cpp
        boost::unordered_map: 17945 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 14253 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 11838 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15481 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16307 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13413 ms, 142606328 bytes in 1 allocations
```
<!~~clang-x86/uint64.cpp.txt~~>

<!~~clang-x86/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 41739 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35563 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 19968 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 18250 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 25564 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 21682 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20668 ms, 209715184 bytes in 1 allocations
```
<!~~clang-x86/uuid.cpp.txt~~>

<!~~clang-x86/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map:  2233 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2160 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1495 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1389 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2076 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1962 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1864 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2026 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  2062 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1429 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1315 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1718 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1688 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1591 ms,   6815740 bytes in 1 allocations
```
<!~~clang-x86/word_count.cpp.txt~~>

<!~~clang-x86/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   169 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   135 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   140 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   189 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   175 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   116 ms,      1152 bytes in 1 allocations
```
<!~~clang-x86/word_size.cpp.txt~~>

### Visual Studio 2022, x86
<!~~vs-x86/string.cpp.txt~~>
```
string.cpp
                  std::unordered_map: 24175 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 22969 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 11885 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 11512 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22860 ms, 215927716 bytes in 2 allocations
                   indivi::flat_umap: 23202 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 17328 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 16864 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 24156 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 22869 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 11868 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11519 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16711 ms, 215927716 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 16241 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 14941 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15213 ms, 243269620 bytes in 1 allocations
```
<!~~vs-x86/string.cpp.txt~~>

<!~~vs-x86/string_view.cpp.txt~~>
```
string_view.cpp
                  std::unordered_map: 23457 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 20668 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map:  9947 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map:  9007 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21546 ms, 130888372 bytes in 2 allocations
                   indivi::flat_umap: 21456 ms,         0 bytes in 0 allocations
                 absl::node_hash_map: 16462 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 14754 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 22081 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 21626 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 10612 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  9676 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16068 ms, 130888372 bytes in 2 allocations
           indivi::flat_umap, FNV-1a: 14719 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a: 13722 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 12225 ms, 109051908 bytes in 1 allocations
```
<!~~vs-x86/string_view.cpp.txt~~>

<!~~vs-x86/uint32.cpp.txt~~>
```
uint32.cpp
          std::unordered_map: 11628 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map:  8891 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map:  5932 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  4177 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10387 ms, 130888368 bytes in 2 allocations
           indivi::flat_umap:  9265 ms,         0 bytes in 0 allocations
         absl::node_hash_map:  9290 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map:  5745 ms,  75497480 bytes in 1 allocations
```
<!~~vs-x86/uint32.cpp.txt~~>

<!~~vs-x86/uint64.cpp.txt~~>
```
uint64.cpp
          std::unordered_map: 14771 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 15050 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map:  7577 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map:  5774 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15616 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map:  9675 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map:  7291 ms, 142606336 bytes in 1 allocations
```
<!~~vs-x86/uint64.cpp.txt~~>

<!~~vs-x86/uuid.cpp.txt~~>
```
uuid.cpp
          std::unordered_map: 22632 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 25876 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 11448 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10527 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 17872 ms, 258447376 bytes in 2 allocations
           indivi::flat_umap: 16867 ms,         0 bytes in 0 allocations
         absl::node_hash_map: 16910 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 14312 ms, 209715192 bytes in 1 allocations
```
<!~~vs-x86/uuid.cpp.txt~~>

<!~~vs-x86/word_count.cpp.txt~~>
```
word_count.cpp
                  std::unordered_map:  1418 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  1512 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:   977 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:   858 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2162 ms,   9793612 bytes in 2 allocations
                   indivi::flat_umap:  2078 ms,         0 bytes in 0 allocations
                 absl::node_hash_map:  1560 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  1403 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1262 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  1379 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:   835 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:   741 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1108 ms,   9793612 bytes in 2 allocations
           indivi::flat_umap, FNV-1a:   876 ms,         0 bytes in 0 allocations
         absl::node_hash_map, FNV-1a:  1059 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:   925 ms,   6815748 bytes in 1 allocations
```
<!~~vs-x86/word_count.cpp.txt~~>

<!~~vs-x86/word_size.cpp.txt~~>
```
word_size.cpp
          std::unordered_map:   103 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   108 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:    78 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:    66 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:    93 ms,      1528 bytes in 2 allocations
           indivi::flat_umap:   166 ms,         0 bytes in 0 allocations
         absl::node_hash_map:    89 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:    85 ms,      1160 bytes in 1 allocations
```
<!~~vs-x86/word_size.cpp.txt~~>
-->