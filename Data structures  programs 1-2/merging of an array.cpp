#include<stdio.h>
int *merge(int *a,int n,int *b,int m)
{
	int i=0,j=0,k=0;
	static int res[100];
   //	printf("%d ",b);
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
	int n,m,a[100],b[100],i,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	res=merge(a,n,b,m);
	for(i=0;i<(n+m);i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}
