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
	NODE *NN,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
		NN->add=Head;
	}
	else
	{
		temp=Head;
		while((temp->add)!=Head)
		{
			temp=temp->add;
		}
		temp->add=NN;
		NN->add=Head;
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
	printf("%d",temp->data);
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
		Head=NN;
		NN->add=Head;
		
	}
}
int del_Head()
{
	NODE *temp;
	int val;
	if(Head==NULL)
	{
		
	  	return -1;
	  		
	}
	else{
		temp=Head;
		Head=Head->add;
		 temp->add=NULL;
		 
		 return temp->data;
	
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
	else if(Head->add==Head)
	{
	  val=Head->data;
	  Head=NULL;
	  return val;
	}
	
	else
	{
		temp=Head;
		while ((temp->add)->add!=Head)
		{
	        temp=temp->add;
	    }
	    val=temp->add->data;
			temp->add=Head;
			return val;
    }
}
void insert_position(int data,int position)
{
	int pos=1,f=0;
	NODE *NN,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else if(position==1)
	{
		insert_head(data);
	}
	int nodes=0;
	temp==Head;
	while(temp)
	{
	    nodes++;
		temp=temp->add;
	}
	if(position>nodes)
	{
		insert(data);
		
	}
	else
	{
		temp=Head;
		while(pos<position-1)
		{
			temp=temp->add;
			if(temp->add==Head)
			{
				temp->add=NN;
				f=1;
				break;
			}
			pos++;
		}
		if(f==0)
		{
		NN->add=temp->add;
		temp->add==NN;
	    }
	}
}
int del_position(int position)
{
	NODE *temp;
	int pos=1,k;
	int nodes=0;
	temp=Head;
	while(temp)
	{
		nodes++;
		temp=temp->add;
	}
	if(nodes==0)
	{
		return -1;
	}
	else if(position==1)
	{
		k=del_Head();
		return k;
	}
	else if(position>nodes)
	{
		k=del();
		return k;
	}
	else
	{
	temp=Head;
	while(pos<position-1)
	{
		temp=temp->add;
		pos++;
	}	
	k=(temp->add)->data;
		temp->add=(temp->add)->add;
	return k;
	
	}
	
}

int main()
{	
	int ch,data,n;
  while(1)
  {
  	printf("1.insert 2.delete  3.insert at head 4.delete at head 5.insert at position  6.delete at position 7.display");
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
	  	//int n;
	  	scanf("%d",&n);
	  	insert_head(n);
	  }
	  else if(ch==4)
	  {
	  	//deleting at head
	  	n=del_Head();
	  	if(n==-1)
	  	printf("No Nodes");
	  	else
	  	printf("%d\n",n);
	  	
	  }
	  else if(ch==7)
	  {
	  	//display the nodes
	  	display();
	  }
	  else if (ch==5)
	  {
	  	scanf("%d",&data);
	  	int position;
	  	scanf("%d",&position);
	  	insert_position(data,position);
	  }
	  else if(ch==6)
	  {
	  //	scanf("%d",&data);
	  	int position ,val;
	  	scanf("%d",&position);
	  	 val=del_position(position);
	  	//int val;
	  	if(val==-1)
	  	{
	  		printf("No Nodes");
		  }
		  else
		  printf("%d",val);
	  }
	  else
	  {
	  	break;
	  }
  }	
  return 0;
}

