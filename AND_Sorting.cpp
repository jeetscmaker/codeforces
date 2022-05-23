#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++){
      cin >> p[i];
    }
    int ans = (1 << 20) - 1;
    for (int i = 0;  i < n; i++){
      if (p[i] != i){
        ans &= p[i];
      }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
