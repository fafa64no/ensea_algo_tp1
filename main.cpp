
#include "src/PGCD.h"
#include "src/subSequence.h"
#include "iostream"
using namespace std;
int main(void) {
    /* PGCD*/
    long test = PGCD(221, 782);
    printf("%ld\n", test);

    /*
     */
    cout << "taille : ";
    cin >> n;
    cout << "Entrez les " << n << " entiers : ";
    for (int i = 0; i < n; ++i) cin >> subSub[i];

    fill(memo, memo + n, -1);

    int res = 0;
    for (int i = 0; i < n; ++i) {
    res = max(res, subSequence(i));
    }

    cout << "best : " << res << endl;


}

