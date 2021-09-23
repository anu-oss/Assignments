#include<iostream>
using namespace std;
int binary_search(int A[],int l, int h,int key)
{
	while(l<=h)
	{
		int mid=l+((h-l)/2);
		if(A[mid]==key)
		 return mid;
		else if(A[mid]>key)
		 h=mid-1;
		else
		 l=mid+1;
	}
	return -1;
}
void find_sequence(int A[],int n)
{
	bool flag=false;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int key=A[i]+A[j];
			int index=binary_search(A,0,n-1,key);
			if(index==-1)
			 continue;
			
			cout<<i<<","<<j<<","<<index<<endl;
			flag=true;
			return;
		}
	}
	if(flag==false)
	 cout<<"no sequence found"<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		 
		find_sequence(arr,n);
	}
	return 0;
}