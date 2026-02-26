//wap to find factorial of numberusing recursion
#include<stdio.h>
unsigned long long int fact(int);//fun dec
int main()
{
	int n;
	printf("enter value:");
	scanf("%d",&n);
	printf("factorial of %d is %u",n,fact(n));//%u is for long long int sign
}

unsigned long long int fact(int a)//fun def
{
	if(a<=1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
