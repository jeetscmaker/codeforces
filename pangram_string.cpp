#include <bits/stdc++.h>
using namespace std;
/**
 * Find whether  a given string is a pangram or not.
 * A pangram is a string (or sentence) which contains all the letters 
 * of alphabets at least once irrespective of case sensitivity.
 * Example: "abcdEFGhijklMnopQrSTUvwXyZ" is a pangram.
 * but abcdEFGhijklMnopQrSTUvwXy1126477 is not because it misses a 'z' or 'Z'.
 * 
 * */

bool is_pangram(string input) {
    int alphabets[26];
    for(int& x : alphabets) x = 0; // initialized all to zero.
    int a = 97;
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        int index = (int)c - a;
        alphabets[index]++;
    }
    bool all_alphabets_exist = true;
    for(int i = 0; i < 26; i++) {
        if(alphabets[i] == 0) {
            all_alphabets_exist = false;
            break;
        }
    }
    return all_alphabets_exist ? true : false;
}

int main() {
    string s1 = "abcdEFGhijklMnopQrSTUvwXyZ";
    std::transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c){ return std::tolower(c); });
    if(is_pangram(s1))
        cout << "YES, " << s1 << " is a pangram.";
    else
        cout << "NO, " << s1 << " is not a pangram.";
    cout << endl; 
    s1 = "abcdEFGhijklMnopQrSTUvwXy1126477";
    std::transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c){ return std::tolower(c); });
    if(is_pangram(s1))
        cout << "YES, " << s1 << " is a pangram.";
    else
        cout << "NO, " << s1 << " is not a pangram.";
    return 0;
}
