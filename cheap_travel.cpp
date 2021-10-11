#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #266 (Div. 2), problem: (A) Cheap Travel
 * */
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    double p = b*1.0/m;
    if(p < a) {
        if(n <= m)
            cout << min(b, a*n);
        else {
            cout << ((n/m)*b + min(b, (n%m)*a));
        }
    }
    else {
        cout << (n*a);
    }
    return 0;
}