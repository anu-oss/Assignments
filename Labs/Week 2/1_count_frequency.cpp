#include<iostream>
using namespace std;
int modified_binary_search(int A[],int l, int r, int key,int n)
{
	int freq=0;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(A[mid]==key)
		{
			freq++;
			int left=mid;
			while(A[--left]==key && left>=0 )
			 freq++;
			 
			int right=mid;
			while(A[++right]==key && right<n )
			 freq++;
			
			return freq;
		}
		else if(A[mid]>key)
		{
		  r=mid-1;
	    }
		else
		{
		  l=mid+1;
	    }
	}
	return freq;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,key;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		cin>>key;
		int freq=modified_binary_search(arr,0,n-1,key,n);
		if(freq==0)
		 cout<<"key not present"<<endl;
		else
		 cout<<key<<"-"<<freq<<endl;
		 
	}
	return 0;
}