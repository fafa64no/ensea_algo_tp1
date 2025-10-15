//
// Created by yael on 10/15/25.
//

#include "subSequence.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int subSequence(const int i) {
    if (memo[i] != -1)
        return memo[i];
    int best = 1;
    int bestParent = -1;

    for (int j = 0; j < i; ++j) {
        if (subSub[j] < subSub[i]) {
            int candidate = 1 + subSequence(j);
            if (candidate > best) {
                best = candidate;
                bestParent = j;
            }

        }
    }
    parent[i] = bestParent;
    return memo[i] = best;
}

vector<int> subSequenceFull() {
    cout << "taille : ";
    cin >> n;
    cout << "Entrez les " << n << " entiers : ";
    for (int i = 0; i < n; ++i) cin >> subSub[i];

    fill(memo, memo + n, -1);

    int res = 0;
    int lastIndex = 0;
    for (int i = 0; i < n; ++i) {
        res = max(res, subSequence(i));
        lastIndex = i;
    }

    cout << "best : " << res << endl;
    vector<int> sequence;
    while (lastIndex != -1) {
        sequence.push_back(subSub[lastIndex]);
        lastIndex = parent[lastIndex];
    }
    reverse(sequence.begin(), sequence.end());


    return sequence;
}
