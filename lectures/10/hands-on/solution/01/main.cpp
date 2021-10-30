#include <algorithm> // include STL algorithm
#include <iostream>
#include <string>
#include <vector> // include STL vector

// helper to print to stdout
void print(const std::string &x) { std::cout << x << " "; }
void show(std::vector<std::string> &v)
{
    for_each(v.begin(), v.end(), print);
    std::cout << std::endl;
}

int main(void)
{
    // initialize v
    std::vector<std::string> v(5, "A");

    // change one element
    v[3] = "B";
    show(v);

    // find the target
    std::vector<std::string>::iterator found = find(v.begin(), v.end(), "B");
    // auto found = find(v.begin(), v.end(), "B"); // also a good solution

    // check if we found it
    if (found != v.end()) {
        // insert a new element
        v.insert(found, "C");
    } else {
        std::cout << "Did not find the string 'B'" << std::endl;
    }
    show(v);

    return 0;
}
