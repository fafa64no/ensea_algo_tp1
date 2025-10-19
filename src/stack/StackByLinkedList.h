//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_STACKBYLINKEDLIST_H
#define ENSEA_ALGO_TP1_STACKBYLINKEDLIST_H

#include "Stack.h"


struct StackByLinkedListElement {
    const int value;
    StackByLinkedListElement* next;
    StackByLinkedListElement(int value, StackByLinkedListElement* next);
};


class StackByLinkedList final : public Stack {
public:
    StackByLinkedList() = default;

    void addValue(int value) override;
    int popValue() override;
    [[nodiscard]] bool isEmpty() const override;
private:
    StackByLinkedListElement* stack_top{nullptr};
};


#endif //ENSEA_ALGO_TP1_STACKBYLINKEDLIST_H