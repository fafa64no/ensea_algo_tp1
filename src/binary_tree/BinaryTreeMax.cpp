//
// Created by sebas on 10/15/25.
//

#include "BinaryTreeMax.h"

#include <iostream>
#include <ostream>

#include "generic_constants.h"


void BinaryTreeMax::pushValue(const int value) {
    data.emplace_back(value);
    int i = static_cast<int>(data.size()) - 1;
    while(i > 0) {
        const int p = (i-1) / 2;
        if(data[p] < data[i]) {
            std::swap(data[p],data[i]);
            i = p;
            continue;
        }
        break;
    }
}

int BinaryTreeMax::popValue() {
    if(data.empty()) {
        std::cerr << "BinaryTreeMax::popValue: Tree underflow" << std::endl;
        return QUEUE_UNDERFLOW_DEFAULT_VALUE;
    }
    const int max_value = data.at(0);

    data[0] = data.back();
    data.pop_back();

    const int n = static_cast<int>(data.size());
    for(int i=0, iterations=0; iterations < n; iterations++) {
        const int l = 2*i + 1;
        const int r = 2*i + 2;
        int largest = i;
        if (l < n && data[l] > data[largest]) {
            largest = l;
        }

        if (r < n && data[r] > data[largest]) {
            largest = r;
        }
        
        if (largest != i) {
            std::swap(data[i], data[largest]);
            i = largest;
        } else {
            break;
        }
    }

    return max_value;
}
















