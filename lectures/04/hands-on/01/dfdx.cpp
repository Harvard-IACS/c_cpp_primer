// File       : dfdx.cpp
// Description: Program to compute the first derivative of a function f
#include <cassert>
#include <cstdlib>
// TODO: include more headers here if you need them

int main(int argc, char *argv[])
{
    assert(2 == argc);
    const int n = std::atoi(argv[1]);

    // interval boundaries
    const double a = -10.0;
    const double b = 0.0;

    // TODO:
    // define the function f.  You may use a C++ lambda or a regular C/C++
    // function.  The signature should look like this: double f(double x);

    // TODO:
    // allocate two arrays on the heap for the values x_i and f(x_i).
    // Initialize the arrays by computing the corresponding values.
    //
    // Note: we could also solve this task without allocating memory.  For the
    // sake of this exercise, we chose to allocate arrays and pre-compute the
    // values.

    // TODO:
    // compute the derivative and write the result into a file with the required
    // format

    // TODO:
    // free the allocated memory

    return 0;
}
