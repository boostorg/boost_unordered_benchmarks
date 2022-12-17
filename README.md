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
                  std::unordered_map: 31345 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22757 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12243 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12637 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12840 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  9097 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12122 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11750 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34974 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25055 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13955 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14096 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14789 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 17437 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17276 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16564 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30219 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23293 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11569 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12380 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12667 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  8823 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11769 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10743 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33558 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26024 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13177 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13879 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14188 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 17035 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16894 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15836 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10614 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9261 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4468 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6570 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6376 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7344 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8283 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5604 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11369 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9578 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4611 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6244 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6286 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7275 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8557 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6001 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27162 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22953 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9032 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10591 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 10619 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 13818 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12859 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10785 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28251 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21406 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12218 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14072 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 13871 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 14052 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13484 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11509 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27672 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20242 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11736 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13552 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 13430 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 24457 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14072 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11941 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1295 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   689 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   804 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   812 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:   782 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   578 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   524 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   501 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32087 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24574 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12538 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12756 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12984 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11442 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14224 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14057 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34191 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23630 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12215 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12350 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 13042 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16327 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16784 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15957 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31007 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25115 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11601 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12526 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12786 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11250 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14048 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13081 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31507 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24522 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11584 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12244 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 12543 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16193 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16586 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15355 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11890 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10172 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4860 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  7186 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6933 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7831 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9370 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6306 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12892 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9620 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4779 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6273 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6280 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7004 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8992 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6241 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29853 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25370 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9253 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10624 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 10605 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14147 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14340 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11638 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31366 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23590 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12496 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14348 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 14173 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16562 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16302 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13904 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28528 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22791 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12776 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14518 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 14359 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 25540 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16580 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14350 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1404 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1003 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   923 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   935 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  1046 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   876 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   968 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   630 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40047 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39635 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24298 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 23769 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 22427 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 17632 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30481 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31157 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38337 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38734 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24218 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24111 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 22590 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23909 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30246 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31240 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36444 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39763 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21833 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 23643 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21385 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16947 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30481 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29310 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35393 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38945 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21967 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 23914 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 21571 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 22457 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30136 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28189 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22555 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15934 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11382 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 14550 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 13098 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 13167 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18097 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13767 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 28986 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 21236 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12844 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14834 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13872 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 11938 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19557 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15765 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30596 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 43725 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16005 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18943 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 17108 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 19874 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30485 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27099 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35833 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42443 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25855 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 32716 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 31045 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 27793 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43262 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35803 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33494 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39573 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23302 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 29395 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 28400 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 43908 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34117 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27549 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1278 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2545 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1745 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:  1923 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  2249 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  1130 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2455 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2183 ms,      4352 bytes in 1 allocations
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
                  std::unordered_map: 30679 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22652 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15637 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 16187 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16518 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 23825 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17082 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16837 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34422 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25493 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17363 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17696 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17950 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19395 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17922 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17744 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28345 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22675 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15102 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 15806 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16172 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 23157 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16954 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16401 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32274 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25961 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16669 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17338 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17689 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19269 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17589 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17136 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10889 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11216 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8608 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10793 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10525 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 11991 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13841 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12046 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17712 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10749 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12592 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12062 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14996 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15919 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13284 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33701 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30889 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16330 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 17819 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 17768 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20556 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20157 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18751 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1975 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1993 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1342 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1462 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1448 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  1899 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1583 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1478 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1808 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1848 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1222 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1328 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1336 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1504 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1460 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1363 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   112 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   139 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   144 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   155 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   161 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   132 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32252 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22789 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16650 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 17095 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 17266 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 19966 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20602 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20535 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32299 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25348 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15929 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16304 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 16553 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 20045 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18966 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18684 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30448 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22692 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15145 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 16040 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16425 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 19507 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20432 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20097 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30455 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22419 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15504 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16136 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 16538 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19461 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18730 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18349 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10982 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9972 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8720 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10776 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10559 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 10327 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13184 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11624 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15958 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11226 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12846 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12402 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 18837 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13665 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12343 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40921 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34714 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16801 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18643 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 18618 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 22163 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23253 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22141 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2225 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2067 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1355 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1439 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1448 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  2032 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1962 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1872 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1825 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1980 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1273 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1383 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1391 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1681 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1657 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1599 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   149 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   128 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   128 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   128 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   186 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37282 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36536 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23548 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 22484 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21216 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 31425 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31618 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33364 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35662 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36114 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23017 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 22328 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 21031 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23851 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27712 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29268 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33035 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33796 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19473 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 20976 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 19174 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 29753 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31166 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28828 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32975 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34207 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19653 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21378 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 19781 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 22775 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27177 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24612 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19788 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13860 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9872 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 12685 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 11556 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 16735 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18027 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13897 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24617 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26138 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12593 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14710 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13536 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20743 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21459 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18922 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36148 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43660 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21799 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 22551 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 20791 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 32105 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40163 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40193 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2667 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2963 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1674 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1938 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1912 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  3887 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2908 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2455 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2609 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2838 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1409 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1701 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1664 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  2090 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2316 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1794 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   159 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   230 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   116 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   118 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   139 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   196 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   156 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   152 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
