#include<bits/stdc++.h>
using namespace std;
/**
 * contest: Codeforces Beta Round #69 (Div. 2 Only), problem: (A) Panoramix's Prediction
 * @author jeetscmaker
*/
bool is_prime(short n) {
  for (int i = 2; i <= sqrt(n); ++i)
  {
    if (n%i == 0)
      return false;
  }
  return true;
}

int main() {
  short n,m;
  cin >> n >> m;
  short nextPrime;
  for(short i = n+1; true; i++) {
    if (is_prime(i))
    {
      nextPrime = i;
      break;
    }
  }
  if (m == nextPrime) cout << "YES";
  else cout << "NO";
  return 0;
}