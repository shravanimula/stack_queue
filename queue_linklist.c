#include<stdio.h>
#include<stdlib.h>
struct Queue
{
	int data;
	struct Queue *link;
};
struct Queue *front,*rear;
void Enq(int);
int Deq();
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.Enq 2.Deq 3.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");				
				scanf("%d",&data);							
				Enq(data);
				break;
			case 2: if(front==NULL)
					printf("Queue is empty\n");
				else
					printf("data dequed is %d\n",Deq());
				break;
			case 3: exit(0);
		}
	}
}
void Enq(int x)
{
	struct Queue *newnode=NULL;
	newnode=malloc(sizeof(struct Queue));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		newnode->data=x;
		if(front==NULL)   // when q is empty
			front=newnode;
		else		// when q is existing
			rear->link=newnode;   
		rear=newnode;
	}
}
int Deq()
{
	struct Queue * temp=NULL;
	int d;
	temp=front;
	d=temp->data;
	front=front->link;
	if(front==NULL) // if Q is becoming empty
		rear=NULL; // making rear also NULL
	free(temp);
	temp=NULL;
	return d;
}
