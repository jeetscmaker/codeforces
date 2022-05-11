//contest: Codeforces Round #790 (Div. 4), problem: (B) Equal Candies, Accepted

#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
    int t; 
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    int  MIN = 1e8;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        MIN = min(MIN, a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += (a[i] - MIN);
    }
    cout << sum << "\n";
}