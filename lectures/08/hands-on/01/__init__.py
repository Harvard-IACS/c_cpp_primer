#!/usr/bin/env python3
# File       : __init__.py
# Created    : Mon Oct 18 2021 12:53:02 PM (-0400)
# Author     : Fabian Wermelinger
# Description: Custom array sum extension module
# Copyright 2021 Harvard University. All Rights Reserved.
"""
Extension module to compare the performance of summing up the elements of a
numpy array using pure python and a custom C++ implementation
"""

from numpy import sum as npsum
from ._custom import sum as cppsum
from ._pure_python import sum as pysum

__all__ = ['npsum', 'cppsum', 'pysum']
