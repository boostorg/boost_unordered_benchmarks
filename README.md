# `boost::unordered_[multi]set` benchmarks
Automated benchmarks of `boost::unordered_[multi]set` against `std::unordered_[multi]set` and Boost.MultiIndex.

## Benchmarks
* `unique_running_insertion.cpp`: insertion of *n* random `unsigned int`s into a set, *n* = 10,000 to 3M.
* `non_unique_running_insertion.cpp`: same as above, but the container is a multiset and elements are repeated an average of 5 times.
* `unique_scattered_erasure.cpp`: erasure by iterator in random order of the *n* elements of a set filled as above.
* `non_unique_scattered_erasure.cpp`: same as prior, but with multisets.
* `non_unique_scattered_erasure_by_key.cpp`: erasure by key of all the elements of a multiset of `std::string`s filled with random strings with average repetition 5, *n* = 10,000 to 3M.
* `unique_scattered_lookup.cpp`:
  * Successful: lookup of the *n* keys of the container in the same order as inserted.
  * Unsuccesful: lookup of _n_ random keys not related to those inserted (and thus not present in the container with probabilty ~100%).
* `non_unique_scattered_lookup.cpp`: same as prior, but with multisets.

## How to read the results
### Folder
* `gcc`: GCC 11 with libstdc++-v3, 64 bits
* `clang_libcpp`: Clang 12 with libc++, 64 bits
* `vs`: Visual Studio 2019 with (formerly known as) Dinkumware
  stdlib implementation, 64 bits

### Excel file
* `running insertion.xlsx`: results of `unique_running_insertion.cpp` and `non_unique_running_insertion.cpp`
* `scattered erasure.xlsx`: results of `unique_scattered_erasure.cpp` and `non_unique_scattered_erasure.cpp`
* `scattered erasure by key.xlsx`: results of `non_unique_scattered_erasure_by_key.cpp`
* `scattered successful looukp.xlsx`: results of `unique_scattered_lookup.cpp` and `non_unique_scattered_lookup.cpp`, successful case
* `scattered unsuccessful looukp.xlsx`: results of `unique_scattered_lookup.cpp` and `non_unique_scattered_lookup.cpp`, unsuccessful case

### Tab (inside each Excel file)
* `practice`: Without duplicate elements (sets)
* `practice non-unique`: With duplicate elements (multisets)
* `practice non-unique 5`: Same as above, but the maximum load factor is set to 5
* `practice norehash`: (Insertion only) same as `practice`, but `reserve` is called prior to insertion
* `practice norehash non-unique`:  (Insertion only) same as `practice non-unique`, but `reserve` is called prior to insertion
* `practice norehash non-unique 5`:  (Insertion only) same as `practice non-unique 5`, but `reserve` is called prior to insertion

## Graphs
### GCC 11 + libstdc++-v3
#### Insertion
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/running%20insertion.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/running%20insertion.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/running%20insertion.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/running%20insertion.xlsx.practice norehash.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/running%20insertion.xlsx.practice norehash non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/running%20insertion.xlsx.practice norehash non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements,<br>prior `reserve`|duplicate elements,<br>prior `reserve`|duplicate elements,<br>max load factor 5,<br>prior `reserve`|

#### Erasure
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20erasure.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20erasure.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20erasure.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20erasure%20by%20key.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20erasure%20by%20key.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|
|by key,<br>duplicate elements|by key,<br>duplicate elements,<br>max load factor 5|

#### Successful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20successful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20successful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20successful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

#### Unsuccessful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20unsuccessful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20unsuccessful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/gcc/scattered%20unsuccessful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

### Clang 12 + libc++
#### Insertion
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/running%20insertion.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/running%20insertion.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/running%20insertion.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/running%20insertion.xlsx.practice norehash.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/running%20insertion.xlsx.practice norehash non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/running%20insertion.xlsx.practice norehash non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements,<br>prior `reserve`|duplicate elements,<br>prior `reserve`|duplicate elements,<br>max load factor 5,<br>prior `reserve`|

#### Erasure
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20erasure.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20erasure.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20erasure.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20erasure%20by%20key.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20erasure%20by%20key.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|
|by key,<br>duplicate elements|by key,<br>duplicate elements,<br>max load factor 5|

#### Successful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20successful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20successful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20successful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

#### Unsuccessful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20unsuccessful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20unsuccessful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/clang_libcpp/scattered%20unsuccessful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

### Visual Studio 2019 + Dinkumware
#### Insertion
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/running%20insertion.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/running%20insertion.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/running%20insertion.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/running%20insertion.xlsx.practice norehash.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/running%20insertion.xlsx.practice norehash non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/running%20insertion.xlsx.practice norehash non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements,<br>prior `reserve`|duplicate elements,<br>prior `reserve`|duplicate elements,<br>max load factor 5,<br>prior `reserve`|

#### Erasure
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20erasure.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20erasure.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20erasure.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20erasure%20by%20key.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20erasure%20by%20key.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|
|by key,<br>duplicate elements|by key,<br>duplicate elements,<br>max load factor 5|

#### Successful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20successful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20successful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20successful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

#### Unsuccessful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20unsuccessful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20unsuccessful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmarks/boost_unordered_set/img/vs/scattered%20unsuccessful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|
