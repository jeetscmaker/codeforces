// Educational Codeforces Round 128 (Rated for Div. 2), problem: (B) Robots

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> S(n);
    for (int j = 0; j < n; j++){
      cin >> S[j];
    }
    int x = n, y = m;
    for (int j = 0; j < n; j++){
      for (int k = 0; k < m; k++){
        if (S[j][k] == 'R'){
          x = min(x, j);
          y = min(y, k);
        }
      }
    }
    if (S[x][y] == 'R'){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}