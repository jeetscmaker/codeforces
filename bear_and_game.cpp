#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+2];
	a[0] = 0, a[n+1] = 91;
	for (int i = 1; i < n+1; ++i)
		cin >> a[i];
	for(int i = 1; i <= n+1; i++){
		if(a[i]-a[i-1] > 15) {
			cout << a[i-1]+15;
			return 0;
		}
	}
	cout << 90;
	return 0;
}