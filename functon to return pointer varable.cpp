//wap to check largest among two using (function to pointer) return pointer variable in funtion.
#include<stdio.h>
int *largest(int*,int*);
int main()
{
	int a,b,*p,*q;
	printf("enter two values");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
int large=*largest(&a,&b);
	printf("largest is:%d",large);
	return 0;
}
int *largest(int*p,int*q)
{
	if(*p>*q)
	{
		return p;
	}
	else
	{
		return q;
	}
}
