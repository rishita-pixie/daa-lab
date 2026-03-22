/* DLS: depth-first search with a fixed depth limit */
#include <bits/stdc++.h>
using namespace std;

void dls(int node, vector<vector<int>>& adj, vector<bool>& vis, int limit) {
    if(limit < 0) return;
    vis[node] = true;
    cout << node << " ";
    for(int nei : adj[node]) {
        if(!vis[nei]) dls(nei, adj, vis, limit - 1);
    }
}