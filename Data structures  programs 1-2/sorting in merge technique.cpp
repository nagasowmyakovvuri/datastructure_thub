#include<stdio.h>
int*merging(int*a,int*b,int n,int k)
{
	static int *rev;
	int i=0,j=0,l=0;
	while(i<n &&j<k)
	{
		if(a[i]<b[j])
		{
			rev[l++]=a[i];
			i=i+1;
		}
		
		else
		{
			rev[l++]=b[j];
			j=j+1;
		}
	}
	while(i<n)
	{
		rev[l++]=a[i++];
	}
	while(j<k)
	{
		rev[l++]=a[j++];
	}
	return rev;
}
int main()
{
	int n,k,*mer;
	scanf("%d%d",&n,&k);
	int a[n],i,b[k];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d",&b[i]);
	}
	mer=merging(a,b,n,k);
	for(i=0;i<(n+k);i++)
	{
		printf("%d ",*mer);
	}
	return 0;
}
