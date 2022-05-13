// Educational Codeforces Round 128 (Rated for Div. 2), problem: (A) Minimums and Maximums.

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  if(max(l1, l2) <= min(r1, r2)){
    cout << (max(l1, l2)) << '\n';
  } else {
    cout << (l1 + l2) << '\n';
  }
}

int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}