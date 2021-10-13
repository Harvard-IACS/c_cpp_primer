#include "Ghost.h"

void f(Ghost a, const Ghost &b)
{
    a.spook();
    b.spook();
}

int main(void)
{
    Ghost *g = new Ghost;
    {
        Ghost *r = new Rider;
        f(*g, *r);
        delete r;
    }
    delete g;
    return 0;
}
