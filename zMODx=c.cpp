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
	int64_t a,b,c;
	cin >> a >> b >> c;
	cout << (int64_t)(a+ (b*1e9)) << ' ' << b << ' ' << c << "\n";
}