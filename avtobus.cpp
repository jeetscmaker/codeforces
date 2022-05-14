#include <bits/stdc++.h>
using namespace std;
void solve();

int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}
void solve() {
    int64_t n;
    cin >> n;
    if (n % 2 == 1 || n == 2){
      cout << -1 << endl;
    } else {
      cout << (n + 4) / 6 << ' ' << n / 4 << endl;
    }
}