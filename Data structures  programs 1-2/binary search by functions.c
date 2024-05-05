#include<stdio.h>
int binary_search(int n,int *a,int se)
{
  int L,H,M;
  L=0;
  H=n-1;
  while(L<=H)
  {
  M=(L+H)/2;
  //printf("%d %d %d\n",L,h,m);
     if(a[M]==se)
     {
     return 1;
     }
     else if(a[M]>se)
     {
       H=M-1;
     }
     else
     {
         L=M+1;
     }
}
  return 0;

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
  binary_search(n,a,se);
  if(binary_search(n,a,se)==1)
  printf("Element found");
  else
  printf("element not found");
}
