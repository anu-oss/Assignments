#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int n,t,max_count=INT_MIN,res=-1;
    cin>>n;
    unordered_map<int,int> map;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      cin>>t;
      if(map.find(t)==map.end())
        map[t]=1;
      else
        map[t]++;
      v.push_back(t);
    }
    sort(v.begin(),v.end());
    for (auto i : map){
      if (max_count < i.second) {
        res = i.first;max_count = i.second;
      }
    }
    
    max_count>=n/2 ? cout<<"YES" : cout<<"NO";
    cout<<endl;
    n%2==0 ? cout<<(v[n/2-1]+v[n/2])/2 : cout<<v[n/2];
    return 0;
}
