/* A*: finds optimal path using cost + heuristic */
#include <bits/stdc++.h>
using namespace std;

void astar(int start, vector<vector<pair<int,int>>>& adj, vector<int>& h) {
    int n = adj.size();
    vector<int> g(n, INT_MAX);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    g[start] = 0;
    pq.push(make_pair(h[start], start));

    while(!pq.empty()) {
        pair<int,int> top = pq.top();
        pq.pop();

        int node = top.second;

        cout << node << " ";

        for(auto edge : adj[node]) {
            int nei = edge.first;
            int wt = edge.second;

            if(g[node] + wt < g[nei]) {
                g[nei] = g[node] + wt;
                pq.push(make_pair(g[nei] + h[nei], nei));
            }
        }
    }
}