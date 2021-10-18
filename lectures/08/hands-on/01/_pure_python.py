#!/usr/bin/env python3
# File       : pure_python.py
# Created    : Mon Oct 18 2021 12:40:02 PM (-0400)
# Author     : Fabian Wermelinger
# Description: Compute the sum of a numpy array in pure python
# Copyright 2021 Harvard University. All Rights Reserved.

def sum(x):
    """Compute the sum of the elements in x"""
    val = 0.0
    for v in x:
        val += v
    return val
