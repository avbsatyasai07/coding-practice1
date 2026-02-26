#include<stdio.h>
int main()
{
	int i,n=1,r;
	scanf("%d",&i);
	for(n=1;n<=12;n++)
	{
		r=i*n;
		printf("%d*%d=%d\n",i,n,r);
	}
	return 0;
}
