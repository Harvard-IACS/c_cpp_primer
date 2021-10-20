# Write a vector class template

For an example see the STL (standard template library) vector: [https://en.cppreference.com/w/cpp/container/vector](https://en.cppreference.com/w/cpp/container/vector)

It should provide the following minimum interface:
* Constructor that takes the number of elements in the vector.
* A `resize` method that takes a new number of elements as an argument. Preserve
  as much data as possible in this operation.  Initialize other elements to
  zero.
* Indexing operator that checks for out of bounds indices when compiled with
  debug flags.  It must be possible to use the operator on both sides of an
  assignment.
* A `size()` method that returns the number of elements in the vector.

Compile your code with
```bash
$ g++ main.cpp
```
and run it with `./a.out`.
