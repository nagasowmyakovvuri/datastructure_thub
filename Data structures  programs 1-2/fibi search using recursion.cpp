#include<stdio.h>

int min(int a,int b)
{
	if(a>b)
	return b;
	return a;
}
int fibi_recursion(int *a,int *fib,int se,int n)
{
	//static int i=0,m;
	static int l=-1;
	int k=n-1,m;
		if(fib[k-2]==0)
	return 0;
	
//	int *res;
	m=min(l+fib[k-2],n-1);
	if(a[k]==se)
	return 1;
	if(se==a[m])
	return 1;
	else if(se>a[m])
	{
		l=m;
		k=k-1;
	}
	else
	k=k-2;
	//i++;
	return fibi_recursion(a,fib,se,n);

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
	int se;
	scanf("%d",&se);
	int fib[100];
	fib[0]=1,fib[1]=1;
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-2]+fib[i-1];
	}
	if(fibi_recursion(a,fib,se,n))
	printf("true");
	else
	printf("false");
	return 0;
}

