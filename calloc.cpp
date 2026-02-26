#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("memeory allaocation not possible");
		exit(0);
	}
	else
	{
		printf("\nenter array elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",(p+i));
		}
		for(i=0;i<n;i++)
		{
			printf("%d\t",*(p+i));
		}
	}
	
}
