//wap to find largest elements in array
#include<stdio.h>
int main()
{
	int i,n,smallest;
	printf("enter n value size");
	scanf("%d",&n);
	int a[n];
	printf("\n enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	smallest=a[0];
	for(i=0;i<n;i++)
	{
		if(smallest>a[i])
		smallest=a[i];
		
	}
	printf("\nlargest element is :%d",smallest);
	return 0;
}
