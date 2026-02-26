//call by value using function swaping.
#include<stdio.h>
int swaping(int,int);
int main()
{
	int a=100,b=200;
	printf("Before swapping:%d",a,b);
	swaping(a,b);
	printf("\nafter swapping:%d\n %d",a,b);
	
}
int swapping(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
