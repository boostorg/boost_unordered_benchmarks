# `boost::unordered_(flat|node)_map` benchmarks

Automated benchmarks of `boost::unordered_flat_map` and `boost::unordered_node_map` against [`absl::flat_hash_map`](https://abseil.io/docs/cpp/guides/container),  [`absl::node_hash_map`](https://abseil.io/docs/cpp/guides/container) and `boost::unordered_map`.

## Benchmarks
* `running_insertion.cpp`: insertion of _n_ random entries into a map of (`uint64_t`, `uint64_t`) pairs, _n_ ranging from 10,000 to 10M.
* `running_erasure.cpp`: traversal of a map with `n` elements filled as before and erasure of entries with odd key (50% on average).
* `scattered_lookup.cpp`
  * Successful: lookup of the `n` keys of the container in the same order as inserted.
  * Unsuccesful: lookup of `n` random keys not related to those inserted (and thus not present in the container with probabilty ~100%).

## How to read the results
### Folder
* `gcc-x64`: GCC 12, x64
* `clang-x64`: Clang 15, x64
* `vs-x64`: Visual Studio 2022, x64
* `clang-arm64`: Clang 12 ARM64
* `gcc-x86`: GCC 12, x86
* `clang-x86`: Clang 15, x86
* `vs-x86`: Visual Studio 2022, x86

### Excel file
* `Running insertion.xlsx`: results of `running_insertion.cpp`
* `Running erasure.xlsx`: results of `running_erasure.cpp`
* `Scattered successful looukp.xlsx`: results of `scattered_lookup.cpp`, successful case
* `Scattered unsuccessful looukp.xlsx`: results of `scattered_lookup.cpp`, unsuccessful case

## Graphs
### GCC 12, x64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x64/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x64/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x64/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x64/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|

### Clang 15, x64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x64/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x64/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x64/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x64/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|

### Visual Studio 2022, x64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x64/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x64/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x64/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x64/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|

### Clang 12, ARM64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-arm64/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-arm64/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-arm64/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-arm64/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|

### GCC 12, x86
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x86/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x86/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x86/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/gcc-x86/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|

### Clang 15, x86
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x86/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x86/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x86/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/clang-x86/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|

### Visual Studio 2022, x86
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x86/Running insertion.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x86/Running erasure.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x86/Scattered successful looukp.xlsx.plot.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_flat_map_cfoa/img/vs-x86/Scattered unsuccessful looukp.xlsx.plot.png" width="250">|
|:-:|:-:|:-:|:-:|
|Running insertion|Running erasure|Successful lookup|Unsuccessful lookup|
