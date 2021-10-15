# Copy assignment operator

Study the code in `copy_assignment_bug.cpp` and use a debugger (e.g. `gdb`) to
figure out why you get this output

```text
 6.3661e-42 0 9.18341e-41 1.4013e-45 -6.00393e-18 4.59121e-41 -179.948 3.0631e-41 2.8026e-45 0
 3 3 3 3 3 3 3 3 3 3
 3 3 3 3 3 3 3 3 3 3
```

while the expected output should be

```text
 3 3 3 3 3 3 3 3 3 3
 3 3 3 3 3 3 3 3 3 3
 3 3 3 3 3 3 3 3 3 3
```

What is the fix to this bug?
