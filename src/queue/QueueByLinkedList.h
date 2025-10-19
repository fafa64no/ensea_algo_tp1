//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_QUEUEBYLINKEDLIST_H
#define ENSEA_ALGO_TP1_QUEUEBYLINKEDLIST_H

#include "Queue.h"


struct QueueByLinkedListElement {
    const int value;
    QueueByLinkedListElement* next{nullptr};
    QueueByLinkedListElement(int value);
};


class QueueByLinkedList final : public Queue {
public:
    QueueByLinkedList() = default;

    void addToQueue(int value) override;
    int removeFromQueue() override;
    [[nodiscard]] bool isEmpty() const override;
private:
    QueueByLinkedListElement* queue_rear{nullptr};
    QueueByLinkedListElement* queue_front{nullptr};

    [[nodiscard]] bool isLastElement() const;
    [[nodiscard]] bool isFirstElement() const;
};


#endif //ENSEA_ALGO_TP1_QUEUEBYLINKEDLIST_H