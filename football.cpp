#include <bits/stdc++.h>
using namespace std;

// Codeforces Beta Round #77 A. Football

int main() {
	string s;
	cin >> s;
	int count = 1;
	for (int i = 0; i+1 < s.length(); ++i)
	{
		if (s[i] == s[i+1])
		{
			count++;
			if (count == 7){
				cout << "YES";
				return 0;
			}
		}
		else{
			// reset the count because now the two adjacent characters are different.
			count = 1;
		}
	}
	cout << "NO";
	return 0;
}