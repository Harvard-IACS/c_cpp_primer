#include <iostream>

class Foo
{
    float data_[10];

public:
    Foo(float v)
    {
        for (int i = 0; i < 10; ++i) {
            data_[i] = v;
        }
    }

    Foo(const Foo &c) {}

    Foo operator=(const Foo &c)
    {
        if (&c == this) {
            return *this;
        }
        for (int i = 0; i < 10; ++i) {
            data_[i] = c.data_[i];
        }
        return *this;
    }

    void print() const
    {
        for (int i = 0; i < 10; ++i) {
            std::cout << " " << data_[i];
        }
        std::cout << "\n";
    }
};

int main(void)
{
    Foo f(1);
    Foo g(2);
    Foo h(3);
    f = g = h;
    f.print();
    g.print();
    h.print();
    return 0;
}
