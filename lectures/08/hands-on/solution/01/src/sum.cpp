// File       : sum.cpp
// Created    : Mon Oct 18 2021 12:57:33 PM (-0400)
// Author     : Fabian Wermelinger
// Description: Custom function to sum array elements of a numpy array
//              (implementation)
// Copyright 2021 Harvard University. All Rights Reserved.
#include "sum.h"
#include <cassert>

double sum(const py::array_t<double, py::array::c_style> x)
{
    // get an info object for array meta data
    py::buffer_info info = x.request();
    assert(1 == info.ndim); // we only care about 1D arrays in this exercise

    // obtain a pointer to the array data
    const double *ptr = static_cast<double *>(info.ptr);

    // get the size of the array
    const size_t n = info.shape[0];

    // compute the sum
    double val = 0.0;
    for (size_t i = 0; i < n; ++i) {
        val += ptr[i];
    }
    return val;
}
