#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfs_traversal(vector<int> adj[], int n)
{
    queue<int> q;
    vector<bool> vis(n, 0);
    vector<int> bfs;
    q.push(0);
    vis[0]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=true;
            }
        }
    }
    return bfs;
}
int main()
{
    int n, e;
    cin>>n;
    cin>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    vector<int> bfs;
    bfs=bfs_traversal(adj, n);
    for(auto it: bfs)
     cout<<it<<" ";
    return 1;
}