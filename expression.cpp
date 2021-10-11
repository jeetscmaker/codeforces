#include <bits/stdc++.h>
using namespace std;

/**
 * @author jeetscmaker
 * contest: Codeforces Round #274 (Div. 2), problem: (A) Expression
 * */
int main() {
    short a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a+b+c);
    v.push_back(a*b*c);
    v.push_back(a*(b+c));
    v.push_back((a+b)*c);
    v.push_back((a*b)+c);
    v.push_back(a+(b*c));
    sort(v.begin(), v.end());
    int result = v[5];
    cout << result << endl;
    return 0;
}
