#include<bits/stdc++.h>

using namespace std;

int main()

{

 int n;

 cin>>n;

 int a[n],sum=0;

 for(int i=0;i<n;i++)

 {

 cin>>a[i];

 sum+=a[i];

 }

 bool dp[n+1][sum/2+1];

 for(int i=0;i<=n;i++)

 dp[i][0]=true;

 for(int i=0;i<=sum/2;i++)

 dp[0][i]=false;

 for(int i=1;i<=n;i++)

 {

 for(int j=1;j<=sum/2;j++)

 {

 dp[i][j]=dp[i-1][j];

 if(j >= a[i-1])

 dp[i][j] |= dp[i-1][j-a[i-1]];

 }

 }

 int diff=INT_MAX;

 for(int i=sum/2;i>=0;i–)

 {

 if(dp[n][i])

 {

 diff=sum-2*i;

 break;

 }

 }

 cout<<diff;

}
