//wap a program to insert an element in array. 
#include<stdio.h>
int main()
{
	int a[7],n,i,pos,elm;
	printf("enter size");
	scanf("%d",&n);
	printf("enter position");
	scanf("%d",&pos);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element");
	scanf("%d",&elm);
	for(i=n-1;i>=pos-1;i--)	
	{
		a[i+1]=a[i];
	}
	a[pos-1]=elm;
	for(i=0;i<=n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0; 
}
