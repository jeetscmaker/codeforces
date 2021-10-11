#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds,

int main() {
    int64_t n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k > n/2)
            cout << 2 * (k - n/2);
        else
            cout << (2*(k-1) + 1) << endl;
    }
    else
    {
        if (k > (n/2 + 1))
            cout << 2 * (k - n/2 - 1);
        else
            cout << (2*(k-1) + 1) << endl;   
    }
    return 0;
}

