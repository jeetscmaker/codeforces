/**
 * You are given a grid with n rows and m columns. 
 * We denote the square on the i-th (1≤i≤n) row and j-th (1≤j≤m) column by (i,j) and the number there by aij. 
 * All numbers are equal to 1 or to −1.
 * You start from the square (1,1) and can move one square down or one square to the right at a time. 
 * In the end, you want to end up at the square (n,m).

 * Is it possible to move in such a way so that the sum of the values written in all the visited 
 * cells (including a11 and anm) is 0?


Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤10000). 
Description of the test cases follows.

The first line of each test case contains two integers n and m (1≤n,m≤1000)  — the size of the grid.

Each of the following n lines contains m integers. The j-th integer on the i-th line is aij (aij=1 or −1)  — 
the element in the cell (i,j).

It is guaranteed that the sum of n⋅m over all test cases does not exceed 1000000.

Output 
For each test case, print "YES" if there exists a path from the top
left to the bottom right that adds up to 0, and "NO" otherwise. You can
output each letter in any case.
 * */

#include <bits/stdc++.h>
using namespace std;
const int INF = int(1e9) + 5;
void solve();

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
 
void solve() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
 
    for (auto &row : A)
        for (auto &a : row)
            cin >> a;
 
    vector<vector<int>> min_dp(N, vector<int>(M, INF)), max_dp(N, vector<int>(M, -INF));
    min_dp[0][0] = max_dp[0][0] = A[0][0];
 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            if (i > 0) {
                min_dp[i][j] = min(min_dp[i][j], min_dp[i - 1][j] + A[i][j]);
                max_dp[i][j] = max(max_dp[i][j], max_dp[i - 1][j] + A[i][j]);
            }
 
            if (j > 0) {
                min_dp[i][j] = min(min_dp[i][j], min_dp[i][j - 1] + A[i][j]);
                max_dp[i][j] = max(max_dp[i][j], max_dp[i][j - 1] + A[i][j]);
            }
        }
 
    cout << ((N + M) % 2 != 0 && min_dp[N - 1][M - 1] <= 0 && 0 <= max_dp[N - 1][M - 1] ? "YES" : "NO") << '\n';
}
