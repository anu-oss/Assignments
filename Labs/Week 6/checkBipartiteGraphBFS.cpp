#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool isBipartite(vector<int> adj[], int n)
{
    vector<int> colour(n,-1);
    queue<int> q;
    q.push(0);
    colour[0]=1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it: adj[node])
        {
            if(colour[it]==-1)
            {
                colour[it]=1-colour[node];
                q.push(it);
            }
            else if(colour[it]==colour[node])
               return false;
        }
    }
    return true;
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