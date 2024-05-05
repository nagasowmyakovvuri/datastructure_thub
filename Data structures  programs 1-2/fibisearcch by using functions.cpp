#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}
int fibi_search(int *a,int n,int se)
{
	int L,k,m;
	 L=-1;
	 k=n-1;
	int fib[100],i;
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	m=min(L+fib[k-2],n-1);
	while(fib[k]!=0)
	{
	  if(se==a[m])
	  {
	  	return 1;
		  }	
		  if(se>a[m])
		  {
		  	L=m+1;
		  	k=k-1;
		  
	
		  }
		  if(a[m]<se)
		  {
		  k=k-2;	
		  }
   }
		  return 0;
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,se;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	if(fibi_search(a,n,se)==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
