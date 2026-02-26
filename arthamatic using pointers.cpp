#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;
	int sum=*p+*q;
	printf("sum is:%d",sum);
}
