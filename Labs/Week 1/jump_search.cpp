#include<bits/stdc++.h>
using namespace std;
void jump_search(int A[],int n, int key)
{
	int c=0;
	int step=sqrt(n);
	int prev;
	while(A[(min(step,n))-1]<key)
	{
		prev=step;
		step+=sqrt(n);
		c++;
		if(prev>=n)
		  {
		  	cout<<"Not Present "<<c+1<<endl;
		  }
	}
	while(prev<key)
	{
		prev++;
		if(prev==min(step,n))
		{
			c++;
		  	cout<<"Not Present "<<c<<endl;
		}
	}
	if(prev==key)
	{
		cout<<"Present "<<c+1<<endl;
	}
	cout<<"Not present "<<c+1<<endl;
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
		 cin>>a[n];
		cin>>key;
		jump_search(a,n,key);
	}
}