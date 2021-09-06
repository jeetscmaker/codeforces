#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #705 (Div. 2), problem: (A) Anti-knapsack, Accepted
// @author Jitendra

int main() {
    short t;
    cin >> t;
    while(t--){
       int n, k;
       cin >> n >> k;
       int count = 0;
       for (int i = k+1; i<=n; i++) count++;
       cout << (k/2 + count) << '\n';
       for (int i = 1; i <= k/2; ++i)
       {
           cout << (k-i) << ' ';
       }
       for (int i = k+1; i<=n; i++){
        cout << i << ' ';
       }
       cout << endl;
    }
    return 0;
}