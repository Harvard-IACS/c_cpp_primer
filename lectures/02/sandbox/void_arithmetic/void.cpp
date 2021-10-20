#include <iostream>

int main(void)
{
    int a = 0;
    std::cout << "Address of a:                   " << &a << std::endl;

    void *p = &a;
    std::cout << "Address p is pointing to:       " << p << std::endl;

    void *pp = p + 1;
    std::cout << "Address (p + 1) is pointing to: " << pp << std::endl;

    return 0;
}
