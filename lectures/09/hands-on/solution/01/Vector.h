// File       : Vector.h
// Description: Generic vector class
// Copyright 2021 Harvard University. All Rights Reserved.
#include <cassert>

template <typename T>
class Vector
{
public:
    Vector(const int n) : size_(n), data_(new T[n]) {}
    ~Vector() { free_(); }

    int size() const { return size_; }
    void resize(const int n)
    {
        T *tmp = new T[n];
        for (int i = 0; i < n; ++i) {
            tmp[i] = 0;
        }

        const int preserve = (n < size_) ? n : size_;
        for (int i = 0; i < preserve; ++i) {
            tmp[i] = data_[i];
        }
        free_();
        size_ = n;
        data_ = tmp;
    }

    T &operator[](const int i)
    {
        assert(i >= 0);
        assert(i < size_);
        return data_[i];
    }

    const T &operator[](const int i) const
    {
        assert(i >= 0);
        assert(i < size_);
        return data_[i];
    }

private:
    void free_()
    {
        if (data_) {
            delete[] data_;
            size_ = 0;
            data_ = nullptr;
        }
    }

    int size_;
    T *data_;
};
