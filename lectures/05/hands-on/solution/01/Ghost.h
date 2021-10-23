#include <iostream>

class Ghost
{
public:
    Ghost(const char *name = "Ghost") : name_(name)
    {
        std::cout << "Construct A\n";
    }

    virtual ~Ghost() { std::cout << "Destruct A\n"; }

    Ghost(const Ghost &c) : name_(c.name_) { std::cout << "Copy A\n"; }

    void spook() const { std::cout << name_ << " BOO!\n"; }

private:
    const char *name_;
};

class Rider : public Ghost // Rider inherits from Ghost
{
public:
    Rider() : Ghost("Rider") { std::cout << "Construct B\n"; }

    ~Rider() { std::cout << "Destruct B\n"; }
};
