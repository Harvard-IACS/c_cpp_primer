// File       : ternary.cpp
// Description: More compact code with ternary operator

int main(int argc, char* argv[])
{
    // TODO: Write the following code in lines 8-13 with only one single
    // statement, that is, you can only use one semi-colon ';'
    int a; // statement 1
    if (argc > 0) {
        a = 10; // statement 2
    } else {
        a = -10; // statement 3
    }
    // What is the benefit of writing this in a single statement?
    return 0;
}
