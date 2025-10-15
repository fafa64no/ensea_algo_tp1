//
// Created by sebas on 10/15/25.
//

#include "test_functions.h"

#include <memory>

#include "QueueByArray.h"
#include "QueueByCircularArray.h"
#include "StackByArray.h"
#include "StackByLinkedList.h"


void TestFunctions::test_stack_by_array() {
    const auto stack = std::make_unique<StackByLinkedList>();

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


void TestFunctions::test_stack_by_linked_list() {
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


void TestFunctions::test_queue_by_array() {
    const auto queue = std::make_unique<QueueByArray>();

    queue->addToQueue(4);
    queue->addToQueue(43);
    queue->addToQueue(14);
    queue->addToQueue(4213);

    const int test_out_1 = queue->removeFromQueue();
    const int test_out_2 = queue->removeFromQueue();
    const int test_out_3 = queue->removeFromQueue();
    const int test_out_4 = queue->removeFromQueue();
    const int test_out_5 = queue->removeFromQueue();
}

void TestFunctions::test_queue_by_circular_array() {
    const auto queue = std::make_unique<QueueByCircularArray>();

    queue->addToQueue(4);
    queue->addToQueue(43);
    queue->addToQueue(14);
    queue->addToQueue(4213);

    const int test_out_1 = queue->removeFromQueue();
    const int test_out_2 = queue->removeFromQueue();
    const int test_out_3 = queue->removeFromQueue();
    const int test_out_4 = queue->removeFromQueue();
    const int test_out_5 = queue->removeFromQueue();
}




