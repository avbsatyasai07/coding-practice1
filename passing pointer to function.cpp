//passing pointer to funtion to perform sum
#include<stdio.h>
int add(int*,int*);
int main()
{
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;
	int res=add(&a,&b);
	printf("sum is:%d",res);
	return 0;
}
int add(int*p,int*q)
{
	int sum=*p+*q;
	return sum;

}
