//wap a program to delete an element in array. 
#include<stdio.h>
int main()
{
	int a[10],n,i,pos;
	printf("enter size");
	scanf("%d",&n);
	printf("enter position");
	scanf("%d",&pos);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=pos-1;i<n-1;i++)	
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0; 
}
