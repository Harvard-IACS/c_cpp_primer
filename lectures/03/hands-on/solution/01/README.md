# Hands-On

**Task:**

## Function arguments by C++ reference

We use the `#include <array>` header for C++ arrays in this task.  Implement the
tasks below inside the `cpp_reference.cpp` source file.

1. Define an array `a` of type `std::array<int, 4>` and initialize it to zero.
2. Write two functions that set the values of an input array to something
   different than `0` for all its elements (you can choose whatever you like).
   Name them `set_values_1` and `set_values_2`. The first function
   (`set_values_1`) is already partially implemented for you, you must complete
   the function body. The second function (`set_values_2`) is identical to the
   first but it should take a C++ reference of its input argument instead.
4. Compile the code and run it.  What do you observe?  (see `cpp_reference.cpp`
   for additional comments and code).

## Operator precedence and pointers

The `++` unary operator can be used to increment a pointer.  Recall pointer
arithmetic: we can add (or subtract) integral values from pointer base addresses
which shifts the pointer address:

```cpp
int a[10];
const int *p = &a[0];
*(p + 0); // a[0]
*(p + 1); // a[1]
*(p + 2); // a[2]
...       // and so on
```

Compile the code in `precedence.cpp` and run it to check the output.  Then study
the code in the file and try to understand what happens.

## Ternary operator

See the file `ternary.cpp` for the instructions.
