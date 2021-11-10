#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  priority_queue<int,vector<int>,greater<int> > prio;
  for(int i=0;i<n;i++)
  {
    int t;
    cin>>t;
    prio.push(t);
  }
  int t1,t2,count,total=0;
  do
  {
    t1=prio.top();
    prio.pop();
    t2=prio.top();
    prio.pop();
    count=t1+t2;
    prio.push(count);
    total+=count;
  }while(!prio.empty());
  cout<<total-count;
  return 0;
}
