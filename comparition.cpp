#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;
	if(p==q)
	{
		printf("\nequal");
	}
	else
	printf("\nnot equal");
}
