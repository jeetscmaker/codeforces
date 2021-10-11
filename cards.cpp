#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #364 (Div. 2), problem: (A) Cards
 * */

int index_of(int q, int* a, int n) {
    for (int i = 0; i < n; ++i)
    {
        if (*(a+i) == q)
        {
            *(a+i) = -1;
            return (i+1);
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        cout << index_of(a[i], b, n) << " " << index_of(a[j], b, n) << '\n';
    }
    return 0;
}

