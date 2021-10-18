// This pybind11 header is needed for the binding code below
#include <pybind11/pybind11.h>

// Here we implement the add function.  This is example is very trivial.
int add(int i, int j) { return i + j; }

// The following code is the python binding code that will create a module with
// the name 'example'. What we define inside the PYBIND11_MODULE macro below is
// similar to the code we have seen for the pure python module before.
//
// For this example we have the implementation of add and the binding code
// together in the same file.  Usually implementation and the binding code are
// in separate files.
PYBIND11_MODULE(example, m)
{
    // Optional module doc string
    m.doc() = "pybind11 example extension module";

    // Module function definition.  Note that we pass a reference to the add
    // function above.
    m.def("add", &add, "A function which adds two numbers implemented in C++");
}
