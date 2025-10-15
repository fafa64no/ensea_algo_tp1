//
// Created by sebas on 10/15/25.
//

#include "QueueByArray.h"

#include <iostream>
#include <ostream>


void QueueByArray::addToQueue(const int value) {
    if (isFull()) {
        std::cerr << "QueueByArray::addToQueue: Queue overflow" << std::endl;
        return;
    }
    queue_array[queue_rear] = value;
    incrementRear();
}

int QueueByArray::removeFromQueue() {
    if (isEmpty()) {
        std::cerr << "QueueByArray::removeFromQueue: Queue underflow" << std::endl;
        return QUEUE_UNDERFLOW_DEFAULT_VALUE;
    }
    const int value = queue_array[queue_front];
    incrementFront();
    return value;
}

bool QueueByArray::isEmpty() const {
    return queue_rear <= queue_front;
}


bool QueueByArray::isFull() const {
    return queue_rear >= MAX_QUEUE_ARRAY_SIZE - 1;
}


void QueueByArray::incrementFront() {
    queue_front++;
}

void QueueByArray::incrementRear() {
    queue_rear++;
}





