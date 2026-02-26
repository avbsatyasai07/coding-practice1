#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENter data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(front==NULL &&rear==NULL)
	{ 
	
	  front=rear=temp;

	}
	else
	{
	rear->next=temp;
	rear=temp;
	}
}
void display()
{
	if(front==NULL && rear==NULL)
	{
		printf("empty queue");
	}
	else
	{

	struct node *ptr;
	ptr=front;
	while(ptr!=NULL)
	{
		printf("%d \t",ptr->data);
		ptr=ptr->next;
}
	}		
}
void peek()
{
	if(front==NULL && rear==NULL)
	{
		printf("empty queue");
	}
	else
	{
		printf("%d",front->data);
	}
	
}
void dequeue()
{
	if(front==NULL)
	{
		printf("empty queue underflow");
	}
	else{
		struct node *ptr;
		if(front==rear)
		{
		ptr=front;
    	front=rear=NULL;	
		}
		else
		{
			ptr=front;
			front=ptr->next;
	
		}
		printf("removed element:%d",ptr->data);
		free(ptr);
	}
	
	
	
	
}


int main()
{
	int ch;
	while(1)
	{
	
	printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.isempty\n6.isfull  \n Enter your choice:");
	scanf("%d",&ch);
	
switch(ch)
{
	case 1:{
		enqueue();
		break;
	}
	case 2:{
		dequeue();
		break;
	}
	case 3:{
		peek();
		break;
	}
	case 4:{
		display();
		break;
	}
	case 5:{
	//	isempty();
		break;
	}
	case 6:{
	//	isfull();
		break;
	}
	}
}
}

