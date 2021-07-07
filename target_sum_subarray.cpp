#include<bits/stdc++.h>
using namespace std;

/**
 * we are given an array of n positive integers and a target sum x, and we want to find
 * a subarray whose sum is x or report that there is no such subarray.
 * 
 * @author jeetscmaker
*/

int main() {
  int a[] = {1,3,2,5,1,1,2,3};
  int x = 8; // target sum.
  int sum = 0;
  int i = 0, j = 1, start_index = 0;
  for (; i < 8/*a.length*/; )
  {
    if(sum < x) {
      sum += a[i]; 
      i++;
    }
    else if (sum == x) 
      {
        // because we incremented i in the end when sum was less than x,
        // but that incremented i was never used
        // so i-1 is the ending index of the desired sub array.
        --i; 
        break;
      }
    else {
      i = j;
      if (i<8) sum = 0;
      else break;
      j++;
      start_index = i;
    }
  }
  cout << start_index << " " << i;
  return 0;
}