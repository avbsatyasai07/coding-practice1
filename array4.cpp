//wap to find largest elements in array
#include<stdio.h>
int main()
{
	int i,n,largest;
	printf("enter n value size");
	scanf("%d",&n);
	int a[n];
	printf("\n enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	largest=a[0];
	for(i=0;i<n;i++)
	{
		if(largest<a[i])
		largest=a[i];
		
	}
	printf("\nlargest element is :%d",largest);
	return 0;
}
