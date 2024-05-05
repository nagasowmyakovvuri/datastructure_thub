#include<stdio.h>
int max(int*a,int i)
{
	int max,j,k=0;
	max=a[0];
	for(j=0;j<=i;j++)
	{
		if(max<a[j])
		{
			max=a[j];
			k=j;
			//printf("%d",max);
		}
	}
	//printf("%d",max);
    //	printf("%d",k );
	return k;
}
void selection_sort(int*a,int n)
{
	int i,j,temp;
	for(i=n-1;i>=0;i--)//
	{
		j=max(a,i);
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		//printf("%d",a[i]);
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
	//max(a,n);
	selection_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
