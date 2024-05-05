#include<stdio.h>
void merge(int *arr,int l,int m,int h)
{
	int n1,n2,i,j,a[100],b[100],k;
	n1=m-l+1;
	n2=h-m;
	k=l;
	for(i=0;i<n1;i++)
	{
		a[i]=arr[k++];
	}
	k=m+1;
		for(i=0;i<n2;i++)
	{
		b[i]=arr[k++];
	}
	/*for(i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}*/
	//printf("\n");
	j=0;
	k=l;
	i=0;
	while(i<n1 &&j<n2)
	{
		if(a[i]<b[j])
		{
		 arr[k++]=a[i++];	
		}
		else
		{
			arr[k++]=b[j++];
		}
	}
	while(i<n1)
	{
		arr[k++]=a[i++];
	}
	while(j<n2)
	{
		arr[k++]=b[j++];
	}
}
void merge_sorted(int *arr,int l,int h)
{
	int m;
	if(l<h)
	{
		m=(l+h)/2;
		merge_sorted(arr,l,m);
		merge_sorted(arr,m+1,h);
		merge(arr,l,m,h);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sorted(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
