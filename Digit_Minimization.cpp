#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
void solve() {
	string s;
	cin >> s;
	if(s.size() == 2)
		cout << s[1] << "\n";
	else
		cout << *min_element(s.begin(), s.end()) << "\n";
}