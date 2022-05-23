#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    auto values = a;
    sort(values.begin(), values.end());
    
    int need = 1;
    
    for (int i = 0; i < n; i++) {
        a[i] = lower_bound(values.begin(), values.end(), a[i]) - values.begin();
        
        if (i > 0 && a[i] != a[i - 1] + 1) {
            need++;
        }
    }
    
    cout << (need <= k ? "Yes" : "No") << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
