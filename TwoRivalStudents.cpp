#include <bits/stdc++.h>
using namespace std;
/**
 * @author Jitendra
 * contest: Educational Codeforces Round 76 (Rated for Div. 2), problem: (A) Two Rival Students
 * */
int main() {
	short t;
	cin >> t;
	while(t--){
		short n, x, a, b;
		cin >> n >> x >>a >> b;
		if (a>b) swap(a,b);
		while(a > 1 && x != 0){
			a--;
			x--;
		}
		while(b < n && x != 0){
			b++;
			x--;
		}
		cout << (b-a) << endl;
	}
	return 0;
}