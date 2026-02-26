//malloc in dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,m;
	printf("enter number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation not possible");
		exit(0);
		
	}
	else{
		
		printf("\nenter array elemts:");
		for(i=0;i<n;i++)
		{
			scanf("%d",(p+i));
		}
		printf("\n array elemts are:");
		for(i=0;i<n;i++)
		{
			printf("%d\t",*(p+i));
		}
		
		printf("enter updated size:");
		scanf("%d",&m);
		p=(int*)realloc(p,m*sizeof(int));
	
		
		printf("array elements updated:");
		for(i=0;i<m;i++)
		{
			printf("%d\t",*(p+i));
		}
		free(p);
	}
}
