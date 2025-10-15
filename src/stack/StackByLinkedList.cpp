//
// Created by sebas on 10/15/25.
//

#include "StackByLinkedList.h"

#include <iostream>

#include "generic_constants.h"


StackByLinkedListElement::StackByLinkedListElement(
    const int value,
    StackByLinkedListElement* next
) : value(value), next(next) {}


void StackByLinkedList::addValue(const int value) {
    stack_top = new StackByLinkedListElement(value, stack_top);
}

int StackByLinkedList::popValue() {
    if (isEmpty()) {
        std::cerr << "StackByLinkedList::addValue: Stack underflow" << std::endl;
        return STACK_UNDERFLOW_DEFAULT_VALUE;
    }
    const int value = stack_top->value;
    const auto* pointer = stack_top;

    stack_top = stack_top->next;
    delete pointer;

    return value;
}

bool StackByLinkedList::isEmpty() const {
    return stack_top == nullptr;
}