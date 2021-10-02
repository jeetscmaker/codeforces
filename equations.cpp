#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #609 (Div. 2), problem: (A) Equation
 * Time: 30 milli Seconds, Memory: 3700 KB
 * */

const int64_t LIMIT = 1e9;

bool is_composite(int64_t n) {
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n%i == 0)
            return true;
    }
    return false;
}

int main() {
    int64_t n;
    cin >> n;
    for (int64_t b = 4, a = b+n; a<=LIMIT && b<=LIMIT; b++, a++) {
       if (is_composite(a) && is_composite(b))
       {
            cout << a << " " << b;
            break;
       }
    }
    return 0;
}