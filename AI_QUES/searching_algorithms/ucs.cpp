/* UCS: expands node with lowest path cost using priority queue */
#include <bits/stdc++.h>
using namespace std;

void ucs(int start, vector<vector<pair<int,int>>>& adj) {
    int n = adj.size();
    vector<int> dist(n, INT_MAX);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[start] = 0;
    pq.push(make_pair(0, start));

    while(!pq.empty()) {
        pair<int,int> top = pq.top();
        pq.pop();

        int cost = top.first;
        int node = top.second;

        cout << node << " ";

        for(auto edge : adj[node]) {
            int nei = edge.first;
            int wt = edge.second;

            if(cost + wt < dist[nei]) {
                dist[nei] = cost + wt;
                pq.push(make_pair(dist[nei], nei));
            }
        }
    }
}