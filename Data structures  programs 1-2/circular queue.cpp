#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,*queue,size;
void enqueue(int n)
{
	if((front==0 && rear==size-1 )||front==rear+1) //rear is at last position of the queue  -->no place for the new value
	{
		printf("queue is overflow\n");
	}
	else
	{
		/*if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			queue[rear]=n;
		}
	else
	{
		rear++;
		queue[rear]=n;
	}*/
	    if(front==-1 && rear==-1)//no values in the queue
	    {
		    front=0;
	    }
	    rear=(rear+1)%size;
	queue[rear]=n;
	}
}
int dequeue()
{
	int val;
	if(front==-1 && rear==-1)//no value in the queue
	{
		return -1;
	}
	if(front==rear)//only one value in the queue
	{
		val=queue[front];
		queue[front]=0;
		front=-1;
		rear=-1;
		return val;
	}
	val=queue[front];//if many values are there in queue
	queue[front]=0;
	front=(front+1)%size;
	return val;
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("Queue is underflow\n");
	}
	
	else
	{
		i=front;
		while(i!=rear)
		{
			printf("%d  %d \n",i,queue[i]);
			i=(i+1)%size;
		}
		printf("%d  %d   \n", i,queue[i]);
		printf("\n");
	
	}

}
int main()
{
	int ch,val;
	scanf("%d",&size);
	queue=(int*)calloc(size,sizeof(int));
	while(1)
	{
		printf("1.enqueue  2. dequeue 3.display  4.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			val=dequeue();
			if(val==-1)
			{
				printf("queue is under flow\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
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
