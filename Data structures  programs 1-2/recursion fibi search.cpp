#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}
int L=-1;
int fibi_recursion(int*a,int n,int se,int *fib)
{
	int k=n-1;
	int m;
	if(a[k]==se)
	{
		return 1;
	}
	if(fib[k-2]==0)
	{
		return 0;
	}
		m=min(L+fib[k-2],n-1);
		if(a[m]==se)
		{
			return 1;
		}
		else if(se>a[m])
		{
			L=m;
			k=k-1;
		}
		else
		{
			k=k-2;
		}
	return fibi_recursion(a,n,se,fib);
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,fib[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	fib[0]=0,fib[1]=1;
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	
	if(fibi_recursion(a,n,se,fib)==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
