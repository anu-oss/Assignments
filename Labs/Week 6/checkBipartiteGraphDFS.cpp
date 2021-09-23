#include<iostream>
#include<vector>

using namespace std;

bool isBipartiteDFS(vector<int> adj[], int node, vector<int> &colour)
{
    for(auto it: adj[node])
    {
        if(colour[it]==-1)
        {
            colour[it]=1-colour[node];
            if(isBipartiteDFS(adj, it, colour)==false)
             return false;
            else if(colour[it]==colour[node])
             return false;
        }
    }
    return true;
}

bool isBipartite(vector<int> adj[], int n)
{
    vector<int> colour(n,-1);
    colour[0]=1;
    if(isBipartiteDFS(adj, 0, colour))
     return true;
    else 
    return false;
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
    
    if(isBipartite(adj, n))
     cout<<"bipartite";
    else cout<<"not bipartite";

    return 1;
}