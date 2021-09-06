#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #464 (Div. 2), problem: (A) Love Triangle, Accepted
// @author Jitendra

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    if(n == 2){
        cout << "NO";
        return 0;
    }
    bool is_possible = false;
    for (int i = 0; i < n; ++i)
    {
        int A = i+1;
        int B = a[i];
        int C = a[B-1];
        int D = a[C-1];
        if (A != B && B != C && C != A && D==A)
        {
            is_possible = true;
            break;
        }
    }
    if(is_possible)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}