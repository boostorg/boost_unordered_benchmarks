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
                  std::unordered_map: 31352 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22742 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12267 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 12743 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 12509 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9127 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12111 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11722 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35100 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25158 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13948 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 14098 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 13896 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17461 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17248 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16137 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30242 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23304 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11664 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 12389 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 12637 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  9093 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11818 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10751 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33561 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26264 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13149 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13901 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 14197 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17263 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16862 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15806 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10568 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9190 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4461 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  6487 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  6520 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7405 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8252 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5602 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11422 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9589 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4615 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  6249 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  6238 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7291 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8379 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5887 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27406 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 23102 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9063 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 10643 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 10631 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 13899 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12885 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10828 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28288 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21243 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12130 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 14049 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 14073 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 14012 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13500 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11523 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27588 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20305 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11706 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13584 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 13597 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 25201 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13929 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11979 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1291 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   694 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   797 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   811 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   784 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   644 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   530 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   511 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32086 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24553 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12507 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 12764 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 12587 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 11422 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14220 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14063 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34115 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23398 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12175 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 12300 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 12147 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 16297 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16777 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15488 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34085 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 27007 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12726 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 13576 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 13912 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 12648 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15366 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14213 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34622 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26543 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12810 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 13291 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 13561 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 17717 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17951 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16531 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11210 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9282 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4508 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  6592 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  6594 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  7216 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8540 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5809 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12926 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9589 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4802 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  6254 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  6293 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7023 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8921 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6274 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33390 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 27613 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 10397 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 11654 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 11619 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 15481 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 15519 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12512 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32221 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 24329 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12788 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 14666 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 14653 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 17044 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16752 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14246 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29565 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 23637 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 13220 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 14813 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 14768 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 26973 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16970 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14677 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1435 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1013 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   917 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   942 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   927 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   873 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   963 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   656 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38343 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 38603 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 23616 ms, 322961400 bytes in 1 allocations
           boost::unordered_node_map: 23451 ms, 231283496 bytes in 3999509 allocations
              poc_unordered_node_map: 23481 ms, 231283496 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17445 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30145 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 30713 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38362 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38268 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24106 ms, 322961400 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 23993 ms, 231283496 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 24128 ms, 231283496 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 24158 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30825 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31588 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35082 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 38337 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21174 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map: 23189 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map: 23386 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 17717 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30396 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29241 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35277 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38947 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21944 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 24077 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 24209 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22793 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30398 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28840 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 21194 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14994 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 10914 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 14026 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map: 13979 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12734 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17400 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12773 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 26242 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 21286 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12611 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 14668 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map: 14779 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 12306 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18529 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14978 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29367 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 40717 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 15786 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 18203 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map: 18034 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map: 19100 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30096 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 26585 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 35558 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42938 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26022 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map: 32823 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map: 32139 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 27871 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43211 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36126 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34280 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39861 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23236 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 29422 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a: 29309 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 44400 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33931 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27440 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1273 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2474 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1757 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:  2239 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:  2210 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:  1124 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2566 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2239 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15630 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14272 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7298 ms, 260046848 bytes in 1 allocations
           boost::unordered_node_map:  7570 ms, 199287432 bytes in 3999509 allocations
              poc_unordered_node_map:  7826 ms, 199287432 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  7145 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8344 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7901 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21145 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16150 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8178 ms, 260046848 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8416 ms, 199287432 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a:  8659 ms, 199287432 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10717 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 10005 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9379 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14010 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13401 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6390 ms, 197132280 bytes in 1 allocations
           boost::unordered_node_map:  7023 ms, 167291368 bytes in 3999509 allocations
              poc_unordered_node_map:  7509 ms, 167291368 bytes in 3999509 allocations
        ankerl::unordered_dense::map:  6578 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8208 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7283 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20248 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15664 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7827 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8384 ms, 167291368 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a:  8852 ms, 167291368 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 10411 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8926 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8119 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7725 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4738 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2145 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map:  3130 ms, 119276616 bytes in 5996681 allocations
      poc_unordered_node_map:  3142 ms, 119276616 bytes in 5996681 allocations
ankerl::unordered_dense::map:  4056 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3617 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2590 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7777 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5064 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2095 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map:  2979 ms, 167303176 bytes in 6000001 allocations
      poc_unordered_node_map:  3037 ms, 167303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  3726 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4036 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3074 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 14994 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12445 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4086 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map:  5064 ms, 215303176 bytes in 6000001 allocations
      poc_unordered_node_map:  5160 ms, 215303176 bytes in 6000001 allocations
ankerl::unordered_dense::map:  7613 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  5892 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4865 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16841 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15019 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7371 ms,  49283064 bytes in 1 allocations
           boost::unordered_node_map:  8244 ms,  51873520 bytes in 1418656 allocations
              poc_unordered_node_map:  8167 ms,  51873520 bytes in 1418656 allocations
        ankerl::unordered_dense::map: 10994 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9208 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8526 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16293 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14237 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7611 ms,  49283064 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  8514 ms,  51873520 bytes in 1418656 allocations
      poc_unordered_node_map, FNV-1a:  8514 ms,  51873520 bytes in 1418656 allocations
ankerl::unordered_dense::map, FNV-1a: 24340 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8629 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7564 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   415 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   611 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   496 ms,      4096 bytes in 1 allocations
   boost::unordered_node_map:   551 ms,      3992 bytes in 114 allocations
      poc_unordered_node_map:   538 ms,      3992 bytes in 114 allocations
ankerl::unordered_dense::map:   398 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   274 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   317 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30885 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22831 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15601 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 16339 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 16155 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 25168 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17035 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16889 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34632 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25581 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17342 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 17856 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 17667 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19614 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17887 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17780 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28363 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22706 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15216 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 15968 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 16141 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 24643 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16906 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16352 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32195 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25974 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16571 ms, 102760452 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 17275 ms,  87839996 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 17481 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19548 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17658 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17125 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10915 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11256 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8635 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 10853 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 10847 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 12559 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13824 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12110 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17786 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10773 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 12532 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 12527 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 14956 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14605 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13649 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33727 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30924 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16424 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 17855 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 17643 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 20589 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20182 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18743 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2001 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1989 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1342 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1453 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1448 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  1899 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1582 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1476 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1805 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1858 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1224 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1326 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1337 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1497 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1486 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1351 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   144 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   134 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   133 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32228 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22597 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16779 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 17082 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 16964 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 19959 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20430 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20569 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32352 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25342 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15910 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 16287 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 16181 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 20096 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18933 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18642 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30501 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22748 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15139 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 16248 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 16478 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 19770 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20340 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19992 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30441 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22442 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15566 ms, 102760452 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 16449 ms,  87839996 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 16667 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 19754 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18727 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18431 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10946 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9941 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8714 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 10756 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 10811 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 10719 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13260 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11699 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15917 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11282 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 12880 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 12814 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 18869 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14276 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12313 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40952 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34810 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16868 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 18598 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 18517 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 22225 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23231 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22093 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2163 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2035 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1350 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1441 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  1443 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  2018 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1978 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1891 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1825 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1999 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1287 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1385 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1391 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  1685 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1655 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1583 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   148 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   128 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   128 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   127 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37126 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37354 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23671 ms, 228589564 bytes in 1 allocations
           boost::unordered_node_map: 22200 ms, 151832124 bytes in 3999509 allocations
              poc_unordered_node_map: 22423 ms, 151832124 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 31668 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32360 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33160 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36017 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35924 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23341 ms, 228589564 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 22182 ms, 151832124 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 22190 ms, 151832124 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 24063 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27786 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29560 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32996 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33801 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19447 ms, 102760452 bytes in 1 allocations
           boost::unordered_node_map: 21171 ms,  87839996 bytes in 3999509 allocations
              poc_unordered_node_map: 20882 ms,  87839996 bytes in 3999509 allocations
        ankerl::unordered_dense::map: 29378 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30655 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28391 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32694 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34434 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19911 ms, 102760452 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a: 21302 ms,  87839996 bytes in 3999509 allocations
      poc_unordered_node_map, FNV-1a: 21069 ms,  87839996 bytes in 3999509 allocations
ankerl::unordered_dense::map, FNV-1a: 22666 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26958 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24813 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19695 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13740 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9793 ms,  71303176 bytes in 1 allocations
   boost::unordered_node_map: 12545 ms,  87819340 bytes in 5996681 allocations
      poc_unordered_node_map: 12540 ms,  87819340 bytes in 5996681 allocations
ankerl::unordered_dense::map: 16816 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17736 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13699 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24877 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26671 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 13132 ms, 134217728 bytes in 1 allocations
   boost::unordered_node_map: 14453 ms, 135845900 bytes in 6000001 allocations
      poc_unordered_node_map: 14722 ms, 135845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 21008 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21197 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19191 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 35867 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43347 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22018 ms, 197132280 bytes in 1 allocations
   boost::unordered_node_map: 22312 ms, 183845900 bytes in 6000001 allocations
      poc_unordered_node_map: 22263 ms, 183845900 bytes in 6000001 allocations
ankerl::unordered_dense::map: 31724 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40272 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40489 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2754 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3070 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1648 ms,   6422532 bytes in 1 allocations
           boost::unordered_node_map:  1912 ms,   6738764 bytes in 354033 allocations
              poc_unordered_node_map:  2038 ms,   6738764 bytes in 354033 allocations
        ankerl::unordered_dense::map:  3985 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2915 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2533 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2622 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2835 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1396 ms,   6422532 bytes in 1 allocations
   boost::unordered_node_map, FNV-1a:  1738 ms,   6738764 bytes in 354033 allocations
      poc_unordered_node_map, FNV-1a:  1779 ms,   6738764 bytes in 354033 allocations
ankerl::unordered_dense::map, FNV-1a:  2163 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2189 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1914 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   160 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   229 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
   boost::unordered_node_map:   128 ms,      1084 bytes in 59 allocations
      poc_unordered_node_map:   120 ms,      1084 bytes in 59 allocations
ankerl::unordered_dense::map:   164 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   159 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   155 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
