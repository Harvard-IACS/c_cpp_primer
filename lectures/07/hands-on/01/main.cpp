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
