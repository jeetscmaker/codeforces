#include <bits/stdc++.h>
using namespace std;

/** 
 * DFS  - Depth First Search,
 * For a non-weighted graph.
 * With adjacency list representation.
 * */
const int N = 5;
vector<int> adj[N];
bool visited[N];

void dfs(int s) {
    if (visited[s])
        return;
    visited[s] = true;
    cout << "just visited " << s << endl;
    for (auto a : adj[s])
        dfs(a);
}

int main() {
    for (int i = 0; i < N; ++i)
        visited[i] = false;
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(0);
    dfs(0);
    return 0;
}