#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *add;
};
typedef struct node NODE;
NODE *Head=NULL;
void insert_end(int n)
{
	NODE *NN,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->add=NULL;
	NN->data=n;
	if(Head==NULL)
	{
		Head=NN;
		NN->add=Head;
	}
	else
	{
		temp=Head;
		while(temp->add!=Head)
		{
			temp=temp->add;
		}
		temp->add=NN;
		NN->add=Head;
	}
}
void insert_Head(int n)
{
	NODE *NN,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->add=NULL;
	NN->data=n;
	if(Head==NULL)
	{
		Head=NN;
		Head->add=Head;
	}
	else
	{
		temp=Head;
		while(temp->add!=Head)
		{
			temp=temp->add;
		}
		NN->add=Head;
		Head=NN;
		temp->add=Head;
		
	}
}
void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		printf("NO Nodes\n");
	}
	else
	{
		temp=Head;
		while(temp->add!=Head)
		{
	       //printf("%d %d %d\n",temp,temp->data,temp->add);
			printf("%d ",temp->data);
		   /*if(temp->add==Head)
		   {
		   	break;
		   }*/
		 temp=temp->add;
 	    }
 	    //printf("%d %d %d\n",temp,temp->data,temp->add);
	printf("%d\n",temp->data);
	}
}
int  del_end()
{
	NODE *temp;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==Head)
	{
		int val=Head->data;
		Head=NULL;
		return val;
	}
	else
	{
		temp=Head;
		while((temp->add)->add!=Head)
		{
			temp=temp->add;
		}
		int val=temp->add->data;
		temp->add=Head;
		
		return val;
	}
}
int del_head()
{
	NODE *temp;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==Head)
	{
		int val=Head->data;
		Head=NULL;
		
		return val;
	}
	else
	{
		temp=Head;
		while(temp->add!=Head)
		{
			temp=temp->add;
		}
	int val=Head->data;
		Head=Head->add;
		temp->add=Head;
		return val;
	}
}


int main()
{
	int ch;
	while(1)
	{
		printf("1.insert_at _end   2.del 3.insert_at_Head 4.del_at_head 5.display");
		scanf("%d",&ch);
		if(ch==1)
		{
			int data;
			scanf("%d",&data);
			insert_end(data);
		}
		else if(ch==2)
		{
			int val;
			
			val=del_end();
			if(val==-1)
			{
				printf("No nodes\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			int val;
			scanf("%d",&val);
			insert_Head(val);
		}
		else if(ch==4)
		{
			int val;
			val=del_head();
			if(val==-1)
			{
				printf("No nodes\n");
			}
			else
			printf("%d\n",val);
		}
		else if(ch==5)
		{
			display();
		}
		else
		{
			break;
		}
	}
	return 0;
}
