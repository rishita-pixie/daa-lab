/* Greedy Best First Search: selects node with lowest heuristic */
#include <bits/stdc++.h>
using namespace std;

void greedyBFS(int start, vector<vector<int>>& adj, vector<int>& h) {
    int n = adj.size();
    vector<bool> vis(n, false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({h[start], start});
    vis[start] = true;

    while(!pq.empty()) {
        int node = pq.top().second;
        pq.pop();
        cout << node << " ";
        for(int nei : adj[node]) {
            if(!vis[nei]) {
                vis[nei] = true;
                pq.push({h[nei], nei});
            }
        }
    }
}