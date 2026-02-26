//array to pointer
#include<stdio.h>
int main()
{
	int arr[50],i,n,*p;
	printf("enter n value");
	scanf("%d",&n);
	printf("array elemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=arr;
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%d",(p+i));//print adress of pointer to array indexes
	}	
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));//
	}
}
