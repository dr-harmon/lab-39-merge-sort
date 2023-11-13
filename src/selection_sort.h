#pragma once

#include <utility>
#include <vector>

template <typename T>
void selectionSort(std::vector<T>& v)
{
    for (int i = 0; i < (int)v.size() - 1; i++) {
        int minJ = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minJ]) {
                minJ = j;
            }
        }
        if (minJ != i) {
            std::swap(v[i], v[minJ]);
        }
    }
}
