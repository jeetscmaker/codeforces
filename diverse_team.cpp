#include <bits/stdc++.h>
using namespace std;
/**
 * @author: Jitendra 
 * contest: Codeforces Round #486 (Div. 3), problem: (A) Diverse Team, Accepted
*/
// returns index of an element in an array, 1 based index.
int index_of(int* a, int n, int x){
    for (int i = 0; i < n; ++i)
    {
        if(*(a+i) == x)
            return (i+1);
    }
    // if x not found
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    unordered_set<int> set;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        set.insert(a[i]);
    }
    if (set.size() < k)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << '\n';
    int count = 1;
    for(auto i = set.begin(); count<=k; ++i){
        cout << index_of(a, n, *i) << " " ;
        count++;
    }
    return 0;
}