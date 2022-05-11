// contest: Codeforces Round #790 (Div. 4), problem: (E) Eating Queries, Accepted

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n), s(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater());
    for (int i = 0; i < n; i++) {
        s[i + 1] = s[i] + a[i];
    }
    
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int ans = lower_bound(s.begin(), s.end(), x) - s.begin();
        if (ans > n) {
            ans = -1;
        }
        cout << ans << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();    
    return 0;
}