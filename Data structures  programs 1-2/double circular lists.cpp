#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
	
};
typedef struct Node NODE;
NODE *Head=NULL;
void insert_end(int data)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->next=NULL;
	NN->prev=NULL;
	if(Head==NULL)
	{
		Head=NN;
		NN->next=NN;
		NN->prev=NN;
		return;
	}
	temp=Head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NN;
	NN->prev=temp;
	Head->prev=NN;
	NN->next=Head;
}
void insert_head(int data)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->next=NULL;
	NN->prev=NULL;
	Head->prev=NN;
	NN->next=Head;
	Head=NN;
}
int delete_end()
{	
    NODE *temp;
    int val;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->next==NULL)
	{
		val=Head->data;
		Head=NULL;
		return val;
	}
	temp=Head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	val=temp->next->data;
	temp->next->prev=NULL;
	temp->next=NULL;
	return val;
}
int delete_head()
{
	int val;
	NODE *temp;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->next==NULL)
	{
		val=Head->data;
		Head=NULL;
		return val;
	}
	else
	{
		temp=Head;
		val=Head->data;
		Head->next->prev=NULL;
		Head=Head->next;
		temp->next=NULL;
		return val;
	}
}
void insert_pos(int data,int pos)
{
    NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->next=NULL;
	NN->prev=NULL;
	int f=0;
	int i=0;
	if(Head==NULL)
	{
		Head=NN;
	}
	else if(pos==1)
	{
		insert_head(data);
	}
	else
	{
		temp=Head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
			if(temp->next==NULL)
			{
				insert_end(data);
				return;
			}
		}
		if(f==0)
		{
			temp->next->prev=NN;
			NN->next=temp->next;
			temp->next=NN;
			NN->prev=temp;
		}
	}
}
int delete_pos(int pos)
{
	NODE *temp=Head;
	int val,i,cn=1;
	while(temp)
	{
		temp=temp->next;
		cn++;
	}
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->next==NULL)
	{
		val=Head->data;
		Head=NULL;
		return val;
	}
	else if(pos==1)
	{
		val=delete_head();
		return val;
	}
	else if(pos>cn)
	{
		val=delete_end();
		return val;
	}
	else
	{
		temp=Head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		val=temp->next->data;
		temp->next->next->prev=temp;
		temp->next=temp->next->next;
		return val;
	}
}
void display()
{
	NODE *temp;
	temp=Head;
	if(Head==NULL)
	{
		printf("NO NODES\n");
		return;
	}
	while(temp->next!=Head)
	{
		printf("%d %d %d %d\n",temp,temp->prev,temp->data,temp->next);
		temp=temp->next;
	}
	printf("%d %d %d %d\n",temp,temp->prev,temp->data,temp->next);
	
}
int main()
{
	int ch,data,val,pos;
	while(1)
	{
		printf("1.insert at end 2.delete at end 3.insert at head 4.delete at head 5.display 6.insert at position 7.delete at position 8.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert data
			scanf("%d",&data);
			insert_end(data);
		}
		else if(ch==2)
		{
			//delete node
			val=delete_end();
			if(val==-1)
			{
				printf("NO NODES\n");
			}
			else
			{
				printf("%d\n",val);
			}
			
		}
		else if(ch==3)
		{
			scanf("%d",&data);
			insert_head(data);
			//insert at head
		}
		else if(ch==4)
		{
			val=delete_head();
			if(val==-1)
			{
				printf("NO NODES\n");
			}
			else
			{
				printf("%d\n",val);
			}
			//delete at head
		}
		else if(ch==5)
		{
			//display data
			display();
		}
		else if(ch==6)
		{
			//insert at position
			scanf("%d %d",&data,&pos);
			insert_pos(data,pos);
		}
		else if(ch==7)
		{
			scanf("%d",&pos);
			val=delete_pos(pos);
			if(val==-1)
			{
				printf("NO NODES\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}


