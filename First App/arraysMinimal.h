#pragma once

#include <stdio.h>
#include <cassert>

template <class T, int len>
class WorkArrays {
private:
    T* arr;
public:
    WorkArrays() {
        this->arr = new T[len];
    }

    //    WorkArrays(int length) {
    //        this->len = length;
    //        this->arr = new T[length];
    //    }

    ~WorkArrays() {
        delete[] this->arr;
    }

    T& operator[](int index) {
        assert(index >= 0 && index < len);
        return arr[index];
    }

    virtual void minimum();
    int getLength();
};
