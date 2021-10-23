# Reverse engineer a class

You are given a `main.cpp` file that you can compile (once you fixed a small
issue).  The code includes a header `Ghost.h` for which you are given a skeleton
code for a class `Ghost` and one that derives from it called `Rider`.  Reverse
engineer the classes `Ghost` and `Rider` such that the following output is
reproduced when you execute the code in `main.cpp`:

```text
Construct A
Construct A
Construct B
Copy A
Ghost BOO!
Rider BOO!
Destruct A
Destruct B
Destruct A
Destruct A
```
