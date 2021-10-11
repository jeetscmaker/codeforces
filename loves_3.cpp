#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #511 (Div. 2), problem: (A) Little C Loves 3, Accepted
 * Time: 31 milliSeconds, Memory: 3700 KB.
 * */
 
int main() {
    long x;
    cin >> x;
    long remainder = x % 3;
    switch(remainder) {
        case 0:
            cout << "1 1 " << (((x-2)/3)*3 + 1);
            break;
        case 1:
            cout << "1 1 " << (((x-2)/3)*3 + 2);
            break;
        case 2:
            cout << "1 2 " << (((x-3)/3)*3 + 2);
            break;
        default:
            {}
    }
    return 0;
}