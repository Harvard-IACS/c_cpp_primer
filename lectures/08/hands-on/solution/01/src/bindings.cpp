// File       : bindings.cpp
// Created    : Mon Oct 18 2021 01:06:10 PM (-0400)
// Author     : Fabian Wermelinger
// Description: Python extension module bindings
// Copyright 2021 Harvard University. All Rights Reserved.
#include "sum.h"

PYBIND11_MODULE(_custom, m)
{
    m.def("sum", &sum, "Sum the elements of a numpy array");
}
