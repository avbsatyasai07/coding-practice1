//wap to reverse a number using functions.with arg & no rturn type
#include<stdio.h>
void reverse(int);
int main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	reverse(a);	//fun calling ur passing the actual parametr
	return 0;
}
void reverse(int n)	//fun def formal parameter
{
	int rem,rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("reverse of number is:%d",rev);
}

