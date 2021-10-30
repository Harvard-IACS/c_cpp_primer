// File       : sum.h
// Created    : Mon Oct 18 2021 12:57:33 PM (-0400)
// Author     : Fabian Wermelinger
// Description: Custom function to sum array elements of a numpy array
// Copyright 2021 Harvard University. All Rights Reserved.
#include <pybind11/numpy.h>
#include <pybind11/pybind11.h>
namespace py = pybind11;

// function signature for our custom sum function
extern double sum(py::array_t<double, py::array::c_style> x);
