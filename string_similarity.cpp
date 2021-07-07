#include<bits/stdc++.h>
using namespace std;

/**
 * contest: Educational Codeforces Round 94 (Rated for Div. 2), problem: (A) String Similarity
 * @author jeetscmaker
*/

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    short n;
    cin >> n;
    string s;
    cin >> s; // length of s is 2n-1.
    for (int i = 0; i < 2*n-1; i+=2)
    {
      cout << s[i];
    }
    cout << endl;
  }
  return 0;
}