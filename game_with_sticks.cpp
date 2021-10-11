#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #258 (Div. 2), problem: (A) Game With Sticks
 * */

int main() {
    short n, m;
    cin >> n >> m;
    if(n > m)
        swap(n,m);
    if(n%2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}