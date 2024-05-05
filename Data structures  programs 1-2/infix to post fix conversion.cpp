#include<stdio.h>
#include<string.h>
char st[100],pf[100];
int top=-1;
int is_operator(char ch)
{
	switch (ch)
	{
		case '+':return 1;
		case '-':return 1;
		case '*':return 2;
		case '/':return 2;
		default :return 0;
	}
}
char *post(char *infix)
{
	int k=0,i;
	char op;
	for(i=0;infix[i]!='\0';i++)
	{
		if(is_operator(infix[i]))
		{
			pf[k++]=infix[i];
		}
		else
		{
			if(is_operator(infix[i])>is_operator(st[top]))
			{
				st[++top]=infix[i];
			}
			else if(is_operator(infix[i])<=is_operator(st[top]))
			{
				while(1)
				{
					
					if(top==-1 && is_operator(infix[i])>is_operator(st[top]))
					{
						st[++top]=infix[i];
					}
					else
					{
						op=st[top--];
						pf[k++]=op;
					}
				}
					st[++top]=infix[i];
			}
		}
	}
	for(i=top;i>=0;i--)
	{
		pf[k++]=st[i];
	}
	return pf;
}
int main()
{
	char infix[100];
	scanf("%[^\n]s",infix);
	strcpy(pf,post(infix));
	printf("%s",pf);
	return 0;
	
}
