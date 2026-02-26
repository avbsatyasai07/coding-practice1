#include<stdio.h>
extern int a=10;
int display()
{
	
	printf("value is:%d\n",a);
	++a;
}
int main()
{
	display();
	display();
	display();
}
