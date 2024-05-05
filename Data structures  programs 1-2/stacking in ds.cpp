#include <stdio.h>
#include<stdlib.h>
int top=-1,n,*st;
void push(int val)
{
	if (top==n-1)
	{
		printf("stack is full");
	}
	else
	{
		st[++top]=val;
	}
}
int pop()
{
	if (top==-1)
	{
		return -1;
	}
	else
	{
		int val;
		val=st[top];
		top--;
		return val;
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		for (i=top;i>=0;i--)
		{
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
int main()
{
	int i,ch,val;
	scanf("%d",&n);
	st=(int*)calloc(n,sizeof(int));
	while(1)
	{
		printf("1.push 2.pop 3.display 4.exit");
		scanf("%d",&ch);
		if (ch==1)
		{
			scanf("%d",&val);
			push(val);
		}
		else if(ch==2)
		{
			//pop
			val=pop();
			if (val==-1)
			{
				printf("stack is empty");
			}
			else
			{
				printf("%d",val);
			}
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else
		{
			break;
		}
	}
	return 0;
}
