#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t t; 
  cin >> t;
  while (t--) {
    int64_t n; 
    cin >> n;
    vector<int64_t> a(n);
    for (int64_t i = 0; i < n; i++) 
      cin >> a[i];

    vector<bool> used(n, false);

    for (int64_t i = 0; i < n; i++) {
      used[(i + a[i] + 1000000000) % n] = true;
    }

    bool allUsed = true;

    for (bool b : used) {
      allUsed &= b;
    }
    cout << (allUsed ? "YES\n" : "NO\n");
  }
  return 0;
}
