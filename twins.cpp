#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #111 (Div. 2), problem: (A) Twins

int main() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n);
	int sum2 = 0, num = 0;
	for(int i = n-1; i >=0; i--) {
		sum2 += a[i];
		if(sum2 <= sum/2)
			num++;
		else {
			num++;
			break;
		}
	}
	cout << num;
	return 0;
}