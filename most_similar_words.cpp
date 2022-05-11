// contest: Codeforces Round #790 (Div. 4), problem: (C) Most Similar Words, Accepted

#include <bits/stdc++.h>
using namespace std;
void solve();
int difference(string s, string t, int m) {
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        sum += abs(s[i] - t[i]);
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
void solve(){
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    int MIN = 1e5;
    for (int i = 0; i < n-1; ++i)
    {
        for(int j = i+1; j < n; j++) {
            int diff = difference(s[i], s[j], m);
            MIN = min(MIN, diff);
        }
    }
    cout << MIN << endl;
}