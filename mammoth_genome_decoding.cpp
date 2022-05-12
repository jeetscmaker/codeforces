// Codeforces Round #387 (Div. 2), problem: (B) Mammoth's Genome Decoding

#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < n; ++i)
using namespace std;


int cnt[4] = {};

int main() {
    int n;
    string s;
    cin >> n >> s;
    if (n % 4 != 0) {
        cout << "===" << endl;
        return 0;
    }
    int need = n / 4;
    forn(i, n) {
        if (s[i] == 'A') ++cnt[0];
        else if (s[i] == 'C') ++cnt[1];
        else if (s[i] == 'G') ++cnt[2];
        else if (s[i] == 'T') ++cnt[3];
    }
    forn(i, 4) if (cnt[i] > need) {
        cout << "===" << endl;
        return 0;
    }
    forn(i, n) if (s[i] == '?') {
        if (cnt[0] < need) {
            ++cnt[0];
            s[i] = 'A';
        } else if (cnt[1] < need) {
            ++cnt[1];
            s[i] = 'C';
        } else if (cnt[2] < need) {
            ++cnt[2];
            s[i] = 'G';
        } else {
            ++cnt[3];
            s[i] = 'T';
        }
    }
    cout << s << endl;
    return 0;
}
