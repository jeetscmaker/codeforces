#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #142 (Div. 2), problem: (A) Dragons
 * Time: 62 milliSeconds, Memory: 3700 KB.
 * */

int main() {
    int s, n;
    cin >> s >> n;
    int x[n], y[n];
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];
    // sorting for array x:
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (x[i] > x[j]) {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }
    bool yes = true;
    for (int i = 0;  i < n; i++)
    {
        if (s <= x[i]) {
            yes = false;
            break;
        } 
        else {
            s += y[i];
        }
    }
    if (yes)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}