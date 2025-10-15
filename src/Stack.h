//
// Created by sebas on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_PILE_H
#define ENSEA_ALGO_TP1_PILE_H


class Stack {
public:
    Stack() = default;
    virtual ~Stack() = default;

    virtual void addValue(int value) = 0;
    virtual int popValue() = 0;
};


#endif //ENSEA_ALGO_TP1_PILE_H