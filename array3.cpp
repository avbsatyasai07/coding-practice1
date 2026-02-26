//wap a program to sum of elements in an array.
#include<stdio.h>
int main()
{
	int i,sum=0,arr[5];
	printf("enter array eliments:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\n array elements are");
	for(i=0;i<5;i++)
	
		{
		printf("%d\t",arr[i]);
		sum=sum+arr[i];
		}
	printf("\n sum%d",sum);
}
