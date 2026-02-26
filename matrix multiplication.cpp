#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,m,n,k;
	printf("enter row and coloumns size of a matrix");
	scanf("%d%d",&r,&c);
	printf("enter row and coloumns size of b matrix");
	scanf("%d%d",&m,&n);
	printf("\n enter elments into A");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter elements into B");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	
	{
		scanf("%d",&b[i][j]);
	
    }
}
if(c==!m)
{
	printf("\n matrix multiplication not possible ");
	
}
else {
	printf("\n matrix multipliication is:");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<n;j++)
		{
			mul[i][j]=0;
			for(k=0;k<m;k++)
			{ mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
				
			}
		}
	}
	printf("\n matrix multiplication is");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d   ",mul[i][j]);
		}
	}
}
return 0;
}
