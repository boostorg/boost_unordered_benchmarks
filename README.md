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
                  std::unordered_map: 31524 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22825 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12318 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12720 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12963 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  9146 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12180 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11781 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35137 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25339 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13965 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14153 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14879 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 17549 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17310 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16702 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33467 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25513 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12845 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 13423 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 13746 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  9751 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 13000 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11841 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36851 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28825 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14712 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 15160 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 15470 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 18494 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18413 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17026 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10607 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9235 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4501 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6553 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6420 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7429 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8260 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5622 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12334 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10540 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5109 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6878 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6936 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7984 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9181 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6312 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30168 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25419 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 10313 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 11510 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 11473 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 15220 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 13993 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11716 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28229 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21455 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12183 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14022 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 13854 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 13991 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13487 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11502 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27517 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20149 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11710 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13544 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 13377 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 24468 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14098 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11913 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1296 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   693 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   811 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   814 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:   791 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   593 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   545 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   517 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32084 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24555 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12529 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12710 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12971 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11439 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14243 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14100 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34094 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23605 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12243 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12297 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 12546 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16272 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16720 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15971 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34510 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 27457 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12870 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 13655 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 13928 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 12483 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15433 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14375 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34879 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26565 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12947 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13337 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 13680 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 17605 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18059 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16642 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11153 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9238 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4469 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6561 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6367 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7188 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8540 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5790 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12887 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9617 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4790 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6253 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6312 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7001 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9014 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6228 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29780 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25419 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9320 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10699 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 10616 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14149 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14485 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11651 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31236 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23571 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12399 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14154 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 14063 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16487 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16410 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14038 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28491 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22761 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12662 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14513 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 14200 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 27059 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16502 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14346 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1404 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1025 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   938 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   918 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  1044 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   859 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   964 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   623 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40641 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 40459 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24477 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 23855 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 22439 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 17556 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30755 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31463 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38742 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38986 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24477 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24316 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 22757 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23775 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30991 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31704 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36233 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 40077 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 22238 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 24330 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21322 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 17117 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30767 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29492 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35776 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39531 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22272 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 23938 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 22207 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23116 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30626 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28756 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 21159 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15042 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11134 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 13962 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 13134 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 12859 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17790 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13054 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 27736 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19757 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12920 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 15079 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 14093 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 12121 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19593 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15776 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30520 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42859 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16313 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 19129 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 16734 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 19461 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30700 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27252 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35832 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42823 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25744 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 32123 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 31288 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 27979 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 42595 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36037 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33632 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39665 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23445 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 29294 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 28583 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 44084 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34020 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27182 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1360 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2585 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1726 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:  1960 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  1950 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  1185 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2540 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2236 ms,      4352 bytes in 1 allocations
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
                  std::unordered_map: 30723 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22715 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15510 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 16270 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16500 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 24972 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17042 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16884 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34381 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25402 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17288 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17838 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 18003 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19444 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17865 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17758 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28342 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22655 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15089 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 15895 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16264 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 24429 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16887 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16274 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32218 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25968 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16481 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17252 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17668 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19351 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17613 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17144 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10883 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11230 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8613 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10797 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10472 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 12093 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13814 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12031 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17728 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10727 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12560 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12167 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 15195 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15670 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13050 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33597 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30849 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16062 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 17734 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 17685 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20587 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20137 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18729 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1978 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1985 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1338 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1444 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1451 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  1894 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1568 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1472 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1807 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1850 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1225 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1320 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1335 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1500 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1470 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1366 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   113 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   144 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   153 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   161 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   152 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   141 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32207 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22594 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16582 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 16950 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 17190 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 19981 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20509 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20538 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32266 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25355 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15928 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16276 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 16411 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 20040 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19018 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18686 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30435 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22688 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15125 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 16218 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16677 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 19457 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20353 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20001 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30438 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22361 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15500 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16380 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 16771 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19534 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18738 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18392 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10953 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9968 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8737 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10771 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10673 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 10289 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13125 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11690 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15962 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11192 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12785 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12428 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 18855 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13675 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12442 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41096 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34913 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16928 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18585 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 18490 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 22244 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23189 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22190 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2219 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2046 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1353 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1440 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1446 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  2038 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1964 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1876 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1847 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1994 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1277 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1383 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1389 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1685 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1601 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   130 ms,      1096 bytes in 1 allocations
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
                  std::unordered_map: 35530 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35698 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 22921 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 22490 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 20791 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 31191 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31038 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 32841 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35553 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35730 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23217 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 22386 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 20832 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23953 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27877 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29190 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35259 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35508 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 20075 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 21273 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 19660 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 30544 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31284 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29327 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33966 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34803 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 20190 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21546 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 19728 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23565 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27239 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25660 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20119 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 14044 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9911 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 12800 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 11537 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 17008 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17994 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13816 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24734 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26450 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 13165 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14671 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13557 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20751 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21831 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19118 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36579 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43757 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22427 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 22782 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 20941 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 32166 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40738 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40876 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2687 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3030 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1682 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1986 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1886 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  3979 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  3059 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2506 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2681 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2842 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1441 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1724 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1617 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  2135 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2209 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1861 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   162 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   219 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   114 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   133 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   125 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   161 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   176 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   150 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
