//multipcaton,subtraction,sum of the 2d matrices

#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],sum[3][3],sub[3][3],prod[3][3],i,j;
	printf("enter elements in a");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements in b");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			prod[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\nsum matrix is")
	;for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
	}
	
	printf("\nsub matrix is")
	;for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",sub[i][j]);
		}
	}
	printf("\nprod matrix is")
	;for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",prod[i][j]);
		}
	}
	return 0;
}
