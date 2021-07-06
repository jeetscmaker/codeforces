#include<bits/stdc++.h>
using namespace std;

/**
 * contest: Codeforces Global Round 8, problem: (A) C+=
 * @author jeetscmaker
*/

int main() {
  short t;
  cin >> t;
  while(t--) {
    long long a, b, n;
    cin >> a >> b >> n;
    if (a>n || b>n)
    {
      cout << 0 << endl;
      continue;
    }
    long long temp, sum = a+b;
    int64_t count = 1;
    while (sum <= n) {
      temp = max(a, b);
      a = sum;
      b = temp;
      sum  =  sum + temp;
      count++;
    }
    cout << count << endl;
  }
  return 0;
}