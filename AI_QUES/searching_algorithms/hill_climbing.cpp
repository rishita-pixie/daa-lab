/* Hill Climbing: moves to neighbor with better heuristic value */
#include <bits/stdc++.h>
using namespace std;

void hillClimbing(int start, vector<vector<int>>& adj, vector<int>& h) {
    int current = start;
    cout << current << " ";

    while(true) {
        int next = current;
        for(int nei : adj[current]) {
            if(h[nei] < h[next]) next = nei;
        }
        if(next == current) break;
        current = next;
        cout << current << " ";
    }
}