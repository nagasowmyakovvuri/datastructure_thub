#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct *next;
	struct *pre;
}
typedef struct node NODE;
NODE *Head=NULL;
void insert_end(int d)
{
  NODE *NN,*temp;
  NN=(*NODE)malloc(sizeof(NODE));
  NN->next=NULL:
  NN->prev=NULL;
  if(Head==NULL)
  {
  	Head=NN;
  	NN->next=Head;
  	NN->prev=Head;
  }
  else
  {
  	temp=Head;
  	while(temp->next!=Head)
  	{
  		temp=temp->next;
	}
	temp->next=NN;
	NN->next=Head;
  }
  	
}
void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		printf("NO NODES");
	}
	else
	{
		temp=Head;
		
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("1.insert_end 2.insert_Head 3.delete_end 4.delete_Head 5.insert_pos 6.delete_pos 7.display");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			scanf("%d",val);
			insert_end(val);
		}
		else if(ch==7)
		{
			display();
		}
	}
	return 0;
}
