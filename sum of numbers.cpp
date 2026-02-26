/*#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
	}
	printf("\nsum is:%d",sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\t",i);
		i++;
	}
	while(i<=n);
	printf("sum is:%d\n",sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	i=1;
	do
	{printf("\n%d*%d=%d",n,i,i*n);
	i++;
	}
	while(i<=10);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n value");
	scanf("%d",&n);
	i=0;
	do
	{
		printf("\n");
		i++;
		j=1;
		do
		{
			printf("%d*%d=%d\t",j,i,i*j);
			j++;
		}
		while(j<=10);
	}
	while(i<n);
}

