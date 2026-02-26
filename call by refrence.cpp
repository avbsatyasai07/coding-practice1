#include<stdio.h>
int swapping(int*,int*);
int main()
{
	int a=100,b=200;
	printf("Before swapping:%d %d",a,b);
	swapping(&a,&b);
	printf("\nafter swapping:%d %d",a,b);
	
}
int swapping(int* a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
