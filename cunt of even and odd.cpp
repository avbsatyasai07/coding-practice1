//wap a program to print
#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("\nenter arrey elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\n array elements");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
	
