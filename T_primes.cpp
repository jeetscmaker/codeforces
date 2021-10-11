#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #142 (Div. 2), problem: (B) T-primes
 * */
bool is_prime(long n) {
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n%i == 0)
            return false;
    }
    return true;
}

bool is_T_prime(int64_t n) {
    if (n == 1)
        return false;
    double s = sqrt(n);
    long p = (long)s;
    if (s == p) {
        if (is_prime(p))
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int64_t a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (is_T_prime(a[i]))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}