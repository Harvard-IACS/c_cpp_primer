# Find and insert elements using the STL

**Task:**  We want to find an element in a vector of `std::string`'s and add a
new string with a different value than the ones in the vector _before_ it.

* Use `std::string` as it allows for comparison with `==` (needed to find
  elements)
* Setup a small `std::vector` using `std::string` and initialize the strings to
  identical values.  Set one element in the vector to a different value.
* Check
  [https://en.cppreference.com/w/cpp/algorithm](https://en.cppreference.com/w/cpp/algorithm)
  for something that you can use to _find_ elements in a container.
* Solve the problem using an algorithm from `<algorithm>` and possibly `insert`
  on the container.  Find the element in the string with the value you changed
  above and insert a new string with yet another value before it.  Print your
  result to `stdout`.

Write your solution in `main.cpp`.
