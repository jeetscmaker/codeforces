#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #536 (Div. 2), problem: (A) Lunar New Year and Cross Counting, Accepted.
int main() {
  int n;
  cin >> n;
  char a[n][n];
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> a[i][j];
    }
  }
  if (n <= 2)
  {
    cout << 0 ;
    return 0;
  }
  int count = 0;
  for (int i = 1; i < n-1; ++i)
  {
    for (int j = 1; j < n-1; ++j)
    {
      if(a[i][j] == 'X' && a[i-1][j-1] == 'X' && a[i+1][j+1] == 'X' && a[i-1][j+1] == 'X' && a[i+1][j-1] == 'X')
        count++;
    }
  }
  cout << count;
  return 0;
}
