#include <bits/stdc++.h>
using namespace std;

/**
 * @author jeetscmaker,
 * contest: Codeforces Beta Round #4 (Div. 2 Only), problem: (C) Registration System,
 * */

int main() {
    int n;
    cin >> n;
    // map took 1432 milli seconds to run this code, but unordered_map took 1278 milli seconds.
    unordered_map<string, int> names;
    while (n--) {
        string s;
        cin >> s;
        if (names.count(s) == 0)
        {
            cout << "OK" << '\n';
            names.emplace(s, 0);
        }
        else
        {
            int v = names[s];
            names[s] = v+1;
            cout << s << (v+1) << '\n';
        }
    }
    return 0;
}