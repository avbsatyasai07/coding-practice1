//wap a program to sortig given elments in assinding order . 
#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i;
	printf("enter array elements in a");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter array elements in b");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)	
	{
		c[i]=a[i];
		c[i+5]=b[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0; 
}
