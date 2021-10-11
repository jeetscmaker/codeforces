#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker
 * contest: Codeforces Beta Round #95 (Div. 2), problem: (A) cAPS lOCK
 * */

bool is_lower_case(char c) {
    return (96 < (int)c && (int)c < 123);
}

bool is_upper_case(char c) {
    return (64 < (int)c && (int)c < 91);
}

char to_lower_case(char c) {
    return (char)((int)c + 32);
}

char to_upper_case(char c) {
    return (char)((int)c - 32);
}

void change_case(string& s, int n) {
    for (int i = 0; i < n; ++i)
    {
        if (is_upper_case(s[i]))
            s[i] = to_lower_case(s[i]);
        else
            s[i] = to_upper_case(s[i]);
    }
}

int main() {
    string s;
    cin >> s;
    if (s.length()  == 1)
    {
        if (is_upper_case(s[0]))
            cout << to_lower_case(s[0]);
        else
            cout << to_upper_case(s[0]);
        return 0;
    }
    bool all_caps = true;
    for (int i = 1; i < s.length(); ++i)
    {
        if (is_lower_case(s[i])) {
            all_caps = false;
            break;
        }
    }
    if (all_caps)
        change_case(s, s.length());
    cout << s;
    return 0;
}