#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *add;
};
typedef struct node NODE;
NODE *Head=NULL;

void insert(int data)
{
	NODE *NN,*temp;//creating a new node
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)//lists has no nodes
	{
		Head=NN;
	}
	else
	{
		temp=Head;
		while((temp->add)->add!=NULL)
		{
			temp=temp->add;
		}
		temp->add=NN;
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
		while(temp!=NULL)
		{
	       //printf("%d %d %d\n",temp,temp->data,temp->add);
			printf("%d ",temp->data);
		
		 temp=temp->add;
 	}
	printf("\n");
	}
}
void insert_head(int n)
{
	NODE *NN,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=n;
	NN->add=NULL;
	if(Head==NULL)
	{
		NN->add==Head;
	}
	else
	{
		temp=Head;
		while(temp!=NULL)
		{
		
		NN->add=Head;
		temp->add=(temp->add)->add;	
	}
}

int del()
{
	NODE *temp;
	int val;
	//printf("hi");
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==NULL)
	{
	  val=Head->data;
	  Head=NULL;
	  return val;
	}
	
	else
	{
		temp=Head;
		while ((temp->add)->add)
		{
	        temp=temp->add;
	    }
	    val=temp->add->data;
			temp->add=NULL;
			return val;
    }
}

int main()
{	
	int ch,data;
  while(1)
  {
  	printf("1.insert 2.delete  3.insert at head 4.delete at head  5.display");
  	scanf("%d",&ch);
  	if(ch==1)
  	{
  		//inserting the nodes
  		scanf("%d",&data);
  		insert(data);
  		
	  }
	  else if(ch==2)
	  {
	  	//delete the node
	  	int data;
	  	data=del();
	  	if(data==-1)
	  	{
	  		printf("No Nodes in the lists\n");
		  }
		  else
		  {
		  	printf("%d\n",data);
		  }
	  }
	  else if(ch==3)
	  
	  {
	  	//inserting at head
	  	int n;
	  	scanf("%d",&n);
	  	insert_head(n);
	  }
	  else if(ch==4)
	  {
	  	//deleting at head
	  }
	  else if(ch==5)
	  {
	  	//display the nodes
	  	display();
	  }
	  else
	  {
	  	break;
	  }
  }	
  return 0;
}

