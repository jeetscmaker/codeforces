// Educational Codeforces Round 128 (Rated for Div. 2), problem: (C) Binary String

#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

void solve() {
    string s;
    cin >> s;
    int n = int(size(s));

    vector<int> pos;
    {
      pos.reserve(n + 2);
      pos.push_back(-1);
      for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
          pos.push_back(i);
        }
      }
      pos.push_back(n);
    }

    vector<int> suff(n + 1);
    for (int i = n; i--;) {
      suff[i] = (s[i] & 1) + suff[i + 1];
    }

    // lambda
    auto check = [&](int m) -> bool {
      if (int(size(pos)) <= m + 1) {
        return true;
      }
      for (int z = 0; z + m + 1 < int(size(pos)); ++z) {
        if (suff[0] - (suff[pos[z] + 1] - suff[pos[z + m + 1]]) <= m) {
          return true;
        }
      }
      return false;
    };

    int ng = -1, ok = n;
    while (ng + 1 < ok) {
      int mid = (ng + ok) / 2;
      (check(mid) ? ok : ng) = mid;
    }
    cout << ok << '\n';
  }
