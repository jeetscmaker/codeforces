#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #501 (Div. 3), problem: (A) Points in Segments
 * */

int main () {
	int n, m;
	cin >> n >> m;
	set<int> numbers;
	for(int i = 1; i <=n; i++) {
		int l, r;
		cin >> l >> r;
		for(int i = l; i <= r; i++){
			numbers.insert(i);
		}
	}
	int k = m - numbers.size();
	cout << k << endl;
	int i = 1;
	auto it = numbers.begin();
	if(k != 0) {
		for(int i = 1; i <= m; i++) {
			if(*it != i)
				cout << i << " ";
			else
				++it;
		}
	}
	return 0;
}