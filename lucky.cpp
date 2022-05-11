/* contest: Codeforces Round #790 (Div. 4), problem: (A) Lucky?, Accepted */

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
    char a[6];
    for (int i = 0; i < 6; ++i)
    {
        cin >> a[i];
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; ++i)
    {
        sum1 += a[i];
    }
    for (int i = 3; i < 6; ++i)
    {
        sum2 += a[i];
    }

    cout << (sum1==sum2 ? "YES" : "NO");
    cout << "\n";

}