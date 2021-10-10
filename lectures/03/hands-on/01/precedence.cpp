// File       : precedence.cpp
// Description: Pointers and operator precedence
#include <iostream>

int main(void)
{
    // TODO: try to understand this code
    const char *ptr = "Hello World!";
    for (; *ptr;) {
        std::cout << *ptr++ << '\n';
    }
    return 0;
}
