//wap a program to print frequncy count of a elment in array.
#include<stdio.h>
int main()
{
	int a[10],n,i,f,key,count=0;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("\nenter arrey elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		count++;
		}
	}
	printf("the frequncy count of given%d is %d",key,count);
	return 0;
}
	
	
	
