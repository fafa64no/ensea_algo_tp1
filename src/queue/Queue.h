//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_QUEUE_H
#define ENSEA_ALGO_TP1_QUEUE_H


class Queue {
public:
    virtual ~Queue() = default;

    virtual void addToQueue(int value) = 0;
    virtual int removeFromQueue() = 0;
    [[nodiscard]] virtual bool isEmpty() const = 0;
};


#endif //ENSEA_ALGO_TP1_QUEUE_H