#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push()
{
	if(top==max-1)
	{
		printf("overflow stack is full");
	}
	else
	{
		int val;
		printf("enter value");
		scanf("%d",&val);
		top++;
		stack[top]=val;
		printf("%d is pushed",stack[top]);
		
	}
}
void pop()
{
	if(top==-1)
	{
		printf("underflow stack is empty");
	}
	else{
		printf("%d is poped",stack[top]);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("underflow stack is empty");
	}
	else{
		printf("top is:%d",stack[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("underflow stack is empty");
	}
	else{
		printf("\nstack elements are:");
		for(i=top;i>=0;--i)
		{
			printf("\n%d",stack[i]);
		}
	}
}
void isfull()
{
	if(top==max-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("stack is not full");
	}
}
void isempty()
{
	if(top==-1)
	{
		printf("stack is empty");
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
