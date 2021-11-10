#include<bits/stdc++.h>
using namespace std;

struct duo
{
  int start,finish;
};

struct comp{
  bool operator()(duo a,duo b)
  {
    return a.finish<b.finish;
  }
};

int main()
{
    int n;
    cin>>n;
    duo *arr = new duo[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i].start>>arr[i].finish;
    }
    sort(arr,arr+n,comp());
    int non_conflict=0,prev_end=-1;
    vector<int> process_no;

    for(int i=0;i<n;i++)
    {
      if(arr[i].start>=prev_end)
      {
        prev_end=arr[i].finish;
        non_conflict++;
        process_no.push_back(i+1);
      }
    }
    cout<<"No of non conflicting process : "<<non_conflict<<endl;
    cout<<"List of selected process : ";
    for(int i=0;i<process_no.size();i++)
      cout<<process_no[i]<<" ";
    return 0;
}
