//contest: Codeforces Round #790 (Div. 4), problem: (G) White-Black Balanced Subtrees

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n), p(n);
    p[0] = -1;
    for (int i = 1; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        s[i] = c == 'W' ? 1 : -1;
    }
    for (int i = n - 1; i > 0; i--) {
        s[p[i]] += s[i];
    }
    cout << count(s.begin(), s.end(), 0) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}