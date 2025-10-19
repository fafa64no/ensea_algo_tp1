//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_BINARYTREE_H
#define ENSEA_ALGO_TP1_BINARYTREE_H

#include <vector>


class BinaryTree {
public:
    virtual ~BinaryTree() = default;

    virtual void pushValue(int value) = 0;
    virtual int popValue() = 0;

    void printStructure() const;
protected:
    std::vector<int> data;
};


#endif //ENSEA_ALGO_TP1_BINARYTREE_H