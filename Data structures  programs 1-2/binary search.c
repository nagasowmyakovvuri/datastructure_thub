# include<stdio.h>
int main()
{
int n,se;
scanf("%d",&n);
scanf("%d",&se);
int a[n],i,h,l,mid;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=0;
h=n-1;
while(l<=h)
{
mid=(h+l)/2;
if(a[mid]==se)
{
se=a[mid];	
}		

else if(a[mid]<se)
{
l=mid+1;
h=h;	
}
else
{
l=l;
h=mid-1;	
	}	
	}
if(se==a[mid])
{	
printf("element found");
}
else
{
printf(" element not found");
}
return 0;		
}
