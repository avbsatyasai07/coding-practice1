//wap a program to serch a elment in array print index.
#include<stdio.h>
int main()
{
	int a[10],n,i,pos,key;
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
			printf("element is found:%dpositon:%d",i,i+1);
		}
	}
	printf("element not found");
}
	
