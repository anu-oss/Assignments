#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	int comparisons=0;
	int shifts=0;
	
	for(int i=1;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		 while(j>=0 && a[j]>key)
		 {
		 	a[j+1]=a[j];
		 	j--;
		 	shifts++;
		 	comparisons++;
		 }
		 a[j+1]=key;
		 shifts++;
	}
	
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	cout<<"\ncomparisons= "<<comparisons<<endl;
	cout<<"shifts= "<<shifts<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		 cin>>a[i];
		insertionSort(a,n);
	}
}