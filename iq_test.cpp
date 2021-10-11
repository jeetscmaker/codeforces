#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Codeforces Beta Round #25 (Div. 2 Only), problem: (A) IQ test
 * */

int main() {
  short n;
  cin >> n;
  short a[n];
  short count_even = 0, count_odd = 0, recent_even = 0, recent_odd = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    if (a[i]%2 == 0) {
      count_even++;
      recent_even = i;
    }
    else {
      count_odd++;
      recent_odd = i;
    }
  }
  if (count_even > count_odd)
    cout << recent_odd+1;
  else
    cout << recent_even+1;
  return 0;
}