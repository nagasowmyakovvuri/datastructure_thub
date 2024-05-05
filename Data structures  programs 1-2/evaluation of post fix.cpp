#include<stdio.h>
#include<string.h>
int st[100],top=-1;
int is_operator(char ch)
{
	switch(ch)
	{
		case '+':return 1;
		case '-':return 1;
		case '*':return 2;
		case '/':return 2;
		default :return 0;
	}
}
int eval(int op2,char st,int op1)
{
    switch(st)
	{
		case '+':return op2+op1;
		case '-':return op2-op1;
		case '*':return op2*op1;
		case '/':return op2/op1;
	}	
}
int pstfixevl(char *str)
{
	char s[100];
	int i,op1,op2,res,k=0,num;
	for(i=0;str[i]!='\0';i++)
	{
	    if(is_operator(str[i]))	
        {
        	//operator
        	op1=st[top--];
        	op2=st[top--];
	  	    res=eval(op2,str[i],op1);
	  	    st[++top]=res;
	    }
	    else
	    {
		    //operend
	    	if(str[i]==' '&& k!=0)
	    	{
	    		s[k++]='\0';
	    		num=atoi(s);
	    		st[++top]=num;
	    		k=0;
			}
			else
			{
				s[k++]=str[i];
			}
		}
	}
	return st[0];
}
int main()
{
	char pf[100],str[100];
	int res;
	scanf("%[^\n]s",pf);
	res=pstfixevl(pf);
	printf("%d",res);
	return 0;
}
