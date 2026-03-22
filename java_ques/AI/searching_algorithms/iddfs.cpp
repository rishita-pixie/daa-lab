/* IDDFS: repeatedly applies DLS with increasing depth */
#include <bits/stdc++.h>
using namespace std;

void dls_util(int node, vector<vector<int>>& adj, vector<bool>& vis, int limit) {
    if(limit < 0) return;
    vis[node] = true;
    cout << node << " ";
    for(int nei : adj[node]) {
        if(!vis[nei]) dls_util(nei, adj, vis, limit - 1);
    }
}

void iddfs(int start, vector<vector<int>>& adj, int maxDepth) {
    for(int i = 0; i <= maxDepth; i++) {
        vector<bool> vis(adj.size(), false);
        dls_util(start, adj, vis, i);
    }
}