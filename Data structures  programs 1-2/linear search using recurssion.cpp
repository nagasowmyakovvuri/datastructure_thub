#include<stdio.h>
int linear_search(int *a,int n,int t)
{
    int static i=0;
    if(i==n)
    return 0;
    if(a[i]==t)
    return 1;
    i++;
    linear_search(a,n,t);
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
  linear_search(a,n,t);
  if(linear_search(a,n,t))
  printf("True");
  else
  printf("False");
return 0;
}
