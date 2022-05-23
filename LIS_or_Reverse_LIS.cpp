#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
 
    for (int i = 0; i < n; ++i)
        cin >> a[i];
 
    map<int, int> mp;
 
    for (auto &i : a)
        mp[i]++;
 
    int x = 0, y = 0;
 
    for (auto &pr : mp) {
        if (pr.second == 1) {
            x < y ? x++ : y++;
        } 
        else {
            x++;
            y++;
        }
    }
    x < y ? x++ : y++;
    cout << min(x, y) << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
