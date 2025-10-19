#include <iostream>

#include "test_functions.h"


int main() {
    std::cout << "----------------- Algo TP 1 -----------------" << std::endl;

    TestFunctions::test_stack_by_array();
    TestFunctions::test_stack_by_linked_list();

    TestFunctions::test_queue_by_array();
    TestFunctions::test_queue_by_circular_array();
    TestFunctions::test_queue_by_linked_list();

    TestFunctions::test_binary_tree_max();
    TestFunctions::test_binary_tree_min();

    return EXIT_SUCCESS;
}
