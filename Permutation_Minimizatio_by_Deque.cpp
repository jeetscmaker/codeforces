#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Round #744 (Div. 3), problem: (E1) Permutation Minimization by Deque, Accepted.
 * Time: 312 milliSeconds, Memory: 5400 KB.
 * */

int main() {
    int t;
    cin >> t;
    deque<int> d;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i ++) 
            cin >> a[i];
        d.push_back(a[0]);
        for (int i = 1; i < n; ++i)
        {
            if (a[i] > d[0])
                d.push_back(a[i]);
            else
                d.push_front(a[i]);
        }
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
            cout << *it << " ";
        cout << '\n';
        d.clear();
    }
    
    return 0;
}