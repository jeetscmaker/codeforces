#include <bits/stdc++.h>
using namespace std;
// contest: Educational Codeforces Round 123 (Rated for Div. 2), problem: (C) Increase Subarray Sums, Accepted.
void solve();

int main() {
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> f(n + 1, -1E9);
    f[0] = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = i; j < n; j++) {
            s += a[j];
            f[j - i + 1] = max(f[j - i + 1], s);
        }
    }
    
    for (int k = 0; k <= n; k++) {
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans = max(ans, f[i] + min(k, i) * x);
        }
        cout << ans << " \n"[k == n];
    }
}
