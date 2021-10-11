#include <iostream>
using namespace std;

// @author : Jitendra
// contest: Codeforces Round #321 (Div. 2), problem: (A) Kefa and First Steps

int main() {
    int n;
    cin >> n;
    int64_t a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int count = 1;
    int maximum = 0;
    for (int i = 0; i+1 < count; ++i)
    {
        if (a[i] <= a[i+1])
        {
            count++;
            maximum = maximum < count ? count : maximum;
        } 
        else
            count = 1;

    }
    maximum = maximum < count ? count : maximum;
    cout << maximum;
    return 0;
}