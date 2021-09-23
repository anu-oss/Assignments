#include<iostream>
using namespace std;
 
bool binarySearch(int a[],int l, int r, int key)
{
	if(l<r)
	{
		int mid=l+ (r-l)/2;
		if(a[mid]==key)
		 return true;
		else if(a[mid]>key)
		 return binarySearch(a,l,mid-1,key);
		else
		 return binarySearch(a,mid+1,r,key);
	}
	return false;
}

void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int a[],int l,int r)
{
	int pivot = a[r];
	int i=l-1;
	
	for(int j=l;j<=r-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
    	int p= partition(a,l,r);
    	 quicksort(a,l,p-1);
    	 quicksort(a,p+1,r);
	}
}


void findPair(int a[],int n,int key)
{
	bool found=false;
	quicksort(a,0,n-1);
	
	for(int i=0;i<n;i++)
	 {
	 	int temp=key-a[i];
	 	if(binarySearch(a,0,n-1,temp))
	 	{
		  cout<<temp<<" "<<a[i]<<" ";
		  found=true;
       	}
	 }
	 if(found==false)
	  cout<<"no such pair exists"<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,key;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		 cin>>a[i];
		cin>>key;
		findPair(a,n,key);
	}
}