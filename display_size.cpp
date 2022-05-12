// contest: Codeforces Round #387 (Div. 2), problem: (A) Display Size

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    int a = 1, b = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            a = i;
            b = n / i;
        }
    }
    cout << a << ' ' << b;
    return 0;
} 
