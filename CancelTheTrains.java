#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> a;
		for (int i = 0; i < m+n; ++i)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int count = 0;
		for (int i = 0; i+1 < m+n; ++i)
		{
			if(a[i] == a[i+1])
				count++;
		}
		cout << count << '\n';
	}
	return 0;
}