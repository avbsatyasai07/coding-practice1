#include<stdio.h>
int display()
{
	static	int a=10;
	printf("value is:%d\n",a);
	++a;
}
int main()
{
	display();
	display();
	display();
}
