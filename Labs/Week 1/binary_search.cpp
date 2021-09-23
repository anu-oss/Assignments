#include<iostream>
using namespace std;
void binary_search(int A[],int l, int r, int key)
{
	int c=0;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(A[mid]==key)
		{
			c++;
			cout<<"Present "<<c<<endl;
			return;
		}
		else if(A[mid]>key)
		{
		  c++;
		  r=mid-1;
	    }
		else
		{
		  c++;
		  l=mid+1;
	    }
	}
	cout<<"Not present "<<c<<endl;
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
		binary_search(arr,0,n-1,key);
	}
	return 0;
}