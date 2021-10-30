# Write an extension module to compute the sum of a `numpy` array

In this hands-on we want to write a custom `sum` function that should behave
similar to `np.sum`
([https://numpy.org/doc/stable/reference/generated/numpy.sum.html](https://numpy.org/doc/stable/reference/generated/numpy.sum.html))
for a 1D array input (flat array).

We want to benchmark the performance of our custom implementation with respect
to the `numpy` version and a pure `python` implementation.  The code can be
built using once

```bash
meson setup --buildtype=release
```

and then build during development with

```bash
meson compile -C build
```

At last, the `python` package can be installed with (use a virtual environment)

```bash
python -m pip install .
```

The benchmark can be run with

```bash
python -m sum_bench
```

after the package has been installed.

## Tasks

1. Implement the type of the argument that is passed into the `sum` function in
   `src/sum.h`.  The argument should be of the type for a numpy array with
   `double` precision.
2. Implement element summation in `src/sum.cpp`
3. Implement the binding code in `src/bindings.cpp`
