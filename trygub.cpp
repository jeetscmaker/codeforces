#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Global Round 12, problem: (A) Avoid Trygub
 * Time: 31 MilliSeconds, Memory: 3600 KB
 * */

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; // trygubbbbbbb
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'b') count++;
        }
        char a[n];
        for (int i = 0; i < count; ++i)
        {
            a[i] = 'b';
        }
        for (int i = count, j = 0; i < n && j < n; )
        {
            if (s[j] != 'b') {
                a[i] = s[j];
                i++;
            }
            j++;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
