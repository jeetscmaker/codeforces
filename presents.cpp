#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Beta Round #97 (Div. 2), problem: (A) Presents

int index_of(int j, int* a, int n) {
	for(int i = 0; i < n; i++) {
		if(*(a+i) == j)
			return (i+1);
	}
	return -1;
}

int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=n; i++) {
		int index = index_of(i, a, n);
		cout << index << " ";
	}
	return 0;
}