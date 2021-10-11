#include <iostream>
using namespace std;
/**
 * @author: jeetscmaker
 * contest: VK Cup 2012 Qualification Round 1, problem: (B) Taxi
 * */
int main () {
    int n;
    cin >> n;
    int64_t a[n];
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) count1++;
        else if (a[i] == 2) count2++;
        else if (a[i] == 3) count3++;
        else count4++;
    }

    int count = count4;
    if (count3 > 0) {
        if (count3 <= count1) {
            count1 = count1 - count3;
        } else {
            count1 = 0;
        }
    }
    count += count3;
    if (count2 % 2 == 0) {
        count += count2 / 2;
        if (count1 > 0) {
            if (count1 < 4)
                count += 1;
            else
                count += (count1 / 4 + (count1 % 4 == 0 ? 0 : 1));
        }
    } else {
        count += count2 / 2 + 1;
        if (count1 <= 2) {
        } else {
            count1 = count1 - 2;
            if (count1 > 0) {
                if (count1 < 4)
                    count += 1;
                else
                    count += (count1 / 4 + (count1 % 4 == 0 ? 0 : 1));
            }
        }
    }
    cout << count;
    return 0;
}
