#include<stdio.h>
int div(int a)
{
	int i,s=0;
	for (i=1;i<a;i++)
	{
		if(a%i==0)
		{
			s=s+i;
		}
	}
	return s;
}


int main()
{
/*	int a,b;
	scanf("%d%d",&a,&b);
	if(div(a)==b && div(b)==a)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}*/
	int i,j,s,f=0;
	for (i=1;i<=10000;i++)
	{
		s=div(i);
		for (j=1;j<=10000;j++)
		{
			if(s==j)
			{
				f=i+j;
				break;
			}
		}
	}
	printf("%d",f);
	return 0;
}
