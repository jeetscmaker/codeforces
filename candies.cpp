#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #636 (Div. 3), problem: (A) Candies
 * */

int main() {
    int t;
    cin >> t;
    while (t--){
        int64_t n;
        cin >> n;
        for (int k = 2; (pow(2, k) - 1) <= n; ++k)
        {
            if (n % (long)(pow(2, k) - 1) == 0)
            {
                cout << n/(long)(pow(2, k) - 1);
                break;
            }
        }
        cout << '\n';
    }
    return 0;
}