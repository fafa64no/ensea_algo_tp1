//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_QUEUEBYARRAY_H
#define ENSEA_ALGO_TP1_QUEUEBYARRAY_H

#include "generic_constants.h"
#include "Queue.h"


class QueueByArray : public Queue {
public:
    QueueByArray() = default;

    void addToQueue(int value) override;
    int removeFromQueue() override;
    [[nodiscard]] bool isEmpty() const override;
protected:
    int queue_array[MAX_QUEUE_ARRAY_SIZE]{};
    int queue_front{0}, queue_rear{0};

    [[nodiscard]] virtual bool isFull() const;

    virtual void incrementFront();
    virtual void incrementRear();
};


#endif //ENSEA_ALGO_TP1_QUEUEBYARRAY_H