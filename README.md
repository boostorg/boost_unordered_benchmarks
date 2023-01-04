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
                  std::unordered_map: 31366 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 22759 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 12247 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9345 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12101 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11753 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34922 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25141 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13943 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17552 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17184 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16187 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30358 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 23383 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11619 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9273 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11804 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10862 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33728 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26405 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13184 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17106 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16997 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15781 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10560 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9182 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4436 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7384 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8227 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5631 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11454 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9595 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4624 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7302 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8249 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6046 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27388 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22904 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9046 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13856 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12855 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10785 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28226 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 21358 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12183 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14079 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13494 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11528 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27668 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 20181 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 11742 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24329 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 14004 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11911 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1294 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   692 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   801 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   583 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   582 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   509 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 35532 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 26833 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 13964 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 12740 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 15626 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 15339 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37449 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25540 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 13770 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17904 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18236 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17298 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30977 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 24900 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 11620 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11247 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14077 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13136 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31530 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24420 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 11558 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16187 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16599 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15339 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11102 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9241 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  4478 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7097 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8569 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5774 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12895 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9615 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4761 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7022 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8990 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6347 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29862 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25134 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  9281 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14164 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14386 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11608 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31278 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23502 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 12529 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16527 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16354 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13907 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28569 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22714 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 12817 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26613 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16550 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14281 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1418 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1010 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   892 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   874 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   975 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   625 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 40162 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 39853 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_flat_map: 24249 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17509 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 30576 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 31453 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 38398 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38904 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 24279 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23732 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30991 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 31207 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 36285 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 39155 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map: 21670 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 17042 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 30745 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 29566 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35088 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 38979 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 22077 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22248 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 30102 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 28186 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 22180 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 15973 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map: 11504 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 13319 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18157 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 13796 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 25974 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 18647 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 12414 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11825 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 18701 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14864 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 31389 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 42394 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map: 16522 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 19812 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 31788 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 27768 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 36693 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 42801 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map: 26097 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 28178 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 43790 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 36671 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34169 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 39983 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a: 23489 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 44284 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 34100 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 27748 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1331 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2567 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:  1759 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1198 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2617 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2257 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15566 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 14308 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_flat_map:  7256 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7135 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8407 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7880 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 21078 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16116 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  8113 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10758 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9274 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8759 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14083 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 13418 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_flat_map:  6416 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6658 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8213 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7457 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20171 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15608 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a:  7849 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10494 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9006 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8174 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7722 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4679 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_flat_map:  1996 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  3976 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3673 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2592 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7787 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5009 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  2018 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3692 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  3987 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3172 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15142 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12471 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_flat_map:  4078 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7660 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6045 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4911 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16798 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15057 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_flat_map:  7451 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11560 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9383 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8847 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16607 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14641 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_flat_map, FNV-1a:  7820 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24460 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8778 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  8003 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   368 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   613 ms,      4392 bytes in 115 allocations
   boost::unordered_flat_map:   495 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   399 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   274 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   317 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 30707 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22682 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 15553 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 25091 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 17118 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 16885 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34370 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25455 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 17242 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19548 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17894 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17755 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28487 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22766 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15203 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 24612 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 17043 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16405 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32514 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26118 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 16564 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19472 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17641 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17008 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10917 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11194 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8551 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12114 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13815 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11701 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17675 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 10813 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 17093 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 15161 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 13130 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33650 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30829 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16134 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20542 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20224 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18836 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2016 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1983 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1349 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  1860 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1579 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1477 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1811 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1858 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1235 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1509 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1451 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1361 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   107 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   123 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   152 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   141 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32336 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 22706 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 16884 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20071 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20674 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20687 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32475 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25426 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15965 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20307 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19068 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18682 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30215 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22729 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 15073 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19364 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20286 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19944 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30263 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22239 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 15483 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19391 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18667 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18352 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10945 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9991 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  8731 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10309 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13190 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11277 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15970 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 11211 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18920 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 13971 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12557 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 40893 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34773 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 16855 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22170 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23137 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22127 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2167 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2042 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1337 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2030 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1953 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1869 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1816 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1975 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1271 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1690 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1644 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1588 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   106 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   130 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   186 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 37161 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 36813 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_flat_map: 23648 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 31617 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 31971 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 33257 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 35738 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36077 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 23750 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24436 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28154 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29522 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 33680 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 33877 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_flat_map: 19542 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 29928 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 31007 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 28815 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33082 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34219 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_flat_map, FNV-1a: 19918 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23042 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 27057 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 25051 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19937 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 14282 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_flat_map:  9816 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 17186 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 18140 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 14027 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24606 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 26634 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 12768 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 21244 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 21310 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 19036 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 36179 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 43083 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_flat_map: 21675 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 31524 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 40034 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 40750 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2735 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  3035 ms,   7434104 bytes in 354034 allocations
           boost::unordered_flat_map:  1657 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3927 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2954 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2487 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2646 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2833 ms,   7434104 bytes in 354034 allocations
   boost::unordered_flat_map, FNV-1a:  1415 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  2095 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2210 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1875 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   236 ms,      1152 bytes in 60 allocations
   boost::unordered_flat_map:   114 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   174 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   164 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   150 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
