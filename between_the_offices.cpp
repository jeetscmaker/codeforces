#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #437 (Div. 2, based on MemSQL Start[c]UP 3.0 - Round 2), 
 *          problem: (A) Between the Offices, Accepted
 * Time: 15 milliSeconds, Memory: 3600 KB.
 * */

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sf_count = 0, fs_count = 0;
    for (int i = 0; i+1 < n; ++i)
    {
        if (s[i] == 'S' && s[i+1] == 'F')
            sf_count++;
        else if (s[i] == 'F' && s[i+1] == 'S')
            fs_count++;
        else { // do nothing 
        }
    }
    if (sf_count > fs_count)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}