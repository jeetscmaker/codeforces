#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int ans = 0;
    if (n & 1) {
      int i = n / 2;
      int j = i - 1;
      while (i < n && 0 <= j && s[i] == s[j]) {
        ++i;
        --j;
        ++ans;
      }
      ans *= 2;
      ++ans;
    } else {
      int i = n / 2;
      int j = i;
      while (i < n && 0 <= j && s[i] == s[j]) {
        ++i;
        --j;
        ++ans;
      }
      ans *= 2;
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
