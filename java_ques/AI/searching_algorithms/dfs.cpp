/* DFS: explores as deep as possible before backtracking */
#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
    vis[node] = true;
    cout << node << " ";
    for(int nei : adj[node]) {
        if(!vis[nei]) dfs(nei, adj, vis);
    }
}