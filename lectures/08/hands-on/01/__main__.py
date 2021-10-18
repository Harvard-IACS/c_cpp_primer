#!/usr/bin/env python3
# File       : __main__.py
# Created    : Mon Oct 18 2021 01:31:04 PM (-0400)
# Author     : Fabian Wermelinger
# Description: Benchmark code
# Copyright 2021 Harvard University. All Rights Reserved.
import time
import numpy as np
from . import (npsum, cppsum, pysum)


def timer(f, msg):
    def inner(x):
        t0 = time.time()
        res = f(x)
        dt = time.time() - t0
        print(f"{msg:<8s}: result={res}  {dt:.8e} seconds")

    return inner


x = np.arange(1000000.0)
t_npsum = timer(npsum, 'numpy')
t_cppsum = timer(cppsum, 'pybind11')
t_pysum = timer(pysum, 'pure')

print(f'len(x) = {len(x)}')
t_npsum(x)
t_cppsum(x)
t_pysum(x)
