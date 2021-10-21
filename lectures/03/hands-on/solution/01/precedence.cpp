// File       : precedence.cpp
// Description: Pointers and operator precedence
#include <iostream>

int main(void)
{
    const char *ptr =
        "Hello World!"; // strings in C/C++ are nul terminated '\0'
    for (; *ptr;) { // the loop is terminated when *ptr returns \0, which is the
                    // same as 'false'

        // The post-increment operator '++' has higher precedence than the
        // dereference operator '*'.  See
        // https://en.cppreference.com/w/cpp/language/operator_precedence
        //
        // Here is what happens:
        //
        // 1. ptr++ is applied.  This is the same as 'ptr = ptr + 1' BUT this
        // operator stores a copy of the old value before the increment.  After
        // the increment it returns the OLD value
        //
        // 2. The dereference operator is applied to the old value that has been
        // returned by ptr++.
        std::cout << *ptr++ << '\n'; // the '\n' adds a newline.  Each character
                                     // is printed on a single output line
    }
    return 0;
}
