#include <bits/stdc++.h>
using namespace std;

/**
 * contest: Codeforces Round #280 (Div. 2), problem: (B) Vanya and Lanterns
 * */

int main()
{
    int n;
    cin >> n;
    long l;
    cin >> l;
    long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    long result;
    result = 2*max(a[0],l-a[n-1]);
    for (int i = 0; i+1 < n; i++)
        result = max(result, a[i+1]-a[i]);
    printf("%.10f\n",result/2.);
    return 0;
}