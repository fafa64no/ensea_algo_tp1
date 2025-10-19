//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_QUEUEBYCIRCULARARRAY_H
#define ENSEA_ALGO_TP1_QUEUEBYCIRCULARARRAY_H

#include "QueueByArray.h"


class QueueByCircularArray final : public QueueByArray {
public:
    QueueByCircularArray() = default;

    [[nodiscard]] bool isEmpty() const override;
private:
    int n_items{0};

    [[nodiscard]] bool isFull() const override;

    void incrementFront() override;
    void incrementRear() override;
};


#endif //ENSEA_ALGO_TP1_QUEUEBYCIRCULARARRAY_H