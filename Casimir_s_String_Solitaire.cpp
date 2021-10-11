#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #744 (Div. 3), problem: (A) Casimir's String Solitaire
 * */

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        int countA = 0, countB = 0, countC = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'A') countA++;
            else if (s[i] == 'B') countB++;
            else countC++;
        }
        if (countA+countC == countB)
            cout << "YES" << '\n';

        else
            cout << "NO" << '\n';
    }
    return 0;
}