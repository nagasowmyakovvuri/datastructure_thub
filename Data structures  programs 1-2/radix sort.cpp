#include<stdio.h>
int get_max(int *a,int n)
{
	int i;
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
void radix_sort(int *a,int n)
{
	int i,j,k,max,r,div=1,l[10][10],m[10],s=0,pass;
	max=get_max(a,n);
	while(max!=0)
	{
		s++;
		max=max/10;
	}
	for(pass=0;pass<s;pass++)
	{
		for(i=0;i<10;i++)
		{
			m[i]=0;
		}
		for(i=0;i<n;i++)
		{
			r=(a[i]/div)%10;
			l[r][m[r]]=a[i];
			m[r]+=1;
		}
		i=0;
		for(k=0;k<10;k++)
		{
			for(j=0;j<m[k];j++)
			{
				a[i]=l[k][j];
				i++;
			}
		}
		div=div*10;
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
	radix_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
