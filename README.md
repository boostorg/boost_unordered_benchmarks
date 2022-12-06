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
                  std::unordered_map: 36999 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 27803 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 14949 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 13536 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 16151 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 15878 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38880 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26593 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 14708 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18454 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18838 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17726 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 35604 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 28065 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 13737 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 13162 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 15910 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 14738 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36140 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27579 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13758 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 18316 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18615 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17090 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 13009 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map: 10731 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  5325 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  8404 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  9964 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  6690 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 13725 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map: 10290 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5309 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7898 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  9529 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6803 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31600 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 26842 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 10071 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 15256 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14976 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 12236 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31556 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23651 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12612 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16556 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16591 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 14179 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28781 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22846 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12802 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 27927 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16642 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14343 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1417 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1017 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   893 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   883 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   977 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   639 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 39767 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 41974 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 27862 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17999 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 31614 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 32847 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 39504 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 40377 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 25081 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24040 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 31634 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 32779 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36414 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 41954 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 25042 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17264 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 31025 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 30275 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35492 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 39199 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22211 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22393 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30813 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28905 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22325 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 19864 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11586 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13151 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18113 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13447 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 27494 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 20933 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 13485 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 12483 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 19225 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 16281 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31631 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 43588 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16311 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 19583 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 31795 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27965 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36204 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 43033 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26240 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27788 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43132 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35808 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34063 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39794 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23209 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42845 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 33946 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27144 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1286 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2659 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1828 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1161 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2495 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2320 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15792 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14294 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7184 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7223 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8495 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  8358 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21197 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16251 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8335 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10699 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9257 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8892 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14180 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13507 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6283 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6761 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8207 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7503 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20173 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15718 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7926 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10504 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9026 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8464 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7774 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4699 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2054 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4069 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3668 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2574 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7829 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  4996 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2086 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3733 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4117 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3138 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 16544 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 14636 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  5194 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  8789 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  7283 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  6502 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 24634 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 25885 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 16423 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 37256 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 29344 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map: 32533 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33913 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 43657 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 29877 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 39495 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 31766 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 30890 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   953 ms,      5192 bytes in 114 allocations
        boost::unordered_map:  1573 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1445 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1324 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:  1086 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:  1210 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 31745 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23262 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15929 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25930 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17502 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 17263 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35238 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26248 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17533 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20301 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18267 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18070 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32028 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25342 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 16630 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 27310 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 18685 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 17979 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35996 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 29137 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 18064 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21736 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19153 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18426 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 12726 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 12745 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9757 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 14118 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 15409 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 12958 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 20291 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12191 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19821 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 16692 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 14507 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 38718 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34924 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 17684 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 23443 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 22452 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 20541 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2013 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2012 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1367 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1888 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1610 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1507 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1847 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1902 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1247 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1525 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1476 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1374 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   127 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   156 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   135 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36771 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 25322 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 18357 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 22768 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 22385 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 22622 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36823 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 28439 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17517 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23016 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20818 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20503 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 34411 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 25444 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 16584 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 22129 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 22125 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 21697 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34318 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24909 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16980 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22017 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 20340 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 20061 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11713 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 10510 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9196 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 11032 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13696 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11729 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 16791 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11798 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19392 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14624 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13027 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41573 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 35311 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 17322 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22867 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23622 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22469 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2173 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2074 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1361 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2072 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1969 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1853 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1822 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1991 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1276 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1681 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1656 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1623 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   130 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   184 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   128 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 38188 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 37598 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 26561 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 32006 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 33661 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 34573 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36362 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36317 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24478 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24160 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28801 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 30753 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33892 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 35682 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 22699 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29983 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31394 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 29012 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32515 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34018 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22299 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22892 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26710 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25255 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20057 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 16446 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10267 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 17776 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18427 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13717 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25747 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26283 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12648 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 21801 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 22381 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 20024 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36069 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 42690 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 22209 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 32238 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40158 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40209 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2710 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3145 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1730 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  4036 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  3094 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2665 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2589 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2892 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1462 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2145 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2259 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1892 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   244 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:    87 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   191 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   163 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   168 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
