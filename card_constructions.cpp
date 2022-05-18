#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        while (n > 1) {
            int h = 1;
            while ((3 * h + 4) * (h + 1) / 2 <= n)
                ++h;
            n -= (3 * h + 1) * h / 2;
            ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}