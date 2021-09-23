#include<iostream>
using namespace std;
void linearSearch(int A[],int n,int key)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==key)
		 break;
		else
		 c++;
	}
	if(c>=n)
		cout<<"Not Present "<<c<<endl;
	else
	    cout<<"Present "<<c+1<<endl;
}
 
int main()
{
	int T,n,key;
	cin>>T;
	while(T--)
	{
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
    cin>>key;
	linearSearch(arr,n,key);
    } 
	return 0;  
}