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
	int i,j=0,l=H;
	int p=a[l];
//	printf("%d",p);
	while(a[i]<p)
	{
		if(a[i]<p)
		{
		swap(&a[i],&a[j]);
		//printf("%d %d",a[i],a[j]);	
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	swap(&a[j],&p);
	return j;
}
void quick(int *a,int l,int h)
{
	int p;
	p=quick_sorted(a,l,h);
	quick_sorted(a,l,p-1);
	quick_sorted(a,p,h);
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
