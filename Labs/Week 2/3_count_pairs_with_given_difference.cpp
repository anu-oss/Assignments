#include<bits/stdc++.h>
using namespace std;

void count_pairs(int A[],int n,int diff)
{
	int freq=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int key=abs(A[i]-A[j]);
			if(key==diff)
			 freq++;
		}
	}
	cout<<freq<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,diff;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		 
		cin>>diff;
		count_pairs(arr,n,diff);
	}
	return 0;
}