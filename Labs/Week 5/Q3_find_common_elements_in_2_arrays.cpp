#include<iostream>
using namespace std;

void printCommonEle(int a[],int n, int b[], int m)
{
	int i,j;
	i=j=0;
	while(i<n && j<m)
	{
		if(a[i]==b[j])
		 {
		 	cout<<a[i]<<" ";
		 	i++;j++;
		 }
		else if(a[i]<b[j])
		 {
		 	i++;
		 }
		 else if(a[i]>b[j])
		 {
		 	j++;
		 }
	}
}
int main()
{
	int n1,n2;
	cin>>n1;
	int a[n1];
	for(int i=0;i<n1;i++)
	 cin>>a[i];
	cin>>n2;
	int b[n2];
	for(int i=0;i<n2;i++)
	 cin>>b[i];
	 
	printCommonEle(a,n1,b,n2);
	return 1;
}