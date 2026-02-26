//wap to read 5 value in an array and display them
#include<stdio.h>
int main()
{
	int ar[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",ar[i]);
	}
	return 0;
}
