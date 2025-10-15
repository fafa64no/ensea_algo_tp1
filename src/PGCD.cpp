//
// Created by yael on 10/15/25.
//
#include <cstdio>
#include "PGCD.h"


long PGCD(const long a, const long b){
    if(a>b) {
        return PGCD(a-b,b);

    } else if (b==a) {
        return a;
    } else {
        return PGCD(a,b-a);
    }
}

