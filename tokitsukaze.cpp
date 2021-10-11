#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #573 (Div. 2), problem: (A) Tokitsukaze and Enhancement, Accepted
 * Time: 31 milliSeconds, Memory: 3700 KB.
 * */

int main() {
    int x;
    cin >> x;
    switch(x%4) {
        case 0:
            cout << 1 << " A";
            break;
        case 1:
            cout << 0 << " A";
            break;
        case 2:
            cout << 1 << " B";
            break;
        case 3:
            cout << 2 << " A";
            break;
        default:
            {
                // do nothing.
            }
    }
    return 0;
}