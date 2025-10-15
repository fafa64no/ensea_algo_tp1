//
// Created by yael on 10/15/25.
//

#include "subSequence.h"
#include <iostream>
using namespace std;




int subSequence(const int i) {
    if (memo[i] != -1) return memo[i];
    int best = 1;

    for (int j = 0; j < i; ++j) {
        if (subSub[j] < subSub[i]) {
            best = max(best, 1 + subSequence(j));
        }
    }
    return memo[i] = best;
}

