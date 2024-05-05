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
void merge_sorted(int *arr,int n)
{
	int i,j,p,m,l,h;
	for(p=2;p<=n;p=p*2)
	{
		for(i=0;i<n;i=i+p)
		{
			l=i;
			h=l+p-1;
			m=(l+h)/2; 
	//	printf("%d  %d %d\n",l,m,h);
			//merge(arr,l,m,h);
			if(h<=n)
			{
				merge(arr,l,m,h);
			}
		}
	}
	if(p/2<n)
	merge(arr,0,p/2-1,n-1);
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
/*
size-->8
8 1 7 2 6 3 5 4
0 1 2 3 4 5 6 7 
*/
