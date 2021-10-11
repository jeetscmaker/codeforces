#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #587 (Div. 3), problem: (A) Prefixes
 * Time: 31 MilliSeconds, Memory: 4100 KB
 * */

int main() {
    int n; // given that n is an even number.
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i = i+2)
    {
        if (s[i] == 'a' && s[i+1] == 'a') {
            s[i+1] = 'b';
            count++;
        }
        else if (s[i] == 'b' && s[i+1] == 'b') {
            s[i+1] = 'a';
            count++;
        }
        else {
            // do nothing because the string already contains 'a' and 'b' both.
        }
    }
    cout << count << '\n' << s;
    return 0;
}
