#include<stdio.h>
void insertion(int*a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
while (j>=0)
	{
		
	if(a[j]>a[i])
		{
			a[j+1]=a[j];
		
		}
		if(a[j]<=a[i])
		{
			a[j+1]=temp;
		break;
		}
		j--;
	}
	}
	if(j==-1)
	a[0]=temp;
	
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
	insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
