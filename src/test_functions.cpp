//
// Created by sebas on 10/15/25.
//

#include "test_functions.h"

#include <iostream>
#include <memory>

#include "BinaryTreeMax.h"
#include "BinaryTreeMin.h"
#include "QueueByArray.h"
#include "QueueByCircularArray.h"
#include "QueueByLinkedList.h"
#include "StackByArray.h"
#include "StackByLinkedList.h"


void TestFunctions::test_stack_by_array() {
    std::cout << "TestFunctions::test_stack_by_array:" << std::endl;

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
    std::cout << "TestFunctions::test_stack_by_linked_list:" << std::endl;

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
    std::cout << "TestFunctions::test_queue_by_array:" << std::endl;

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
    std::cout << "TestFunctions::test_queue_by_circular_array:" << std::endl;

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

void TestFunctions::test_queue_by_linked_list() {
    std::cout << "TestFunctions::test_queue_by_linked_list:" << std::endl;

    const auto queue = std::make_unique<QueueByLinkedList>();

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


void TestFunctions::test_binary_tree_max() {
    std::cout << "TestFunctions::test_binary_tree_max:" << std::endl;

    const auto tree = std::make_unique<BinaryTreeMax>();
    const std::vector<int> test_values{27, 12, 8, 45, 17, 63, 100, 5, 75, 90, 26, 32, 188, 95};

    for (const int test_value : test_values) {
        tree->pushValue(test_value);
        tree->printStructure();
    }

    for (int i = 0; i < test_values.size() + 1; i++) {
        tree->popValue();
        tree->printStructure();
    }
}

void TestFunctions::test_binary_tree_min() {
    std::cout << "TestFunctions::test_binary_tree_min:" << std::endl;

    const auto tree = std::make_unique<BinaryTreeMin>();
    const std::vector<int> test_values{27, 12, 8, 45, 17, 63, 100, 5, 75, 90, 26, 32, 188, 95};

    for (const int test_value : test_values) {
        tree->pushValue(test_value);
        tree->printStructure();
    }

    for (int i = 0; i < test_values.size() + 1; i++) {
        tree->popValue();
        tree->printStructure();
    }
}




