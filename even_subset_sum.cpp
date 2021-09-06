#include <bits/stdc++.h>
using namespace std;

// By jeetscmaker, contest: Codeforces Round #626 (Div. 2, based on Moscow Open Olympiad in Informatics), problem: (A) Even Subset Sum Problem, Accepted

int main() {
    short t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int a[n];
       for (int i = 0; i < n; ++i)
       {
           cin >> a[i];
       }
       if (n == 1)
       {
           if(a[0]%2 != 0){
            cout << -1 << endl;
           } else {
            cout << 1 << '\n' << 1 << endl;
           }
           continue;
       }
       bool yes = false;
       int p = 0;
       for(int i = 0; i<n; i++){
            if(a[i]%2 == 0) {
                yes = true;
                p = i+1;
                break;
            }
       }
       if (yes)
           cout << 1 << '\n' << p << endl;
       else
            cout << 2 << '\n' << "1 2" << endl;

    }
    return 0;
}