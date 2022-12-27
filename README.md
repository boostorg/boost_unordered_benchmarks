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
                  std::unordered_map: 31341 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22751 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12256 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12670 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12879 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  9098 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12143 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11742 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34911 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25166 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13905 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14082 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14731 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 17469 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17191 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16661 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30214 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23357 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11706 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12368 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12678 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  8853 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11782 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10772 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33553 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26230 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13125 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13867 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14169 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16993 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16999 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15823 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10544 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9176 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4438 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6513 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6366 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7448 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8225 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5589 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11414 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9618 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4637 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6275 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6294 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7316 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8403 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5870 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30008 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25446 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 10245 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 11543 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 11504 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 15219 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13971 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11655 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28317 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21523 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12202 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14054 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 13875 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 14005 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13514 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11535 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27704 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20283 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11741 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13570 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 13398 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 24472 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14120 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11983 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1296 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   688 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   804 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   810 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:   781 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   583 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   525 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   500 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32270 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24709 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12568 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12800 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 13050 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11490 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14323 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14097 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34257 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23719 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12240 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12390 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 12641 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16355 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16886 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16020 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31007 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25149 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11649 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12530 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12796 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11254 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14094 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13099 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31500 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24386 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11617 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12269 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 12537 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16229 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16621 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15344 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11134 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9218 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4465 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6551 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6360 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7200 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8493 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5744 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12889 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9619 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4754 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6273 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6281 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7001 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9021 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6273 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29764 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25386 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9244 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10618 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 10615 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14152 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14362 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11661 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31274 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23570 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12423 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14153 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 14093 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16476 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16362 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14019 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28486 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22670 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12673 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14417 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 14156 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 26953 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16492 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14328 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1405 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1020 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   928 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   917 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  1046 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   858 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   965 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   623 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38316 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38437 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23707 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 23534 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21935 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 17555 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30107 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30395 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38637 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38560 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24145 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24122 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 22442 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23524 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30525 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31415 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36756 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39824 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21916 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 23722 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 20881 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16784 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30724 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29672 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35234 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39029 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22035 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24275 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 21962 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 22518 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30531 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28377 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22557 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15803 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11363 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 14641 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 13571 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 13559 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18519 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13386 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25889 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19014 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12816 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14215 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13261 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 11781 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18423 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15329 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30950 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42376 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16447 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18555 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 17031 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 19144 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30575 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27229 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36313 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42879 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26035 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 32175 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 31360 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 27829 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43316 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35937 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33966 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39880 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23260 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 29559 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 28507 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 44394 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34338 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27116 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1324 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2595 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1785 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:  2007 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  2265 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  1172 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2552 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2301 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15560 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14287 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7272 ms, 260046848 bytes in 1 allocations
              poc_unordered_node_map:  7919 ms, 199287432 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  7048 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8468 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7776 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20914 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16116 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8147 ms, 260046848 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8810 ms, 199287432 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10761 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9170 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8728 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14100 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13386 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6356 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map:  7515 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  6621 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8100 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7478 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20161 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15732 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7871 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8821 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10475 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8854 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8116 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7761 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4665 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2072 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  3108 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  4102 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3623 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2542 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7752 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5058 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2089 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  3020 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  3684 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4014 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3108 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15050 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12448 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4172 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map:  5210 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7631 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5931 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4866 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16836 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15018 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7502 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map:  8192 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 11052 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9213 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8477 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16227 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14401 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7718 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  8529 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24306 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8833 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7962 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   446 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   609 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   487 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   532 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   270 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   314 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30706 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22683 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15476 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 16217 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16443 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 24962 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 16952 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16833 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34386 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25432 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17281 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17790 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17972 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19353 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17787 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17658 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28333 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22734 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15086 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 15880 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16152 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 24405 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17000 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16359 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32318 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25972 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16609 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17373 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17759 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19163 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17649 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17122 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10948 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11269 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8623 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10919 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10557 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 12134 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13804 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12091 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17836 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10841 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12588 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12149 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14998 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15861 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13086 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33698 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30860 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16098 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 17780 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 17710 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20566 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20133 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18657 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1971 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1982 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1335 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1444 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1452 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  1896 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1575 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1464 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1804 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1847 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1228 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1318 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1331 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1499 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1462 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1375 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   112 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   128 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   150 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   154 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   169 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   132 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35792 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24602 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17901 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 18380 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 18621 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 21982 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22074 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22076 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35652 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27698 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17302 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17711 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17905 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 21983 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20502 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20117 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30480 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22719 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15168 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 16275 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16652 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 19480 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20402 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20035 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30469 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22394 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15514 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16413 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 16844 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19535 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18733 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18399 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10971 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9959 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8690 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10696 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10583 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 10310 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13177 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11663 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16045 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11248 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14137 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13543 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20881 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14855 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13289 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40925 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34824 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16929 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18566 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 18382 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 22184 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23105 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22044 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2185 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2055 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1437 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1445 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  2038 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1963 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1875 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1848 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1992 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1278 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1382 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1391 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1679 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1602 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   129 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   127 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   128 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37000 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37094 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23471 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 22687 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21117 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 31515 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32230 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33349 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35846 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35916 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23557 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 22308 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 20675 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23800 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27722 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29545 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33332 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 34054 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19405 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 20883 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 19085 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 30277 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30790 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28521 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32785 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34502 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 20157 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21591 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 19844 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 22760 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26960 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24678 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19783 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13855 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9990 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 12648 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 11449 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 16836 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18115 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 14034 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24690 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26188 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12770 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14505 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13744 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20904 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20974 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18588 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35756 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42642 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22035 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 22228 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 20697 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 32055 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 39979 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40559 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2719 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3037 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1683 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1966 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1877 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  3814 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2906 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2543 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2626 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2792 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1431 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1746 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1638 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  2067 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2188 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1858 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   164 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   222 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   115 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   136 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   122 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   155 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   167 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   185 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
