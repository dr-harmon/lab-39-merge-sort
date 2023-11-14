#pragma once

#include <algorithm>
#include <vector>

template <typename T>
void merge(const std::vector<T>& S1, const std::vector<T>& S2, std::vector<T>& S)
{
    auto p1 = S1.begin();
    auto p2 = S2.begin();
    while (p1 != S1.end() && p2 != S2.end()) {
        S.push_back(*p1 < *p2 ? *p1++ : *p2++);
    }
    while (p1 != S1.end()) {
        S.push_back(*p1++);
    }
    while (p2 != S2.end()) {
        S.push_back(*p2++);
    }
}

template <typename T>
void mergeSort(std::vector<T>& v)
{
    if (v.size() <= 1) {
        return;
    }

    int mid = v.size() / 2;
    std::vector<T> S1, S2;
    S1.reserve(mid);
    S2.reserve(mid + 1);

    std::copy(v.begin(), v.begin() + mid, std::back_inserter(S1));
    std::copy(v.begin() + mid, v.end(), std::back_inserter(S2));

    v.clear();

    mergeSort(S1);
    mergeSort(S2);

    merge(S1, S2, v);
}
