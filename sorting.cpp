//wap a program to sortig given elments. 
#include<stdio.h>
int main()
{
	int a[100],n,i,j,s,temp;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("\nenter arrey elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)	//sorting
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])	//swaping
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("sorted elements");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		return 0;
	}
	
}
	
	
	
