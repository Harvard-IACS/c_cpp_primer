// File       : main.cpp
// Description: Lecture 2: Hands-On 01
#include <iostream>

void init(int v[], int N)
{
    for (int i = 0; i < N; ++i) {
        v[i] = i;
    }
}

void cp(const int src[], int dst[], int N)
{
    for (int i = 0; i < N; ++i) {
        dst[i] = src[i];
    }
}

#define N 100
int main(void)
{
    int v1[N];
    int v2[N];

    init(v1, N);
    cp(v1, v2, N);

    for (int i = 0; i < N; ++i) {
        std::cout << v1[i] - v2[i] << '\n';
    }
    return 0;
}
