#include <bits/stdc++.h>
using namespace std;
typedef long long int64;

int main() {
    int64 n, m, s;
    cin >> n >> m >> s;
    int64 n1 = n%s;
    if (n1 == 0)
        n1 += s;
    int64 m1 = m%s;
    if (m1 == 0)
        m1 += s;
    int64 ans = n1*m1;
    int64 n2 = n/s;
    if (n2*s != n)
        ++n2;
    int64 m2 = m/s;
    if (m2*s != m)
        ++m2;
    cout << ans*n2*m2 << endl;
    return 0;
}