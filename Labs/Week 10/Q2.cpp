#include<bits/stdc++.h>
using namespace std;

struct trio{
  int index,duration,deadline;
};

struct comp{
  bool operator()(trio a,trio b)
  {
    return a.deadline<b.deadline;
  }
};

int main()
{
    int n;
    cin>>n;
    trio *arr = new trio[n];
    for(int i=0;i<n;i++)
    {
      arr[i].index=i+1;
      cin>>arr[i].duration>>arr[i].deadline;
    }

    sort(arr,arr+n,comp());
    
    for(int i=0;i<n;i++)
      cout<<arr[i].deadline<<" ";
    int count=0,time=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      if(arr[i].duration<=arr[i].deadline-time)
      {
        count++;
        v.push_back(arr[i].index);
        time+=arr[i].duration;
      }
    }
    cout<<count;


    return 0;
}

// 7
// 2 2
// 1 3
// 3 8
// 2 6
// 2 2
// 2 5
// 1 3
