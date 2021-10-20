#include "Vector.h"
#include <iostream>

int main(void)
{
    Vector<int> v(10); // vector of 10 int elements
    std::cout << "Initialize:\n";
    for (int i = 0; i < v.size(); ++i) {
        // for (int i = 0; i < 11; ++i) { // introduce a bug
        v[i] = i;
        std::cout << v[i] << std::endl;
    }

    v.resize(15);
    std::cout << "After resize:\n";
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << std::endl;
    }
    return 0;
}
