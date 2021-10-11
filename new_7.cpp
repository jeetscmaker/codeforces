#include <iostream>
using namespace std;
// counting sort  implementation
int main() {
	int a[] = {1, 3, 6, 9, 9, 3, 5, 9};
    int max = 0;
    for(int i = 0; i<(sizeof(a)/sizeof(int)); i++){
        max = max < a[i] ? a[i] : max;
    }
    // Declaring a book_keeping_array of size one more 
    // than the maximum element of the given array.
	int book_keeping_array[max+1];
	for(int i = 0; i < (max+1); i++){
		book_keeping_array[i] = 0;
	}
	for(int i = 0; i<(sizeof(a)/sizeof(int)); i++){
        book_keeping_array[a[i]]++;
	}
    int s, k = 0;
    for(int i = 0; i<max+1; i++){
       s = book_keeping_array[i];
       for(int j = 0; j<s; j++){
           a[k] = i;
           k++;
       }
    }
    for(auto element : a){
        cout << element << " ";
    }
	return 0;
}