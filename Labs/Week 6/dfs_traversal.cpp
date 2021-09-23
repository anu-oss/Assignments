#include<iostream>
#include<vector>

using namespace std;

void dfsTraversalUtil(vector<int> adj[], int node, vector<int> &dfs, vector<int> &vis)
{
      dfs.push_back(node);
      vis[node]=1;
      for(auto it: adj[node])
      {
          if(vis[it]==0)
            dfsTraversalUtil(adj, it, dfs, vis);
      }
}

vector<int> dfs_traversal(vector<int> adj[], int n)
{
     vector<int> vis(n,0);
     vector<int> dfs;
     dfsTraversalUtil(adj, 0, dfs, vis);
     return dfs;
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
    
    vector<int> dfs= dfs_traversal(adj, n);
    for(auto it: dfs)
     cout<<it<<" ";
    return 1;
}