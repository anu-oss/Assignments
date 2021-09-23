#include<bits/stdc++.h>
using namespace std;
#define max 100
void merge(int *array, int l, int m, int r) 
{
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i<nl && j<nr) 
   {
      if(larr[i] <= rarr[j]) 
	  {
         array[k] = larr[i];
         i++;
      }
	  else
	  {
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}

void mergeSort(int *a,int l,int r)
{
	if(l>=r)
	 return;
	
	int mid= l + (r-l)/2;
	mergeSort(a,l,mid);
	mergeSort(a,mid+1,r);
	merge(a,l,mid,r);
}

void isDuplicate(int *a,int n)
{
	mergeSort(a,0,n-1);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		 {
		 cout<<"YES"<<endl;
		 return;
	     }
	}
	cout<<"NO"<<endl;
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
		isDuplicate(a,n);
	}
}