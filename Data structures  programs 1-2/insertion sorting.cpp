#include<stdio.h>
void insertion_sorting(int*a,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
	/*	if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}	
		}*/
		temp=a[i];
		if(temp<a[j])
		{
			a[j+1]=a[j];
		}
		else
		{
			a[j+1]=temp;
		}
	}
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
	insertion_sorting(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
