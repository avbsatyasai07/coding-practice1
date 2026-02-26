//wap  to imlement bubble sort algorithm
#include<stdio.h>
int main()
{
	int a[10],n,i,t,j;
	printf("number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubbel sort
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
