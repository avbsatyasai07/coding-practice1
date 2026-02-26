//wap to find transporse of matrix
#include<stdio.h>
int main()
{
	int a[3][3],t[3][3],i,j;
	printf("enter matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("matrix a")
	;for(i=0;i<3;i++)
	{
		printf("\n");	
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
	}
	printf("\ntranspose of a")
	;for(i=0;i<3;i++)
	{
		printf("\n");	
		for(j=0;j<3;j++)
		{
			printf("%d  ",t[i][j]);
		}
	}
	return 0;
}
