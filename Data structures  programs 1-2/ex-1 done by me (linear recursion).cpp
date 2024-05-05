#include<stdio.h>
int linear_recursion(int*a,int n,int t)
{
	static int i=0;
	if(i==n)
	return 0;
	
		if(a[i]==t)
		{
			return 1;
		}
	 i++;
	 linear_recursion(a,n,t);
	 //return 0;
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
	int t;
	scanf("%d",&t);
	linear_recursion(a,n,t);
	if(linear_recursion(a,n,t))
	 printf("true");
	else
	printf("false");
	return 0;
	
}
