#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[100];
int vis[100];

void dfs(int node)
{
    vis[node]=1;

    for(int x:adj[node])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src,dest;
    cin>>src>>dest;

    dfs(src);

    if(vis[dest])
        cout<<"Yes Path Exists";
    else
        cout<<"No Path Exists";
}