#include <bits/stdc++.h>
using namespace std;
/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #460 (Div. 2), problem: (A) Supermarket, Accepted
 * time: 60 ms, memory: 200 KB
 * */ 
int main() {
	int n, m;
	cin >> n >> m;
	float a, b, minimum = 100000.0f;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		float price = a/b;
		minimum = min(price, minimum);
	}
	cout.precision(8);
	cout << std::fixed;
	cout << m*minimum;
	return 0;
}