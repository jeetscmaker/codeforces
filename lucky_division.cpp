#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Beta Round #91 (Div. 2 Only), problem: (A) Lucky Division

int main() {
	int n;
	cin >> n;
	int a[12] = {4,7,47,74,447,474,744,477,747,774,444,777};
	for(short i = 0; i<12; i++) {
		if(n%a[i] == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}