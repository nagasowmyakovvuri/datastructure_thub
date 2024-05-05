#include<stdio.h>
int main()
{
char t[3];
printf("%d",sizeof(t)-sizeof(t[0]));
return 0;
}
