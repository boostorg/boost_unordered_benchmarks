# boost_unordered_benchmark
Automated benchmarks of the new Boost.Unordered against several
standard-compliant implementations of unordered associative containers.

## Background
These benchmarks were originally devised and implemented back in 2013 in [Bannalia](https://bannalia.blogspot.com/):
* [Measuring insertion times for C++ unordered associative containers](https://bannalia.blogspot.com/2013/11/measuring-insertion-times-for-c.html)
* [Measuring insertion times for C++ unordered associative containers with duplicate elements](https://bannalia.blogspot.com/2013/11/measuring-insertion-times-for-c_16.html)
* [Measuring erasure times for C++ unordered associative containers](https://bannalia.blogspot.com/2013/11/measuring-erasure-times-for-c-unordered.html)
* [Measuring lookup times for C++ unordered associative containers](http://bannalia.blogspot.com/2013/11/measuring-lookup-times-for-c-unordered.html)

(`non_unique_scattered_erasure_by_key.cpp` is a new, additional benchmark.)

## How to read the results
### Folder
* `gcc`: GCC 11 with libstdc++-v3, 64 bits
* `clang_libcpp`: Clang 12 with libc++, 64 bits
* `vs`: Visual Studio 2019 with (formerly known as) Dinkumware
  stdlib implementation, 64 bits

### Excel file
* `running insertion.xlsx`: 
  * Containers without duplicate elements: Insertion of *n* random `unsigned int`s, *n* = 10,000 to 3M
  * Containers with duplicate elements: Same as above, but elements are repeated an average of 5 times
* `scattered erasure.xlsx`: Erasure in random order of all the *n* elements of a container of `unsigned int`s, *n* = 10,000 to 3M
* `scattered erasure by key.xlsx`: Erasure by key in random order of all the *n* elements of a container of `std::string`s, *n* = 10,000 to 3M
* `scattered successful looukp.xlsx`: Lookup of the same elements previously fed into the container, in the same random order
* `scattered unsuccessful looukp.xlsx`: Lookup of *n* random numbers generated with a different random seed (and thus not present in the container with very high probability)

### Tab (inside each Excel file)
* `practice`: Without duplicate elements
* `practice non-unique`: With duplicate elements (average value repetition is 5)
* `practice non-unique 5`: Same as above, but the maximum load factor is set to 5
* `practice norehash`: (Insertion only) same as `practice`, but `reserve` is called prior to insertion
* `practice norehash non-unique`:  (Insertion only) same as `practice non-unique`, but `reserve` is called prior to insertion
* `practice norehash non-unique 5`:  (Insertion only) same as `practice non-unique 5`, but `reserve` is called prior to insertion

## Graphs
### GCC 11 + libstdc++-v3
#### Insertion
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/running%20insertion.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/running%20insertion.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/running%20insertion.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/running%20insertion.xlsx.practice norehash.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/running%20insertion.xlsx.practice norehash non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/running%20insertion.xlsx.practice norehash non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements,<br>prior `reserve`|duplicate elements,<br>prior `reserve`|duplicate elements,<br>max load factor 5,<br>prior `reserve`|

#### Erasure
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20erasure.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20erasure.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20erasure.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20erasure%20by%20key.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20erasure%20by%20key.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|
|by key,<br>duplicate elements|by key,<br>duplicate elements,<br>max load factor 5|

#### Successful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20successful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20successful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20successful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

#### Unsuccessful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20unsuccessful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20unsuccessful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/gcc/scattered%20unsuccessful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

### Clang 12 + libc++
#### Insertion
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/running%20insertion.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/running%20insertion.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/running%20insertion.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/running%20insertion.xlsx.practice norehash.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/running%20insertion.xlsx.practice norehash non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/running%20insertion.xlsx.practice norehash non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements,<br>prior `reserve`|duplicate elements,<br>prior `reserve`|duplicate elements,<br>max load factor 5,<br>prior `reserve`|

#### Erasure
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20erasure.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20erasure.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20erasure.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20erasure%20by%20key.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20erasure%20by%20key.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|
|by key,<br>duplicate elements|by key,<br>duplicate elements,<br>max load factor 5|

#### Successful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20successful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20successful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20successful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

#### Unsuccessful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20unsuccessful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20unsuccessful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/clang_libcpp/scattered%20unsuccessful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

### Visual Studio 2019 + Dinkumware
#### Insertion
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/running%20insertion.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/running%20insertion.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/running%20insertion.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/running%20insertion.xlsx.practice norehash.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/running%20insertion.xlsx.practice norehash non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/running%20insertion.xlsx.practice norehash non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements,<br>prior `reserve`|duplicate elements,<br>prior `reserve`|duplicate elements,<br>max load factor 5,<br>prior `reserve`|

#### Erasure
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20erasure.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20erasure.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20erasure.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20erasure%20by%20key.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20erasure%20by%20key.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|
|by key,<br>duplicate elements|by key,<br>duplicate elements,<br>max load factor 5|

#### Successful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20successful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20successful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20successful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|

#### Unsuccessful lookup
|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20unsuccessful%20looukp.xlsx.practice.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20unsuccessful%20looukp.xlsx.practice non-unique.png" width="250">|<img src="https://raw.githubusercontent.com/joaquintides/boost_unordered_benchmark/feature/fig-erasure/img/vs/scattered%20unsuccessful%20looukp.xlsx.practice non-unique 5.png" width="250">|
|:-:|:-:|:-:|
|non-duplicate elements|duplicate elements|duplicate elements,<br>max load factor 5|
