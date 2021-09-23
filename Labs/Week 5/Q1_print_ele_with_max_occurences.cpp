#include<iostream>
using namespace std;

void findMaxFreq(char s[],int n)
{
    int count[25]={0};
    
    for(int i=0;i<n;i++)
    {
    	count[s[i]-'a']++;
	}
	
	int max_ind=0;
	
	for(int i=1;i<n;i++)
	 {
	 	if(count[i]>count[max_ind])
	 	 max_ind=i;
	 }
	 
	 if(count[max_ind]<=1)
	  cout<<"No duplicates present"<<endl;
	 else
	  cout<<char('a'+max_ind)<<"-"<<count[max_ind]<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		char ch[n];
		for(int i=0;i<n;i++)
		 cin>>ch[i];
		
		findMaxFreq(ch,n);
	}
	return 0;
}