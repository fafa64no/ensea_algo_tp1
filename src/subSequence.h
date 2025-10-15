//
// Created by yael on 10/15/25.
//

#ifndef ENSEA_ALGO_TP1_SUBSEQUENCE_H
#define ENSEA_ALGO_TP1_SUBSEQUENCE_H
#include <vector>

constexpr int MAXN = 5000;
inline int n;
inline int subSub[MAXN];
inline int memo[MAXN];
inline int parent[MAXN];


/*Étant donné une séquence d'entiers A = a[1..n] (n ≤ 5 000, -10000 ≤ a[i] ≤ 10000). Une sous-séquence
de A est une séquence contenant un certain nombre d'éléments de A qui conservent leur ordre. Trouvez
la sous-séquence monotone (croissante) de A la plus longue.
Par exemple, si A = (1, 2, 3, 4, 9, 10, 5, 6, 7), la sous-séquence monotone (croissante) la plus longue est
(1, 2, 3, 4, 5, 6, 7).
6.1. Proposez un algorithme de programmation dynamique pour résoudre le problème. Vous détaillerez
les étapes à construire la formule récursive*/
int subSequence(int i);
std::vector<int> subSequenceFull();


#endif //ENSEA_ALGO_TP1_SUBSEQUENCE_H