#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long d;
    cin >> n >> d;
    long a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    int count = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(i == j) continue;
            else if(abs(a[i] - a[j]) <= d) count += 2;
        }
    }
    cout << count;
}
