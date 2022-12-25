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
                  std::unordered_map: 31331 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22754 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12272 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12588 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12899 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  9109 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12141 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11756 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34895 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25117 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13895 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14073 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14766 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 17434 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17214 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16630 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30199 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23317 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11680 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12361 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12617 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  8833 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11759 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10783 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33509 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26207 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13110 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13881 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 14169 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16939 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17009 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15729 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10553 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9188 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4438 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6541 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6356 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7378 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8242 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5606 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11363 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9558 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4596 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6233 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6314 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7287 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8347 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  5789 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27185 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22971 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9032 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10531 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 10492 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 13799 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12818 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10776 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28219 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21379 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12211 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14046 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 13863 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 14080 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13482 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11488 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27578 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20171 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11700 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 13575 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 13426 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 24492 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14105 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11931 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1295 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   688 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   803 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   807 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:   780 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   580 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   523 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   499 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32092 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24529 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12520 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 12771 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 13016 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11450 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14291 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14046 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34145 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23658 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12211 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12326 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 12570 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16275 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16728 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15892 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30994 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 25093 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11652 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 12529 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 12815 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 11260 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14104 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13218 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31494 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24401 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11574 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 12267 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 12534 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 16230 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16624 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15379 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11149 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9231 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4440 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map:  6553 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map:  6332 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7187 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8509 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5756 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12886 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9624 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4750 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map:  6266 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map:  6287 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  7003 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8973 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6224 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29757 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25416 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9267 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 10635 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 10577 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14174 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14317 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11686 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31272 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23579 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12390 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 14187 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 14067 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16460 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16407 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14029 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28462 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22679 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12690 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 14412 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 14195 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 25357 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16500 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14331 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1410 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1026 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   931 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:   919 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  1049 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   865 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   967 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   631 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40384 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39994 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24427 ms, 322961400 bytes in 1 allocations
              poc_unordered_node_map: 24014 ms, 231283496 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 22849 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 17662 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30577 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31595 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38836 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38808 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24103 ms, 322961400 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24303 ms, 231283496 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 22530 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23685 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30641 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31714 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36680 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39475 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 22010 ms, 197132280 bytes in 1 allocations
              poc_unordered_node_map: 24110 ms, 167291368 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21128 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 16992 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30755 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29815 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35257 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39279 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21993 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 24037 ms, 167291368 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 21896 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 22249 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30244 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28496 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22489 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15883 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11541 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 14972 ms, 119276616 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 13511 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 13384 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18266 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13234 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 29420 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 20597 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13064 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 15369 ms, 167303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 14096 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 11940 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19254 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 16282 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31916 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 43281 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16667 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18977 ms, 215303176 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 16645 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 19375 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 30704 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27678 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36588 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42845 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 25984 ms,  49283064 bytes in 1 allocations
              poc_unordered_node_map: 32275 ms,  51873520 bytes in 1418656 allocations
         poc_pool_unordered_node_map: 30844 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 27879 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43208 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36010 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33876 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39456 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23105 ms,  49283064 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 29352 ms,  51873520 bytes in 1418656 allocations
 poc_pool_unordered_node_map, FNV-1a: 28239 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 44484 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34275 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27470 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1269 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2548 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1731 ms,      4096 bytes in 1 allocations
      poc_unordered_node_map:  1971 ms,      3992 bytes in 114 allocations
 poc_pool_unordered_node_map:  1968 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:  1137 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2584 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2397 ms,      4352 bytes in 1 allocations
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
                  std::unordered_map: 30742 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22714 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15529 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 16248 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16487 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 24982 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17030 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16874 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34400 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25403 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17319 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17769 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17955 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19376 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17872 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17685 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28487 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22779 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15135 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 16041 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16338 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 24603 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16992 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16410 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32418 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26140 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16609 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17358 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17738 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19398 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17657 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17231 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10869 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11220 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8559 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10842 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10516 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 12012 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13850 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12015 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17804 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10889 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12630 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12168 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 14967 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15776 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13016 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33691 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30825 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16088 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 17772 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 17649 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20535 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20179 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18693 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2017 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1984 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1335 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1442 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1450 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  1934 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1573 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1476 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1807 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1847 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1230 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1318 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1332 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1503 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1456 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1373 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   112 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   134 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   153 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   162 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   138 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35490 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24482 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17881 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 18481 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 18577 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 21724 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 21978 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22138 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35455 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27456 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17233 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 17621 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 17762 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 21844 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20376 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19894 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30362 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22627 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15244 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 16278 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 16706 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 19380 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20330 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19903 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30456 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22297 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15506 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 16395 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 16788 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 19410 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18696 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18326 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10936 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9965 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8713 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 10727 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 10546 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 10296 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13128 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11627 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15969 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11247 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 12718 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 12437 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 18852 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13615 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12436 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40852 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34708 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16826 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 18529 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 18435 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 22281 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23110 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22165 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2186 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2058 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1353 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1439 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1446 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  2032 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1964 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1875 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1848 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1993 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1278 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1382 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1391 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  1682 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1652 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1601 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   129 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   127 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   127 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37502 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36957 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23460 ms, 228589564 bytes in 1 allocations
              poc_unordered_node_map: 22689 ms, 151832124 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 21204 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 31632 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32189 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33500 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36026 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36093 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23383 ms, 228589564 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 22144 ms, 151832124 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 20859 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 23828 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27891 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29512 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34061 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33985 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19616 ms, 102760452 bytes in 1 allocations
              poc_unordered_node_map: 20937 ms,  87839996 bytes in 3999509 allocations
         poc_pool_unordered_node_map: 19146 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map: 30079 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 30861 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28914 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33172 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34239 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19894 ms, 102760452 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a: 21402 ms,  87839996 bytes in 3999509 allocations
 poc_pool_unordered_node_map, FNV-1a: 19783 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a: 22655 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27151 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25322 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20183 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 14370 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10217 ms,  71303176 bytes in 1 allocations
      poc_unordered_node_map: 12856 ms,  87819340 bytes in 5996681 allocations
 poc_pool_unordered_node_map: 11710 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 17418 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18197 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 14144 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25060 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 27412 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 13222 ms, 134217728 bytes in 1 allocations
      poc_unordered_node_map: 14816 ms, 135845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 13649 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 20748 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21357 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19099 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36385 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43466 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21989 ms, 197132280 bytes in 1 allocations
      poc_unordered_node_map: 22562 ms, 183845900 bytes in 6000001 allocations
 poc_pool_unordered_node_map: 20789 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map: 32179 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 41052 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40759 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2694 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3002 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1656 ms,   6422532 bytes in 1 allocations
              poc_unordered_node_map:  1982 ms,   6738764 bytes in 354033 allocations
         poc_pool_unordered_node_map:  1922 ms,         0 bytes in 0 allocations
        ankerl::unordered_dense::map:  3907 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2972 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2475 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2650 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2847 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1370 ms,   6422532 bytes in 1 allocations
      poc_unordered_node_map, FNV-1a:  1711 ms,   6738764 bytes in 354033 allocations
 poc_pool_unordered_node_map, FNV-1a:  1638 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map, FNV-1a:  2143 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2140 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1824 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   165 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   220 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   113 ms,      1096 bytes in 1 allocations
      poc_unordered_node_map:   127 ms,      1084 bytes in 59 allocations
 poc_pool_unordered_node_map:   122 ms,         0 bytes in 0 allocations
ankerl::unordered_dense::map:   157 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   156 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   149 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
