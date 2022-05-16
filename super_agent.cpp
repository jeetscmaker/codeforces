#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];
  if(
    s[0][0]==s[2][2] &&
    s[0][1]==s[2][1] &&
    s[0][2]==s[2][0] &&
    s[1][0]==s[1][2]
  ){
        cout << "YES";
  }
  else{
        cout << "NO";
  }
  return 0;
}
