//
// Created by sebas on 10/15/25.
//

#include "test_functions.h"

#include <memory>

#include "StackByArray.h"


void TestFunctions::test_stack_by_array() {
    const auto stack = std::make_unique<StackByArray>();

    stack->addValue(4);
    stack->addValue(43);
    stack->addValue(14);
    stack->addValue(4213);

    const int test_out_1 = stack->popValue();
    const int test_out_2 = stack->popValue();
    const int test_out_3 = stack->popValue();
    const int test_out_4 = stack->popValue();
    const int test_out_5 = stack->popValue();
}







