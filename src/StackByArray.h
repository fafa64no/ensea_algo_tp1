//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_STACKBYARRAY_H
#define ENSEA_ALGO_TP1_STACKBYARRAY_H

#include "generic_constants.h"
#include "Stack.h"


class StackByArray final : public Stack {
public:
    StackByArray() = default;

    void addValue(int value) override;
    int popValue() override;
private:
    int stack_array[MAX_STACK_ARRAY_SIZE]{};
    int stack_top{-1};

    [[nodiscard]] bool canIncrease() const;
    [[nodiscard]] bool canDecrease() const;
};


#endif //ENSEA_ALGO_TP1_STACKBYARRAY_H