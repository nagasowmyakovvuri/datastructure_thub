#include<stdio.h>
void bubble_sort(int*a,int n)
{
	int temp,k,i,j,sc=0;
	k=n;
	while(k!=0)
	{
		//printf("%d ",k);
	sc=0;
		for(i=0;i<n-1;i++)
		{
		
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				sc++;	
				}
			}
			//printf("%d\n",sc);
	    }
	    //printf("hai ");
		if(sc==0)
		{
			break;
		}
		k=k-1;
			
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
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
