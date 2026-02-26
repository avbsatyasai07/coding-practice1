#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=20;
	int *p;
	p=&a;
	free(p);
	p=NULL
	;printf("%d",p);
}
