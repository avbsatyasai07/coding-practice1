//wap aprogram to 2d array and display it.
#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	printf("enter size of array");
	scanf("%d%d",&m,&n);
	printf("\n enter elements into matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nIndex is [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n array elements in matrix is:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
	}
	return 0;
}
