#include<iostream>
using namespace std;
int binary_search(int A[], int l, int h, int key)
{
	while(l<=h)
	{
		int mid=l+((h-l)/2);
		if(A[mid]==key)
		 return 1;
		else if(A[mid]>key)
		 h=mid-1;
		else
		 l=mid+1;
	}
	return -1;
}
int exponential_search(int A[], int n, int key)
{
	int i=0;
	if(A[i]==key)
	 return 1;
	i++;
	while(i<n && A[i]<=key)
	{
		i=i*2;
	}
	return binary_search(A,i/2,min(i,n-1),key);
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
		if(exponential_search(arr,n,key)==1)
		 cout<<"Present "<<endl;
		else
		 cout<<"Not Present "<<endl;
	}
	return 0;
}