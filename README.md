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
                  std::unordered_map: 32559 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 23524 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12939 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 10152 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12795 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 12374 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35880 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25951 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14659 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18169 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17790 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16592 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31195 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24115 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 12270 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 10150 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 12433 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 11405 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34319 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27104 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13954 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17617 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17482 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16240 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11408 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9892 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4957 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8035 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8765 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6118 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12188 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10177 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5123 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  8158 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8831 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6472 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31742 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 26188 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 10893 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 16122 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14684 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12187 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28534 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21509 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12282 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14080 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13545 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11631 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27971 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20302 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11902 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25344 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14085 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 12069 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   702 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   816 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   616 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   610 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   539 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31792 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 24504 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12595 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11684 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14309 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14175 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33741 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23302 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12219 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16206 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16884 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16093 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30734 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24926 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11691 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11383 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14145 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13335 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31177 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24492 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11651 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16019 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16854 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15656 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11250 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9335 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4610 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7265 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8660 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5865 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13074 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9726 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4953 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7273 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9074 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6451 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 30056 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25353 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9404 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14306 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14450 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11744 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31521 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23635 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12531 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16547 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16588 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14160 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28732 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22814 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12799 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27661 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16609 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14344 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1417 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1014 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   885 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   874 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   974 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   624 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37879 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39703 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 26012 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17549 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30188 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31065 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37672 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38775 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24299 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24044 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30603 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31312 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34623 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 40446 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 23893 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16909 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30099 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29334 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34633 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39157 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21883 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22757 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30142 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28046 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20804 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 18756 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 10826 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12680 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17202 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12704 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25889 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 19167 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12367 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11692 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18802 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 15333 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29232 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 41098 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 15579 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 19740 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 29728 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27032 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33812 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 41311 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26029 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27397 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43948 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36549 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34098 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39437 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23309 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43073 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34187 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27239 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1329 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2554 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  2099 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1125 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2609 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2322 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 17389 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 17148 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  9900 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  8567 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map: 10188 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  8769 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21326 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16105 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8195 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10887 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9289 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8739 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14099 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13428 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6288 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6724 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8236 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7474 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20137 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15709 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7820 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10479 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8969 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8186 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7779 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4700 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2019 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4072 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3683 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2586 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7776 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5101 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2043 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3689 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4043 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3186 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15131 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12493 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4123 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7612 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6102 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  5008 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 30645 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 33047 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 18695 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 21776 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 22171 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 19501 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29475 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 27910 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 18183 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 35638 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20023 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 19052 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   978 ms,      5192 bytes in 114 allocations
        boost::unordered_map:  1676 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1481 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1338 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:  1111 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:  1128 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 33469 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24832 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17102 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 28400 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18531 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18481 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37496 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28179 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 18948 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21621 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19627 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19467 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28149 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 23187 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15525 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 25231 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17425 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16780 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32338 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26770 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16864 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19932 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18030 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17294 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10967 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11266 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8752 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12376 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14069 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11980 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17855 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11028 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17405 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15048 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13330 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33701 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30980 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16350 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20501 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20563 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 19100 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2026 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1986 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1354 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1870 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1574 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1488 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1804 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1870 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1236 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1507 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1463 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1355 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   125 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   171 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   155 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   149 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36483 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25082 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 18419 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22648 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22627 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22853 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36572 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28639 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17540 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22966 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20988 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20749 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30038 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22973 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15520 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19793 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20606 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 20335 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 29954 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22640 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15839 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19850 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18985 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18644 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12056 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10907 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9697 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11310 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 14394 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12373 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16186 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11474 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18737 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14001 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12600 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40755 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35145 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 17259 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22319 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23743 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22459 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2208 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2069 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1361 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2030 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1983 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1849 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1820 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1988 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1274 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1677 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1654 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1622 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   130 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   187 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37428 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 38047 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 25727 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31533 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 32686 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34168 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35823 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35726 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23859 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24135 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28199 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30054 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32716 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35284 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 21955 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29840 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31232 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29136 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32654 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34616 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22078 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22575 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27121 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 24889 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19827 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 16409 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10180 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 18160 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18430 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13887 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25491 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 25559 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12581 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 21639 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 22117 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 20344 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36352 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42222 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21557 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 32107 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40295 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40551 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2674 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3156 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1684 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3945 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  3009 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2608 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2711 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2862 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1436 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2177 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2202 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1837 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   161 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   219 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:    89 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   190 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   159 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   193 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
