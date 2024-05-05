#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    int res=0;
   
    //printf("%d\n",n);
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    i=0;
    int j=0;
   for( i=0;i<n;i++){
       if(arr[i]%2==0 && i<(n-2)){
           j=i+1;
       
       while(arr[j]%2==0 && arr[j+1]%2==0){
           res++;
           j+=1;
           i=j;
       }
       }
       
   }
   printf("ans is :%d",res);
}
