#include<stdio.h>
void merging(int *arr,int l,int m,int h)
{
	int i,j,k=l,n1=m-l+1,n2=h-m;
	int a[100],b[100],c[100];
	for(i=0;i<n1;i++)
	{
		a[i]=arr[k++];
	}
	k=m+1;
	for(i=0;i<n2;i++)
	{
		b[i]=arr[k++];
	}
	i=j=k=0;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	while(i<n1 && j<n2)
	{
		if(a[i]<=b[j])
		{
			c[k++]=a[i];
			i++;
			
		}
		else
		{
			c[k++]=b[j];
			j++;
		}
	}
	while(i<n1)
	{
		c[k++]=a[i++];
	}
	while(j<n2)
	{
		c[k++]=b[i++];
	}
	k=l;
	for(i=0;i<n1+n2;i++)
	{
		arr[k++]=c[i];
	}
}
void merge_sort(int *arr,int l,int h)
{
	int m;
	if(l<m)
	{
		m=(l+h)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,h);
		merging(arr,l,m,h);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
