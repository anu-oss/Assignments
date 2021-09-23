// C++ code to find the shortest path from source to destination
// with k edges between them using DP.
#include<iostream>
#include<vector>
#include<algorithm>
#define INF 1<<27

int shortestPathdp(std::vector<std::vector<int>> adj, int u, int v, int k)
{
    int __v = adj.size();
    int dp[__v][__v][k + 1];

    for (int e = 0; e <= k; ++e)
    {
        for (int i = 0; i < __v; ++i)
        {
            for (int j = 0; j < __v; ++j)
            {
                // initialize
                dp[i][j][e] = INF;

                // base cases
                if (e == 0 && i == j)
                    dp[i][j][e] = 0;
                if (e == 1 && adj[i][j] != INF)
                    dp[i][j][e] = adj[i][j];

                // go to adjacent edges only when number of edges is more than 1
                if (e > 1)
                {
                    for (int b = 0; b < __v; ++b)
                    {
                        if (adj[i][b] != INF && i != b)
                        {
                            dp[i][j][e] = std::min(dp[i][j][e], dp[b][j][e - 1] + adj[i][b] );
                        }
                    }
                }
            }
        }
    }
    // shortest path from u to v with k edges
    return dp[u][v][k];
}
int main()
{
    int _v, e;
    std::cin >> _v >> e;
    std::vector<std::vector<int>> adj(_v, std::vector<int>(_v, INF));
    int u, v, w;
   // std::cout<<adj[0][3]<< " "<<adj[4][5] <<" \n";
    for (int i = 0; i < e; ++i)
    {
        std::cin >> u >> v >> w;
        adj[u][v] = w;
    }
    int k;
    std::cin >> u >> v >> k;
    int res = shortestPathdp(adj, u, v, k);
    if(res == INF)
        std::cout << "INF\n";
    else
    std::cout << res << "\n";
    return 0;
}
