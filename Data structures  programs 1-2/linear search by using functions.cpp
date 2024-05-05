#include<stdio.h>
int fact(int *a,int n,int t)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==t)
    return 1;	
  }
  return 0;
}
int main()
{
  int n;
  scanf("%d",&n);
  int i,a[n];
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  int t;
  scanf("%d",&t);
  if(fact(a,n,t))
  {
     printf("True");
  }
  else
  printf("False");
  return 0;
  
}
