#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s=0,j=0,r;
	while(n)
	{
		r=n%10;
		s=s+r*pow(2,j);
		n=n/10;
		j++;
	}
	printf("%d",s);
	return 0;
}
