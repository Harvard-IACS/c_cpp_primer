// File       : main.cpp
// Description: Lecture 2: Hands-On 02, pointers
#include <iostream>

int main(void)
{
    int a[100]; // array with 100 elements

    // create a pointer that points to the first element in the array `a`
    int *p0 = &a[0];

    // print the address of the pointer to stdout. (You can use std::cout
    // to print to stdout.)
    std::cout << "Address of the pointer: " << &p0 << std::endl;

    // print the address the pointer is pointing to, to stdout.
    std::cout << "Address the pointer points to: " << p0 << std::endl;

    // create another pointer that points to the last element in the array
    // `a`
    int *p1 = &a[99]; // C/C++ is based on 0-indexing

    // print the difference between the address the pointer you just
    // created points to and the address the first pointer points to.  What do
    // you observe?
    std::cout << "Difference p1 - p0: " << p1 - p0 << std::endl;
    // The difference is exactly 99.  Why is it not 100?  Because p1 points to
    // the beginning of a[99] and not to the end!

    return 0;
}
