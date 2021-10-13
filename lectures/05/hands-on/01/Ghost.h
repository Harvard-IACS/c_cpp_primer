#include <iostream>

class Ghost
{
public:
    Ghost(const char *name = "Ghost") {}

    void spook() {}
};

class Rider : public Ghost // Rider inherits from Ghost
{
public:
    Rider() : Ghost("Rider") {}
};
