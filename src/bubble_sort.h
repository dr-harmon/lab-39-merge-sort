#pragma once

#include <utility>
#include <vector>

template <typename T>
void bubbleSort(std::vector<T>& v)
{ 
    for (int i = 0; i < v.size(); i++) {
        for (int j = 1; j < v.size() - i; j++) {
            if (v[j - 1] > v[j]) {
                std::swap(v[j - 1], v[j]);
            }
        }
    }
}
