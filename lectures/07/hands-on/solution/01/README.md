# Virtual inheritance

You are given the following `main.cpp` file

```cpp
int main(void)
{
    // define instances for 3 classes
    A a;
    B b;
    C c;

    // use base pointers to A and B for testing
    A* pa = &a; pa->f();
    pa = &b;    pa->f();
    pa = &c;    pa->f();
    B* pb = &b; pb->f();
    pb = &c;    pb->f();

    return 0;
}
```

Define three classes `A`, `B` and `C`, where `B` inherits from `A` and `C`
inherits from `B`.  The public interface of all classes should consist of a
function `f()` that is supposed to print a different message to `stdout`
depending on the class it is implemented.

**Tasks:**

1. Implement the three classes `A`, `B` and `C`.  Do not declare `f()` as
   `virtual`.
2. Predict the outcome of `main.cpp` _before_ you run it.
3. Add the `virtual` keyword to `f()` in class `B`.  Repeat step 2.
4. Add the `virtual` keyword to `f()` in class `C`.  Repeat step 2.
4. Add the `virtual` keyword to `f()` in class `A`.  Repeat step 2.
