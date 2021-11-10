#include<bits/stdc++.h>
using namespace std;



int main()
{
  int V;
  cin>>V;
  int **graph = new int*[V];
  for(int i=0;i<V;i++){
    graph[i] = new int[V];
    for(int j=0;j<V;j++)
      cin>>graph[i][j];
  }

  for(int i=0;i<V;i++)
  {
    for(int j=0;j<V;j++)
    {
      cout<<graph[i][j]<<" ";
    }
    cout<<"\n";
  }

  for(int k=0;k<V;k++)
  {
    for(int i=0;i<V;i++)
    {
      for(int j=0;j<V;j++)
      {
        if(graph[i][j]>(graph[i][k]+graph[k][j]) and
            (graph[k][j] != 99
            and graph[i][k] != 99))
          graph[i][j]=graph[i][k]+graph[k][j];
      }
    }
  }
  
  for(int i=0;i<V;i++)
  {
    for(int j=0;j<V;j++)
    {
      cout<<graph[i][j]<<" ";
    }
    cout<<"\n";
  }




  return 0;
}
