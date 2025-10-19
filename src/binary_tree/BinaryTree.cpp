//
// Created by sebas on 10/15/25.
//

#include "BinaryTree.h"

#include <iostream>


void BinaryTree::printStructure() const {
    if(data.empty()) {
        std::cout << "BinaryTree::printStructure: Empty tree" << std::endl;
        return;
    }

    std::cout << "BinaryTree::printStructure: Printing structure:" << std::endl;

    std::cout << "[";
    for (size_t i = 0; i < data.size(); i++) {
        if (i) {
            std::cout<<", ";
        }
        std::cout << data[i];
    }

    std::cout << "]\n";
    const int n = static_cast<int>(data.size());
    int level=0;
    int i=0;

    while (i < n) {
        const int count = 1 << level;
        for (int j = 0; j < count && i < n; j++, i++) {
            std::cout << data[i] << (j+1 < count ? "\t" : "\n");
        }
        level++;
    }

    std::cout << std::endl << std::endl;
}





