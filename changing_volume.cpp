/** @author: jeetscmaker, 
	contest: Codeforces Round #601 (Div. 2), problem: (A) Changing Volume, Accepted
	Time: 15 milliSeconds, Memory: 0 KB
	*/

#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long a, b;
		cin >> a >> b;
		long res = abs(a-b);
		res = (res/5) + (res%5)/2 + ((res%5)%2);
		cout << res << endl;
	}
	return 0;
}