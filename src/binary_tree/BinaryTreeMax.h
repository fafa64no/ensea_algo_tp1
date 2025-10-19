//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_BINARYTREEMAX_H
#define ENSEA_ALGO_TP1_BINARYTREEMAX_H

#include "BinaryTree.h"


class BinaryTreeMax final : public BinaryTree {
public:
    BinaryTreeMax() = default;
    ~BinaryTreeMax() override = default;

    void pushValue(int value) override;
    int popValue() override;
};


#endif //ENSEA_ALGO_TP1_BINARYTREEMAX_H