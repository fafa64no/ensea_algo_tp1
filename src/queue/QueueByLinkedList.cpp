//
// Created by sebas on 10/15/25.
//

#include "QueueByLinkedList.h"

#include <iostream>
#include <ostream>

#include "generic_constants.h"


QueueByLinkedListElement::QueueByLinkedListElement(
    const int value
) : value(value) {}


void QueueByLinkedList::addToQueue(const int value) {
    if (isFirstElement()) {
        queue_rear = new QueueByLinkedListElement(value);
        queue_front = queue_rear;
    } else {
        auto* tmp = new QueueByLinkedListElement(value);
        queue_rear->next = tmp;
        queue_rear = tmp;
    }
}

int QueueByLinkedList::removeFromQueue() {
    if (isEmpty()) {
        std::cerr << "QueueByLinkedList::removeFromQueue: Queue underflow" << std::endl;
        return QUEUE_UNDERFLOW_DEFAULT_VALUE;
    }
    const int value = queue_front->value;
    if (isLastElement()) {
        delete queue_front;
        queue_front = nullptr;
        queue_rear = nullptr;
    } else {
        const auto* tmp = queue_front;
        queue_front = queue_front->next;
        delete tmp;
    }
    return value;
}

bool QueueByLinkedList::isEmpty() const {
    return queue_front == nullptr;
}


bool QueueByLinkedList::isLastElement() const {
    return queue_rear == queue_front;
}

bool QueueByLinkedList::isFirstElement() const {
    return queue_rear == nullptr;
}





