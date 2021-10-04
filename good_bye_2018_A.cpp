#include <bits/stdc++.h>
using namespace std;

/**
 * @author: jeetscmaker, 
 * contest: Good Bye 2018, problem: (A) New Year and the Christmas Ornament
 * */

int main () {
	int y, b, r;
	cin >> y >> b >> r;
	int minimum = min(min(y+2,b+1),r);
	cout << (3*minimum - 3) ;
	return 0;
}