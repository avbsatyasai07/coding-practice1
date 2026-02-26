//wap  to imlement selection sort algorithm
#include<stdio.h>
int main()
{
	int a[10],n,i,t,j,s;
	printf("number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//selection sort
	for(i=0;i<n;i++)
	{
		s=i;
		for(j=i+1;j<n;j++)
		{
			if(a[s]>a[j])
			{
				s=j;
			}
		}
		t=a[i];
		a[i]=a[s];
		a[s]=t;
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
