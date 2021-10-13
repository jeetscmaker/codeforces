#include <bits/stdc++.h>
using namespace std;
/**
	 @author: jeetscmaker, 
	 contest: Codeforces Round #748 (Div. 3), problem: (A) Elections, Accepted
*/
int main() {
	int t;
	cin >> t;
	while(t--) {
		int64_t a,b,c;
		cin >> a >> b >> c;
		cout << (a>max(b,c)?0:(max(b,c)-a + 1)) << " ";
		cout << (b>max(a,c)?0:(max(a,c)-b + 1)) << " ";
		cout << (c>max(b,a)?0:(max(b,a)-c + 1));
		cout << "\n";
	}
	return 0;
}