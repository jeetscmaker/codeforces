#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #386 (Div. 2), problem: (A) Compote,
 * Time: 31 MilliSeconds, Memory: 3600 KB
 * */

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    while (a*2 > b || 4*a > c) {
        a--;
    }
    cout << (a*7);
}