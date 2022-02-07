/*
Write a program to print all the unique factors of a given number n.
For example if n = 18, then the unique factors of 18 are 1,2,3,6,9,18.
1 <= n <= 1e18.
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int64_t n) {
	for(int64_t i = 2; i*i <= n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}
int main(){
	int64_t n;
	cin >> n;
	set<int64_t> s;
	if(!is_prime(n)) {
		for(int64_t i = 2; i*i <= n; i++) {
			if(n%i == 0) {
				s.insert(i);
				s.insert(n/i);
			}
		}
	}
	s.insert(1);
	s.insert(n);
	for(auto num : s)
		cout << num << " " ;
	return 0;
}