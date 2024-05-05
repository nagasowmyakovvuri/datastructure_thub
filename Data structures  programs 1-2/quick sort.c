#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	    temp=*a;
	    *a=*b;
	    *b=temp;
}

int quick_sorted(int *a,int L,int H)
{
	int i,j=L,k=H;

//	printf("%d",p);
	for(i=L;i<k;i++)
	{
		if(a[i]<a[k])
		{
		swap(&a[i],&a[j]);
		//printf("%d %d",a[i],a[j]);	
			j++;
		}
	}
	swap(&a[j],&k);
	return j;
}
void quick(int *a,int l,int h)
{
	int p;
	while(l<h)
	{
	
	p=quick_sorted(a,l,h);
	quick(a,l,p-1);
	quick(a,p+1,h);
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
	quick(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
/*
10
0 4 7 8 9 1 6 3 2 5 */
