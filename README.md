# `boost::concurrent_flat_map` benchmarks

Automated benchmarks of `boost::concurrent_flat_map` against [`oneapi::tbb::concurrent_hash_map`](https://spec.oneapi.io/versions/latest/elements/oneTBB/source/containers/concurrent_hash_map_cls.html) and [`gtl::parallel_flat_hash_map`](https://github.com/greg7mdp/gtl/blob/main/docs/phmap.md).

## Benchmarks
* `parallel_load`: _T_ threads concurrently perform _N_ operations **update**, **successful lookup**
and **unsuccesful lookup**, randomly chosen with probabilities 10%, 45% and 45%, respectively,
on a concurrent map of (`int`, `int`) pairs.
The keys used by all operations are also random, where **update** and **successful lookup** follow a
[Zipf distribution](https://en.wikipedia.org/wiki/Zipf%27s_law#Formal_definition) over [1, <i>N</i>/10]
with skew exponent _s_, and **unsuccesful lookup** follows a Zip distribution
with the same skew _s_ over [1 + <i>N</i>/10, 2<i>N</i>/10] (so, not overlapping with the former interval).

## How to read the results
### Folder
* `gcc-x64`: GCC 12, x64
* `clang-x64`: Clang 15, x64
* `vs-x64`: Visual Studio 2022, x64
* `clang-arm64`: Clang 12 ARM64
* `gcc-x86`: GCC 12, x86
* `clang-x86`: Clang 15, x86
* `vs-x86`: Visual Studio 2022, x86

## Graphs
### GCC 12, x64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x64/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x64/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x64/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x64/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x64/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x64/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|

### Clang 15, x64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x64/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x64/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x64/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x64/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x64/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x64/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|

### Visual Studio 2022, x64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x64/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x64/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x64/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x64/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x64/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x64/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|


### Clang 12, ARM64
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-arm64/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-arm64/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-arm64/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-arm64/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-arm64/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-arm64/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|

### GCC 12, x86
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x86/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x86/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x86/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x86/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x86/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/gcc-x86/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|

### Clang 15, x86
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x86/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x86/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x86/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x86/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x86/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/clang-x86/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|


### Visual Studio 2022, x86
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x86/Parallel workload.xlsx.500k, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x86/Parallel workload.xlsx.500k, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x86/Parallel workload.xlsx.500k, 0.99.png" width="250">|
|:-:|:-:|:-:|
|500k updates, 4.5M lookups,<br/>skew=0.01|500k updates, 4.5M lookups,<br/>skew=0.5|500k updates, 4.5M lookups,<br/>skew=0.99|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x86/Parallel workload.xlsx.5M, 0.01.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x86/Parallel workload.xlsx.5M, 0.5.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_concurrent_flat_map/img/vs-x86/Parallel workload.xlsx.5M, 0.99.png" width="250">|
|:-:|:-:|:-:|
|5M updates, 45M lookups,<br/>skew=0.01|5M updates, 45M lookups,<br/>skew=0.5|5M updates, 45M lookups,<br/>skew=0.99|
