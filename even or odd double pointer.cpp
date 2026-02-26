#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
	int *p;
	int **q;
	p=&a;
	q=&p;
	if(**q%2==9)
	printf("even");
	else
	printf("odd");
}
