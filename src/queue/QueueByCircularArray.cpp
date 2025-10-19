//
// Created by sebas on 10/15/25.
//

#include "QueueByCircularArray.h"


bool QueueByCircularArray::isEmpty() const {
    return n_items <= 0;
}


bool QueueByCircularArray::isFull() const {
    return n_items >= MAX_QUEUE_ARRAY_SIZE - 1;
}


void QueueByCircularArray::incrementFront() {
    queue_front++;
    queue_rear = queue_front % MAX_QUEUE_ARRAY_SIZE;

    n_items--;
}

void QueueByCircularArray::incrementRear() {
    queue_rear++;
    queue_rear = queue_rear % MAX_QUEUE_ARRAY_SIZE;

    n_items++;
}










