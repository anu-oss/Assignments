#include<stdio.h> 
#include<stdlib.h> 
	 
int* acpfunc(int *s,int *e,int n) 
{ 
	//works if sorted elements are passed 
	 
	int *x=(int*)calloc(n,sizeof(int)); 
	 
	int j=0; 
	//first index isn't checked 
	x[0]=1; 
	 
	for(int i=1;i<=n;i++) 
		if(s[i]>=e[j]) 
			{ 
				 
				x[i]=1; 
				j=i; 
			} 
		 
	return x; 
} 
 
int main() 
{ 
	int n; 
	printf("Enter no. of jobs="); 
	scanf("%d",&n); 
	n--; 
	int *s=(int*)malloc(sizeof(int)*n); 
	int *e=(int*)malloc(sizeof(int)*n);; 
	int *job=(int*)malloc(sizeof(int)*n);; 
	for(int i=0;i<=n;i++) 
	{ 
		printf("Enter start and end times resp."); 
		scanf("%d %d",&s[i],&e[i]); 
		job[i]=i; 
	 
	} 
	 
	//Printing the activities with their start and finish times 
	print(s,0,n); 
	print(e,0,n); 
	print(job,0,n); 
	 
	int *x=acpfunc(s,e,n); 
	for(int i=0;i<=n;i++) 
		if(x[i]) 
			printf("%d ->",job[i]); 
	 
return 0; 
} 
