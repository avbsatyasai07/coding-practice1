//wap to print a variable using pointer 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=10;
	int *p;
	int **q;
	p=&a;
	q=&p;
	printf("size of pointer is:%d",sizeof(p));
	printf("\nvalue of p  is:%x",p);//adress of a
	printf("\nadress of p is:%x",&p);
	printf("\nadrres of a is:%x",p);
	printf("\nvalue of q is:%x",q);
	printf("\nadress of q is:%x",&q);
	printf("\nvalue of a is:%d",**q);//var value
}
