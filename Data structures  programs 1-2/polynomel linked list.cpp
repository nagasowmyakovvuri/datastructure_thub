/*polynomial expression to linked list*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int coef;
	int pow;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head1=NULL,*head2=NULL;
void insert(int c,int p,NODE **head)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->coef=c;
	NN->pow=p;
	NN->next=NULL;
	if(*head==NULL)
	{
		*head=NN;
	}
	else
	{
		temp=*head;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=NN;
	}
}
void display(NODE **head)
{
  NODE *temp;	
  if(*head==NULL)
  {
  	printf("No NODEs\n");
  }
  else
  {
  	temp=*head;
  	while(temp)
  	{
  		printf("%d%d  ",temp->coef,temp->pow);
  		temp=temp->next;
    }
  }
}
int main()
{
	int c,p,ch=1;
	while(ch)
	{
		scanf("%d%d",&c,&p);
		insert(c,p,&head1);
		printf("1.yes 0.no\n");
		scanf("%d",&ch);
	}
	ch=1;
	while(ch)
	{
		scanf("%d%d",&c,&p);
		insert(c,p,&head2);
		printf("1.yes 0.no\n");
		scanf("%d",&ch);

	}
	display(&head1);
	printf("\n");
	display(&head2);
}
