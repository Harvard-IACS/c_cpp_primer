// File       : dfdx.cpp
// Description: Program to compute the first derivative of a function f
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[])
{
    assert(2 == argc);
    const int n = std::atoi(argv[1]);

    // interval boundaries
    const double a = -10.0;
    const double b = 0.0;

    // define the function f.  You may use a C++ lambda or a regular C/C++
    // function.  The signature should look like this: double f(double x);
    auto f = [](double x) {
        const double c = std::cos(x);
        return std::exp(-0.5 * x) * std::sin(x) * c * c;
    };

    // allocate two arrays on the heap for the values x_i and f(x_i).
    // Initialize the arrays by computing the corresponding values.
    //
    // Note: we could also solve this task without allocating memory.  For the
    // sake of this exercise, we chose to allocate arrays and pre-compute the
    // values.
    double *xi = new double[n + 1];
    double *fi = new double[n + 1];
    const double dx = (b - a) / n;
    for (int i = 0; i < n + 1; ++i) {
        xi[i] = a + i * dx;
        fi[i] = f(xi[i]);
    }

    // compute the derivative and write the result into a file
    std::ofstream out("dfdx.dat"); // output file stream
    out << std::scientific;        // set scientific format (a.k.a engineering)
    const double fac = 1.0 / (2.0 * dx); // constant, avoid divisions in loop
    // we only write the solution for x[1], x[2], ..., x[n-1]
    for (int i = 1; i < n; ++i) {
        const double dfdx = fac * (fi[i + 1] - fi[i - 1]);
        out << xi[i] << '\t' << fi[i] << '\t' << dfdx << '\n';
    }

    // free the allocated memory
    delete[] xi;
    delete[] fi;

    return 0;
}
