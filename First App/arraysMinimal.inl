#include "arraysMinimal.h"
#include <iostream>

using namespace std;

template <typename Type, int len>
int WorkArrays<Type, len>::getLength() {
    return len;
}

template <typename Type, int len>
void WorkArrays<Type, len>::minimum() {
    int min = this->arr[0];
    for (int i = 0; i < len; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Минимальный элемент: " << min << endl;
}