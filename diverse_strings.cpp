#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #550 (Div. 3), problem: (A) Diverse Strings, Accepted
 * Time: 31 milliSeconds, Memory: 3600 KB.
 * */

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        char a[n];
        for (int i = 0; i < n; i++)
            a[i] = s[i];
        sort(a, a+n);
        bool yes = true;
        for (int i = 0; i+1 < n; ++i)
        {
            if ((int)a[i+1] - (int)a[i] != 1)
            {
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
        }
    return 0;
}