#include<stdio.h>
int binary_recursion(int*a,int L,int H,int se)
{
	if(L>H)//for writing anything in recursive we have to write the ternimating condition first
	{
		return 0;
	}
	int M;
	M=(L+H)/2;
	if(se==a[M])
	{
		return 1;
	}
	if(se>a[M])
	{
		L=M+1;
	}
	else
	{
		H=M-1;
	}
	return binary_recursion(a,L,H,se);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,se;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	if(binary_recursion(a,0,n-1,se)==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
}
return 0;
}
