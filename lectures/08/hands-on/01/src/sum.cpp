// File       : sum.cpp
// Created    : Mon Oct 18 2021 12:57:33 PM (-0400)
// Author     : Fabian Wermelinger
// Description: Custom function to sum array elements of a numpy array
//              (implementation)
// Copyright 2021 Harvard University. All Rights Reserved.
#include "sum.h"
#include <cassert>

double sum(/* TODO: add argument and type from TODO in sum.h */)
{
    // TODO: implement the array summation here
    // Hint:
    //  1. You can get a 'buffer_info' struct with meta data for your numpy
    //     array by calling 'x.request()' where 'x' is a py::array_t argument
    //     for this function.
    //  2. You can get a pointer to the numpy array data from the buffer_info
    //     struct above.  It needs to be cast to the correct type.
    //  3. The number of elements in the numpy array can also be obtained from
    //     the buffer_info struct.
}
