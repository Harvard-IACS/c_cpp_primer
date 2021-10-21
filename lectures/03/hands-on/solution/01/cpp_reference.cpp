// File       : cpp_reference.cpp
// Description: C++ references

#include <array>
#include <iostream>

void print(std::array<int, 4> v, const char msg[])
{
    std::cout << msg << '\n';
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << '\n';
    }
    std::cout << '\n';
}

// 2. set values
void set_values_1(std::array<int, 4> v)
{
    for (size_t i = 0; i < v.size(); ++i) {
        v[i] = 1;
    }
}

void set_values_2(std::array<int, 4> &v) // use the address-of operator
{
    for (size_t i = 0; i < v.size(); ++i) {
        v[i] = 1;
    }
}

int main(void)
{
    // 1.
    std::array<int, 4> a = {0};

    print(a, "After initialization"); // all zeros

    set_values_1(a); // pass-by-value: the function gets its own copy of a
    print(a, "After set_values_1");

    set_values_2(a); // pass-by-reference: the function gets a reference to a
    print(a, "After set_values_2");

    std::cout << "What do you observe?\n";
    return 0;
}
