#include<stdio.h>
#include<stdlib.h>
#define max 5
int size=0;
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push()
{
	if(max==size)
	{
		printf("stack is empty");
	}
	else
	{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&temp->data);
	temp->next=top;
	top=temp;
	size++;
	}
	
}
void pop()
{
	struct node *temp;
	temp=top;
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow");
	}
	else
	{
		printf("%d is poped",temp->data);
		top=temp->next;
		size--;
	}
}
void peek()
{
	struct node *temp;
	temp=top;
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow");
	}
	else
	{
		printf("\n top is:%d",temp->data);
	}
}
void display()
{
	struct node *ptr;
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d",ptr->data);
			ptr=ptr->next;
		}
	}
}
void isfull()
{
	if(max==size)
	{
		printf("\nstack is full");
	}
	else
	{
		printf("\nstack is not full");
	}
}
void isempty()
{
	if(top==NULL && size==0)
	{
		printf("\nstack is empty");
	}
	else
	{
		printf("stack is not empty");
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.isfull\n6.is empty\nenter your choise");
		scanf("%d",&ch);
		switch(ch)
		{
		
	case 1:
			{
				push();
				break;
			}
	case 2:
			{
				pop();
				break;
			}
	case 3:
			{
				peek();
				break;
			}
	case 4:
			{
				display();
				break;
			}
	case 5:
			{
				isfull();
				break;
			}
	case 6:
			{
				isempty();
				break;
			}
	default:
		{
			printf("wrong choise");
		}
	}
	}
	
}
