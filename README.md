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
                  std::unordered_map: 31416 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 19561 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map:  9873 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9385 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12164 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11768 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35034 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25171 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13986 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17660 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17275 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16535 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30228 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 19880 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  9160 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9186 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11782 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10770 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33576 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26237 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13150 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17032 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17049 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15754 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10632 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9221 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4439 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7461 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8271 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5676 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11498 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9613 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4811 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7346 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8304 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6051 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27203 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22788 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  8955 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13749 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12884 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10703 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28125 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19721 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 11020 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 13881 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13334 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11284 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27520 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 19927 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11651 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24267 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13792 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11851 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   694 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   543 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   587 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   612 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   514 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32172 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21270 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 10715 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11596 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14253 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14080 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34146 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23622 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 12210 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16421 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16779 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15981 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31027 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21490 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 10001 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11255 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14047 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13135 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31545 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24430 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11584 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16221 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16606 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15376 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11108 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9202 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4333 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7162 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8556 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5801 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12968 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9668 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4971 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7070 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8917 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6342 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29896 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25371 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9011 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14197 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14386 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11717 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31316 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23191 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12723 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16449 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16236 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13958 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28407 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22719 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12915 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26319 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16559 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14295 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1416 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1015 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   630 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   876 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   977 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   655 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36557 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 31342 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 20700 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 16993 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28247 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 28943 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36025 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 37377 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23552 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23068 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30082 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29830 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36412 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 33426 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 19351 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16795 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30716 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29395 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35056 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38671 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 21987 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22095 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30617 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29047 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 20258 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14438 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11358 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12417 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 16569 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12055 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24519 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18538 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12403 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11538 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 17738 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14292 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 28027 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 39696 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 14577 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18334 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 27815 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 24787 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 32694 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 38672 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 24654 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 26955 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 42257 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 35068 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32890 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39008 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 22538 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 43069 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32245 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 25772 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1302 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2467 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1674 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1085 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2468 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2149 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15714 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12818 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  6290 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7111 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8531 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7899 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21059 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16170 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8188 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10751 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9865 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9369 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14098 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10663 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  5761 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6463 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8305 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7577 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20199 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15608 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7941 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10482 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8884 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8198 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7745 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4747 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  2161 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4066 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3630 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2559 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7825 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5123 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2249 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3668 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4022 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3090 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15135 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12484 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4077 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7510 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6036 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4931 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 17083 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15264 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7745 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 10910 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9302 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8455 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16300 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14430 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7664 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24223 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8688 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7884 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   558 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   607 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   278 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   395 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   269 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   314 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30774 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22655 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15296 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25082 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17057 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16922 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34495 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25421 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17271 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19694 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17911 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17805 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28392 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22768 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 14711 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24434 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16904 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16163 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32421 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25974 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16486 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19362 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17605 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17246 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10854 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11161 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8928 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12064 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13729 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11735 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17631 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10663 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17232 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14766 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13291 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33781 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30871 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16012 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20628 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20257 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18794 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1945 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1970 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1311 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1858 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1579 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1483 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1772 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1832 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1240 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1479 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1445 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1357 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   139 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   166 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   153 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   134 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32195 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23895 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 17445 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 19927 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20385 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20594 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32341 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25435 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15888 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20121 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18979 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18767 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30348 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21781 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 14888 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19393 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20357 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19794 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30403 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22289 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15426 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19416 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18728 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18374 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10919 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9943 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8722 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10345 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13034 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11288 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15992 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11151 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18872 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13809 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12428 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40962 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34821 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16792 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22179 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23180 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22064 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2185 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2116 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1352 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2030 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1952 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1860 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1784 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1971 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1269 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1685 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1642 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1616 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   126 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   182 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   185 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35855 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35657 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 24059 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30469 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 30877 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 32450 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34423 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 35166 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22625 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22950 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26992 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28260 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31875 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32808 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19054 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28965 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 29595 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 26684 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31299 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 33058 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19519 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22450 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26336 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 23540 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18758 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13265 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map: 10427 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16476 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17209 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13219 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23253 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24826 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 13478 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 19907 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20995 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 18161 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 34209 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40520 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 20557 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 30848 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 37264 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 37319 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2641 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3035 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1688 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3740 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2785 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2405 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2496 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2909 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1369 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2038 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2106 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1777 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   157 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   217 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   129 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   152 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   156 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   164 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
