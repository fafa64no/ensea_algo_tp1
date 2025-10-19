//
// Created by sebas on 10/19/25.
//

#include "BinaryTreeMin.h"

#include <iostream>

#include "generic_constants.h"


void BinaryTreeMin::pushValue(const int value) {
    data.emplace_back(value);
    int i = static_cast<int>(data.size()) - 1;
    while(i > 0) {
        const int p = (i-1) / 2;
        if(data[p] > data[i]) {
            std::swap(data[p],data[i]);
            i = p;
            continue;
        }
        break;
    }
}

int BinaryTreeMin::popValue() {
    if(data.empty()) {
        std::cerr << "BinaryTreeMin::popValue: Tree underflow" << std::endl;
        return QUEUE_UNDERFLOW_DEFAULT_VALUE;
    }
    const int min_value = data.at(0);

    data[0] = data.back();
    data.pop_back();

    const int n = static_cast<int>(data.size());
    for(int i=0, iterations=0; iterations < n; iterations++) {
        const int l = 2*i + 1;
        const int r = 2*i + 2;
        int smallest = i;
        if (l < n && data[l] < data[smallest]) {
            smallest = l;
        }

        if (r < n && data[r] < data[smallest]) {
            smallest = r;
        }
        
        if (smallest != i) {
            std::swap(data[i], data[smallest]);
            i = smallest;
        } else {
            break;
        }
    }

    return min_value;
}


















