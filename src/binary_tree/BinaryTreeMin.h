//
// Created by sebas on 10/19/25.
//

#ifndef ENSEA_ALGO_TP1_BINARYTREEMIN_H
#define ENSEA_ALGO_TP1_BINARYTREEMIN_H

#include "BinaryTree.h"


class BinaryTreeMin final : public BinaryTree {
public:
    BinaryTreeMin() = default;
    ~BinaryTreeMin() override = default;

    void pushValue(int value) override;
    int popValue() override;
};


#endif //ENSEA_ALGO_TP1_BINARYTREEMIN_H