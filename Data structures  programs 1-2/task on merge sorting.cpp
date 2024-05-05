#include<stdio.h>
int *merging(int *a,int *b,int n,int m)
{
	int i=0,j=0,k=0;
	static int res[100];
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			res[k++]=a[i++];
		}
		else
		{
			res[k++]=b[j++];
		}
		
	}
	while(i<n)
	{
		res[k++]=a[i++];
	}
	while(j<m)
	{
		res[k++]=b[j++];
	}
	return res;
}
int main()
{
	int n,*res;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d[100],e[100],j=0,k=0,x;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			x=i+1;
			break;
		}
	}
	for(i=0;i<x;i++)
	{
		d[j++]=a[i];
	}
	for(i=x;i<n;i++)
	{
		e[k++]=a[i];
	}
	res=merging(d,e,j,k);
	for(i=0;i<n;i++)
	{
		printf("%d ",res[i]);
    }
	return 0;	
}
