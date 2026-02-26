#include<stdio.h>
#include<stdlib.h>
int main
{
	int a;
	printf("enter a value:");
	scanf("%d",&a);
	int *p;
	p=&a;
	if(*p%2==0)
	{
	
	printf("EVEN");
}
	else
	{
	
	printf("ODD");
}
}
