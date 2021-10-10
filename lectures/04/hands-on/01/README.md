# Hands-On

**Task:** Compute the first derivative of an arbitrary function $f(x)$ using a
centered finite difference scheme.  Your program should read the _number of
intervals_ $n$ you want to use to discretize the domain $\mathbb{R}\ni
x\in[a,b]$ where $a$ and $b$ are the endpoints of the interval on the real line.
For example,

```bash
./dfdx 5000
```

will compute the derivative $\tfrac{df}{dx}(x)$ of $f(x)$ using 5000 divisions
for the interval $[a,b]$.  You evaluate the function at the points
$x_i=a+i\Delta x$ for all $i=0,1,\ldots,n$, where
$$
\Delta x = \frac{b - a}{n}.
$$
The central finite difference scheme we are using _approximates_ the values of
$\tfrac{df}{dx}(x_i)$ according to the rule
$$
\frac{df}{dx}(x_i) \approx \frac{f(x_{i+1}) - f(x_{i-1})}{2\Delta x}.
$$

### Breakdown of tasks

1. Write a program called `dfdx` that takes an integer argument $n$
2. The program computes the derivative of the function
   $$
   f(x) = e^{-\frac12 x}\sin(x)\bigl(\cos(x)\bigr)^2
   $$
3. The program should write the result into a file where each line contains the
   value of $x_i$, $f(x_i)$ and $\tfrac{df}{dx}(x_i)$ (3 numbers) separated by
   white space, for all $i=1,2,\ldots,n-1$.  The numbers should be formatted in
   Engineering notation with 6 decimal places, for example:
   ```text
   0.000000e+00  0.000000e+00  0.000000e+00
   0.100000e+00  1.237482e+00  6.374822e+00
   0.200000e+00  1.458696e+00  8.112393e+00
   ...
   ```
4. Write your code in the skeleton file `dfdx.cpp`.  Refer to the additional
   comments given in the file.
