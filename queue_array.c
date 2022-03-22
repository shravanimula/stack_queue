#include<stdio.h>
#define s 5
int front=-1;
int rear=-1;
int q[s];
void enque(int n)
{
	if(rear==s-1)               
	{
		printf("queue is full:\n");
		return;								
	}
	else
	{
		if(front==-1)     
			front=0;
		rear++;
		q[rear]=n;
	}
}
void deque()
{
	if(front==-1)
	{
		printf("queue is empty\n");
		return;					
	}
	else
	{
		printf("deleted ele is %d\n",q[front]);
		front++;
	}
}
void display()
{
	if(rear==-1)
	{
		printf("queue is empty\n");
	 }
	 else
	  {
		  int i=front;
		  for(;i<=rear;i++)
			  printf("%d\n",q[i]);
	  }
}
int main()
{
	enque(1);
	enque(2);
	enque(3);
	display();
	deque();
	display();	
	deque();          
	display();
	deque();
}
