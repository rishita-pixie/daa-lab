/* BFS: explores nodes level by level using a queue */
#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& adj) {
    int n = adj.size();
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while(!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";
        for(int nei : adj[node]) {
            if(!vis[nei]) {
                vis[nei] = true;
                q.push(nei);
            }
        }
    }
}