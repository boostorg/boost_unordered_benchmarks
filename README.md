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
                  std::unordered_map: 31308 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 19534 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map:  9786 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map:  9671 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map:  9215 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 12099 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 11765 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34918 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25014 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13899 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 14349 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17578 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17183 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 16177 ms, 343932904 bytes in 1 allocations
```
<!--gcc-x64/string.cpp.txt-->

<!--gcc-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30349 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 19427 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  9770 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  9359 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  9193 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 11803 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 10793 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 33624 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 26373 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 13950 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 13414 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 17083 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17038 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15771 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/string_view.cpp.txt-->

<!--gcc-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10546 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9181 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6176 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4182 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7336 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8196 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5576 ms,  75497480 bytes in 1 allocations
```
<!--gcc-x64/uint32.cpp.txt-->

<!--gcc-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 11438 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9559 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6415 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4716 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7310 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8470 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6398 ms, 142606336 bytes in 1 allocations
```
<!--gcc-x64/uint64.cpp.txt-->

<!--gcc-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27237 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 22876 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10318 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8933 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 13813 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 12826 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 10718 ms, 209715192 bytes in 1 allocations
```
<!--gcc-x64/uuid.cpp.txt-->

<!--gcc-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 28263 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 19807 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 12795 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 11004 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 14051 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 13454 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 11510 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 27480 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 19831 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 13522 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 11640 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 25795 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 13953 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 11888 ms,  52428792 bytes in 1 allocations
```
<!--gcc-x64/word_count.cpp.txt-->

<!--gcc-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1301 ms,      3728 bytes in 114 allocations
        boost::unordered_map:   687 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   607 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   540 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   579 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   546 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   499 ms,      4352 bytes in 1 allocations
```
<!--gcc-x64/word_size.cpp.txt-->

### Clang 12, x64
<!--clang-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32064 ms, 271711224 bytes in 3999509 allocations
                boost::unordered_map: 21247 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 10573 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 10666 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 11548 ms, 234881024 bytes in 2 allocations
                 absl::node_hash_map: 14202 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 14065 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34161 ms, 271711224 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 23671 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12177 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 12221 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16406 ms, 234881024 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16735 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15495 ms, 343932904 bytes in 1 allocations
```
<!--clang-x64/string.cpp.txt-->

<!--clang-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30955 ms, 207719096 bytes in 3999509 allocations
                boost::unordered_map: 21429 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 10618 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 10225 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 11236 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map: 14033 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 13091 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31461 ms, 207719096 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 24494 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 12262 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 11784 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 16196 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16585 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 15334 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/string_view.cpp.txt-->

<!--clang-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 11193 ms, 192888392 bytes in 5996681 allocations
        boost::unordered_map:  9215 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  6275 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  4260 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  7205 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  8524 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map:  5787 ms,  75497480 bytes in 1 allocations
```
<!--clang-x64/uint32.cpp.txt-->

<!--clang-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 12862 ms, 240941512 bytes in 6000001 allocations
        boost::unordered_map:  9560 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  6484 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4811 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  7029 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  8696 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map:  6534 ms, 142606336 bytes in 1 allocations
```
<!--clang-x64/uint64.cpp.txt-->

<!--clang-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 29763 ms, 288941512 bytes in 6000001 allocations
        boost::unordered_map: 25378 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 10348 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  8955 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 14107 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 14407 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 11629 ms, 209715192 bytes in 1 allocations
```
<!--clang-x64/uuid.cpp.txt-->

<!--clang-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 31190 ms,  68323424 bytes in 1418656 allocations
                boost::unordered_map: 23222 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 14426 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 12422 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 16520 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map: 16305 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 13918 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 28426 ms,  68323424 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 22655 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 14349 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 12581 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 26917 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 16443 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 14249 ms,  52428792 bytes in 1 allocations
```
<!--clang-x64/word_count.cpp.txt-->

<!--clang-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1434 ms,      3728 bytes in 114 allocations
        boost::unordered_map:  1009 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   676 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   628 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   874 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   965 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:   625 ms,      4352 bytes in 1 allocations
```
<!--clang-x64/word_size.cpp.txt-->

### Visual Studio 2019, x64
<!--vs-x64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36592 ms, 291081368 bytes in 3999510 allocations
                boost::unordered_map: 31482 ms, 245453904 bytes in 3999510 allocations
           boost::unordered_node_map: 20567 ms, 231283496 bytes in 3999509 allocations
           boost::unordered_flat_map: 20720 ms, 322961400 bytes in 1 allocations
        ankerl::unordered_dense::map: 17000 ms, 279707224 bytes in 2 allocations
                 absl::node_hash_map: 28909 ms, 235477800 bytes in 3999509 allocations
                 absl::flat_hash_map: 29119 ms, 343932904 bytes in 1 allocations
          std::unordered_map, FNV-1a: 36215 ms, 291081368 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36355 ms, 245453904 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23130 ms, 231283496 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 23090 ms, 322961400 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 23544 ms, 279707224 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 28679 ms, 235477800 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 29739 ms, 343932904 bytes in 1 allocations
```
<!--vs-x64/string.cpp.txt-->

<!--vs-x64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 32941 ms, 227089224 bytes in 3999510 allocations
                boost::unordered_map: 31229 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map: 20588 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map: 18146 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map: 16161 ms, 194667880 bytes in 2 allocations
                 absl::node_hash_map: 27996 ms, 171485672 bytes in 3999509 allocations
                 absl::flat_hash_map: 27157 ms, 209715192 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32780 ms, 227089224 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 36693 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 23012 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 20881 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21574 ms, 194667880 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 29249 ms, 171485672 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 26544 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/string_view.cpp.txt-->

<!--vs-x64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 19619 ms, 278138072 bytes in 5996682 allocations
        boost::unordered_map: 14119 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map: 14211 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map: 10913 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12289 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 16349 ms, 123470920 bytes in 5996681 allocations
         absl::flat_hash_map: 12510 ms,  75497480 bytes in 1 allocations
```
<!--vs-x64/uint32.cpp.txt-->

<!--vs-x64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 24292 ms, 326217760 bytes in 6000002 allocations
        boost::unordered_map: 17877 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map: 14405 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 12240 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 11641 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 17708 ms, 171497480 bytes in 6000001 allocations
         absl::flat_hash_map: 14337 ms, 142606336 bytes in 1 allocations
```
<!--vs-x64/uint64.cpp.txt-->

<!--vs-x64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 27149 ms, 374217768 bytes in 6000002 allocations
        boost::unordered_map: 37472 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map: 17292 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map: 14600 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 18476 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 27591 ms, 219497480 bytes in 6000001 allocations
         absl::flat_hash_map: 24543 ms, 209715192 bytes in 1 allocations
```
<!--vs-x64/uuid.cpp.txt-->

<!--vs-x64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 33637 ms,  90300672 bytes in 1418657 allocations
                boost::unordered_map: 39260 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map: 30397 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map: 25143 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 27016 ms,  54572488 bytes in 2 allocations
                 absl::node_hash_map: 41617 ms,  52922096 bytes in 1418656 allocations
                 absl::flat_hash_map: 34757 ms,  52428792 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32188 ms,  90300672 bytes in 1418657 allocations
        boost::unordered_map, FNV-1a: 37638 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a: 27448 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a: 22682 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 42034 ms,  54572488 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 32483 ms,  52922096 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a: 25631 ms,  52428792 bytes in 1 allocations
```
<!--vs-x64/word_count.cpp.txt-->

<!--vs-x64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:  1227 ms,     11840 bytes in 115 allocations
        boost::unordered_map:  2501 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:  2016 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:  1577 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:  1210 ms,      4304 bytes in 2 allocations
         absl::node_hash_map:  2458 ms,      4120 bytes in 114 allocations
         absl::flat_hash_map:  2238 ms,      4352 bytes in 1 allocations
```
<!--vs-x64/word_size.cpp.txt-->


### Clang 12, ARM64
<!--clang-arm64/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 15675 ms, 244656248 bytes in 3999509 allocations
                boost::unordered_map: 12843 ms, 213457840 bytes in 3999510 allocations
           boost::unordered_node_map:  6837 ms, 199287432 bytes in 3999509 allocations
           boost::unordered_flat_map:  6318 ms, 260046848 bytes in 1 allocations
        ankerl::unordered_dense::map:  7129 ms, 201326592 bytes in 2 allocations
                 absl::node_hash_map:  8329 ms, 203481728 bytes in 3999509 allocations
                 absl::flat_hash_map:  7934 ms, 276824040 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20914 ms, 244656248 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 16105 ms, 213457840 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8417 ms, 199287432 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  8197 ms, 260046848 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10781 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9821 ms, 203481728 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  9177 ms, 276824040 bytes in 1 allocations
```
<!--clang-arm64/string.cpp.txt-->

<!--clang-arm64/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 14103 ms, 212660184 bytes in 3999509 allocations
                boost::unordered_map: 10715 ms, 181461776 bytes in 3999510 allocations
           boost::unordered_node_map:  6141 ms, 167291368 bytes in 3999509 allocations
           boost::unordered_flat_map:  5900 ms, 197132280 bytes in 1 allocations
        ankerl::unordered_dense::map:  6681 ms, 167772160 bytes in 2 allocations
                 absl::node_hash_map:  8262 ms, 171485664 bytes in 3999509 allocations
                 absl::flat_hash_map:  7425 ms, 209715184 bytes in 1 allocations
          std::unordered_map, FNV-1a: 20173 ms, 212660184 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 15724 ms, 181461776 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a:  8413 ms, 167291368 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a:  7834 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 10517 ms, 167772160 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  9010 ms, 171485664 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a:  8092 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/string_view.cpp.txt-->

<!--clang-arm64/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map:  7768 ms, 196600184 bytes in 5996681 allocations
        boost::unordered_map:  4674 ms, 149424400 bytes in 5996682 allocations
   boost::unordered_node_map:  3143 ms, 119276616 bytes in 5996681 allocations
   boost::unordered_flat_map:  2087 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map:  4068 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map:  3695 ms, 123470912 bytes in 5996681 allocations
         absl::flat_hash_map:  2584 ms,  75497472 bytes in 1 allocations
```
<!--clang-arm64/uint32.cpp.txt-->

<!--clang-arm64/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map:  7777 ms, 244679864 bytes in 6000001 allocations
        boost::unordered_map:  5090 ms, 197477520 bytes in 6000002 allocations
   boost::unordered_node_map:  3225 ms, 167303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  2198 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map:  3703 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map:  4060 ms, 171497472 bytes in 6000001 allocations
         absl::flat_hash_map:  3162 ms, 142606328 bytes in 1 allocations
```
<!--clang-arm64/uint64.cpp.txt-->

<!--clang-arm64/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 15056 ms, 292679864 bytes in 6000001 allocations
        boost::unordered_map: 12488 ms, 245477520 bytes in 6000002 allocations
   boost::unordered_node_map:  4853 ms, 215303176 bytes in 6000001 allocations
   boost::unordered_flat_map:  4086 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map:  7746 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map:  6001 ms, 219497472 bytes in 6000001 allocations
         absl::flat_hash_map:  4869 ms, 209715184 bytes in 1 allocations
```
<!--clang-arm64/uuid.cpp.txt-->

<!--clang-arm64/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map: 16772 ms,  69916096 bytes in 1418656 allocations
                boost::unordered_map: 15265 ms,  58766384 bytes in 1418657 allocations
           boost::unordered_node_map:  8578 ms,  51873520 bytes in 1418656 allocations
           boost::unordered_flat_map:  7649 ms,  49283064 bytes in 1 allocations
        ankerl::unordered_dense::map: 11072 ms,  67108864 bytes in 2 allocations
                 absl::node_hash_map:  9267 ms,  52922088 bytes in 1418656 allocations
                 absl::flat_hash_map:  8521 ms,  52428784 bytes in 1 allocations
          std::unordered_map, FNV-1a: 16285 ms,  69916096 bytes in 1418656 allocations
        boost::unordered_map, FNV-1a: 14495 ms,  58766384 bytes in 1418657 allocations
   boost::unordered_node_map, FNV-1a:  8521 ms,  51873520 bytes in 1418656 allocations
   boost::unordered_flat_map, FNV-1a:  7573 ms,  49283064 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 24277 ms,  67108864 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  8729 ms,  52922088 bytes in 1418656 allocations
         absl::flat_hash_map, FNV-1a:  7906 ms,  52428784 bytes in 1 allocations
```
<!--clang-arm64/word_count.cpp.txt-->

<!--clang-arm64/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   462 ms,      5192 bytes in 114 allocations
        boost::unordered_map:   610 ms,      4392 bytes in 115 allocations
   boost::unordered_node_map:   348 ms,      3992 bytes in 114 allocations
   boost::unordered_flat_map:   275 ms,      4096 bytes in 1 allocations
ankerl::unordered_dense::map:   394 ms,      4096 bytes in 2 allocations
         absl::node_hash_map:   273 ms,      4112 bytes in 114 allocations
         absl::flat_hash_map:   314 ms,      4344 bytes in 1 allocations
```
<!--clang-arm64/word_size.cpp.txt-->


### GCC 11, x86
<!--gcc-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 34125 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 24459 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17094 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 16625 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 27003 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 18420 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 18255 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 37819 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 27726 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 19121 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 18548 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21291 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 19302 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 19111 ms, 243269612 bytes in 1 allocations
```
<!--gcc-x86/string.cpp.txt-->

<!--gcc-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 28308 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 22736 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15462 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14644 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 21597 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 16870 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 16097 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32196 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25941 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 17320 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 16713 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19241 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 17563 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 17177 ms, 109051900 bytes in 1 allocations
```
<!--gcc-x86/string_view.cpp.txt-->

<!--gcc-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10881 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map: 11196 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 11374 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8884 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 12096 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13754 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11699 ms,  75497472 bytes in 1 allocations
```
<!--gcc-x86/uint32.cpp.txt-->

<!--gcc-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 17698 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13005 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10364 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 15034 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14640 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12861 ms, 142606328 bytes in 1 allocations
```
<!--gcc-x86/uint64.cpp.txt-->

<!--gcc-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33651 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 30753 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 17629 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16261 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 20530 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 20212 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 18743 ms, 209715184 bytes in 1 allocations
```
<!--gcc-x86/uuid.cpp.txt-->

<!--gcc-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  1938 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  1993 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1434 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1336 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2011 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1580 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1481 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1800 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1842 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1345 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1251 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1523 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1460 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1362 ms,   6815740 bytes in 1 allocations
```
<!--gcc-x86/word_count.cpp.txt-->

<!--gcc-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   105 ms,       932 bytes in 59 allocations
        boost::unordered_map:   109 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   148 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   136 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   163 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   152 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   133 ms,      1152 bytes in 1 allocations
```
<!--gcc-x86/word_size.cpp.txt-->

### Clang 12, x86
<!--clang-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 32189 ms, 167851676 bytes in 3999509 allocations
                boost::unordered_map: 23806 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 17285 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 17332 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 20023 ms, 184549376 bytes in 2 allocations
                 absl::node_hash_map: 20526 ms, 153929268 bytes in 3999509 allocations
                 absl::flat_hash_map: 20551 ms, 243269612 bytes in 1 allocations
          std::unordered_map, FNV-1a: 32266 ms, 167851676 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 25343 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16097 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15997 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 20520 ms, 184549376 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18971 ms, 153929268 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18657 ms, 243269612 bytes in 1 allocations
```
<!--clang-x86/string.cpp.txt-->

<!--clang-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 30256 ms, 103859548 bytes in 3999509 allocations
                boost::unordered_map: 21734 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 15686 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 14871 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 19401 ms, 117440512 bytes in 2 allocations
                 absl::node_hash_map: 20271 ms,  89937140 bytes in 3999509 allocations
                 absl::flat_hash_map: 19791 ms, 109051900 bytes in 1 allocations
          std::unordered_map, FNV-1a: 30313 ms, 103859548 bytes in 3999509 allocations
        boost::unordered_map, FNV-1a: 22316 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 16393 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 15705 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 19317 ms, 117440512 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 18706 ms,  89937140 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 18239 ms, 109051900 bytes in 1 allocations
```
<!--clang-x86/string_view.cpp.txt-->

<!--clang-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 10944 ms, 120430916 bytes in 5996681 allocations
        boost::unordered_map:  9956 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 10939 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map:  8719 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 10281 ms, 134217728 bytes in 2 allocations
         absl::node_hash_map: 13140 ms,  89916484 bytes in 5996681 allocations
         absl::flat_hash_map: 11253 ms,  75497472 bytes in 1 allocations
```
<!--clang-x86/uint32.cpp.txt-->

<!--clang-x86/uint64.cpp.txt-->
```
uint64.cpp
        boost::unordered_map: 15938 ms, 148311624 bytes in 6000002 allocations
   boost::unordered_node_map: 13249 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 10821 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 18874 ms, 201326592 bytes in 2 allocations
         absl::node_hash_map: 14285 ms, 137943044 bytes in 6000001 allocations
         absl::flat_hash_map: 12623 ms, 142606328 bytes in 1 allocations
```
<!--clang-x86/uint64.cpp.txt-->

<!--clang-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 41192 ms, 216470756 bytes in 6000001 allocations
        boost::unordered_map: 34825 ms, 196311624 bytes in 6000002 allocations
   boost::unordered_node_map: 18605 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 16863 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 22244 ms, 268435456 bytes in 2 allocations
         absl::node_hash_map: 23104 ms, 185943044 bytes in 6000001 allocations
         absl::flat_hash_map: 22237 ms, 209715184 bytes in 1 allocations
```
<!--clang-x86/uuid.cpp.txt-->

<!--clang-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2162 ms,   9931428 bytes in 354033 allocations
                boost::unordered_map:  2095 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1436 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1333 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  2039 ms,  10485760 bytes in 2 allocations
                 absl::node_hash_map:  1928 ms,   6869828 bytes in 354033 allocations
                 absl::flat_hash_map:  1842 ms,   6815740 bytes in 1 allocations
          std::unordered_map, FNV-1a:  1769 ms,   9931428 bytes in 354033 allocations
        boost::unordered_map, FNV-1a:  1945 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1354 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1273 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1663 ms,  10485760 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  1618 ms,   6869828 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1567 ms,   6815740 bytes in 1 allocations
```
<!--clang-x86/word_count.cpp.txt-->

<!--clang-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   107 ms,       932 bytes in 59 allocations
        boost::unordered_map:   150 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   137 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   124 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   181 ms,      1536 bytes in 2 allocations
         absl::node_hash_map:   185 ms,      1108 bytes in 59 allocations
         absl::flat_hash_map:   127 ms,      1152 bytes in 1 allocations
```
<!--clang-x86/word_size.cpp.txt-->

### Visual Studio 2019, x86
<!--vs-x86/string.cpp.txt-->
```
string.cpp
                  std::unordered_map: 36084 ms, 177536756 bytes in 3999510 allocations
                boost::unordered_map: 35321 ms, 156295880 bytes in 3999510 allocations
           boost::unordered_node_map: 22743 ms, 151832124 bytes in 3999509 allocations
           boost::unordered_flat_map: 23738 ms, 228589564 bytes in 1 allocations
        ankerl::unordered_dense::map: 30282 ms, 215927716 bytes in 2 allocations
                 absl::node_hash_map: 30604 ms, 153929276 bytes in 3999509 allocations
                 absl::flat_hash_map: 31975 ms, 243269620 bytes in 1 allocations
          std::unordered_map, FNV-1a: 34033 ms, 177536756 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 34618 ms, 156295880 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 21469 ms, 151832124 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 22339 ms, 228589564 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 22734 ms, 215927716 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 26783 ms, 153929276 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 27880 ms, 243269620 bytes in 1 allocations
```
<!--vs-x86/string.cpp.txt-->

<!--vs-x86/string_view.cpp.txt-->
```
string_view.cpp
                  std::unordered_map: 31745 ms, 113544612 bytes in 3999510 allocations
                boost::unordered_map: 32314 ms,  92303752 bytes in 3999510 allocations
           boost::unordered_node_map: 20341 ms,  87839996 bytes in 3999509 allocations
           boost::unordered_flat_map: 18465 ms, 102760452 bytes in 1 allocations
        ankerl::unordered_dense::map: 28451 ms, 130888372 bytes in 2 allocations
                 absl::node_hash_map: 28550 ms,  89937148 bytes in 3999509 allocations
                 absl::flat_hash_map: 26781 ms, 109051908 bytes in 1 allocations
          std::unordered_map, FNV-1a: 31538 ms, 113544612 bytes in 3999510 allocations
        boost::unordered_map, FNV-1a: 32161 ms,  92303752 bytes in 3999510 allocations
   boost::unordered_node_map, FNV-1a: 20412 ms,  87839996 bytes in 3999509 allocations
   boost::unordered_flat_map, FNV-1a: 19316 ms, 102760452 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a: 21651 ms, 130888372 bytes in 2 allocations
         absl::node_hash_map, FNV-1a: 25042 ms,  89937148 bytes in 3999509 allocations
         absl::flat_hash_map, FNV-1a: 23031 ms, 109051908 bytes in 1 allocations
```
<!--vs-x86/string_view.cpp.txt-->

<!--vs-x86/uint32.cpp.txt-->
```
uint32.cpp
          std::unordered_map: 18764 ms, 163055760 bytes in 5996682 allocations
        boost::unordered_map: 13222 ms, 100271784 bytes in 5996682 allocations
   boost::unordered_node_map: 13404 ms,  87819340 bytes in 5996681 allocations
   boost::unordered_flat_map: 10334 ms,  71303176 bytes in 1 allocations
ankerl::unordered_dense::map: 16292 ms, 130888368 bytes in 2 allocations
         absl::node_hash_map: 17569 ms,  89916492 bytes in 5996681 allocations
         absl::flat_hash_map: 13056 ms,  75497480 bytes in 1 allocations
```
<!--vs-x86/uint32.cpp.txt-->

<!--vs-x86/uint64.cpp.txt-->
```
uint64.cpp
          std::unordered_map: 23940 ms, 211108888 bytes in 6000002 allocations
        boost::unordered_map: 24978 ms, 172311624 bytes in 6000002 allocations
   boost::unordered_node_map: 15639 ms, 135845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 13639 ms, 134217728 bytes in 1 allocations
ankerl::unordered_dense::map: 20374 ms, 194667872 bytes in 2 allocations
         absl::node_hash_map: 20352 ms, 137943052 bytes in 6000001 allocations
         absl::flat_hash_map: 17582 ms, 142606336 bytes in 1 allocations
```
<!--vs-x86/uint64.cpp.txt-->

<!--vs-x86/uuid.cpp.txt-->
```
uuid.cpp
          std::unordered_map: 33879 ms, 259108896 bytes in 6000002 allocations
        boost::unordered_map: 40245 ms, 220311624 bytes in 6000002 allocations
   boost::unordered_node_map: 21766 ms, 183845900 bytes in 6000001 allocations
   boost::unordered_flat_map: 20652 ms, 197132280 bytes in 1 allocations
ankerl::unordered_dense::map: 30678 ms, 258447376 bytes in 2 allocations
         absl::node_hash_map: 37515 ms, 185943052 bytes in 6000001 allocations
         absl::flat_hash_map: 36868 ms, 209715192 bytes in 1 allocations
```
<!--vs-x86/uuid.cpp.txt-->

<!--vs-x86/word_count.cpp.txt-->
```
word_count.cpp
                  std::unordered_map:  2551 ms,  11274964 bytes in 354034 allocations
                boost::unordered_map:  2904 ms,   7434104 bytes in 354034 allocations
           boost::unordered_node_map:  1976 ms,   6738764 bytes in 354033 allocations
           boost::unordered_flat_map:  1629 ms,   6422532 bytes in 1 allocations
        ankerl::unordered_dense::map:  3785 ms,   9793612 bytes in 2 allocations
                 absl::node_hash_map:  2800 ms,   6869836 bytes in 354033 allocations
                 absl::flat_hash_map:  2383 ms,   6815748 bytes in 1 allocations
          std::unordered_map, FNV-1a:  2499 ms,  11274964 bytes in 354034 allocations
        boost::unordered_map, FNV-1a:  2645 ms,   7434104 bytes in 354034 allocations
   boost::unordered_node_map, FNV-1a:  1622 ms,   6738764 bytes in 354033 allocations
   boost::unordered_flat_map, FNV-1a:  1364 ms,   6422532 bytes in 1 allocations
ankerl::unordered_dense::map, FNV-1a:  1961 ms,   9793612 bytes in 2 allocations
         absl::node_hash_map, FNV-1a:  2025 ms,   6869836 bytes in 354033 allocations
         absl::flat_hash_map, FNV-1a:  1732 ms,   6815748 bytes in 1 allocations
```
<!--vs-x86/word_count.cpp.txt-->

<!--vs-x86/word_size.cpp.txt-->
```
word_size.cpp
          std::unordered_map:   156 ms,      1456 bytes in 60 allocations
        boost::unordered_map:   218 ms,      1152 bytes in 60 allocations
   boost::unordered_node_map:   119 ms,      1084 bytes in 59 allocations
   boost::unordered_flat_map:   116 ms,      1096 bytes in 1 allocations
ankerl::unordered_dense::map:   151 ms,      1528 bytes in 2 allocations
         absl::node_hash_map:   154 ms,      1116 bytes in 59 allocations
         absl::flat_hash_map:   164 ms,      1160 bytes in 1 allocations
```
<!--vs-x86/word_size.cpp.txt-->
