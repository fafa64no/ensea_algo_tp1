//
// Created by sebas on 10/15/25.
//

#include "StackByArray.h"

#include <iostream>
#include <ostream>


void StackByArray::addValue(const int value) {
    if (canIncrease()) {
        stack_top++;
        stack_array[stack_top] = value;
        return;
    }
    std::cerr << "StackByArray::addValue: Stack overflow" << std::endl;
}

int StackByArray::popValue() {
    if (isEmpty()) {
        std::cerr << "StackByArray::addValue: Stack underflow" << std::endl;
        return STACK_UNDERFLOW_DEFAULT_VALUE;
    }
    const int value = stack_array[stack_top];
    stack_top--;
    return value;
}

bool StackByArray::isEmpty() const {
    return stack_top < 0;
}


bool StackByArray::canIncrease() const {
    return stack_top < MAX_STACK_ARRAY_SIZE - 1;
}