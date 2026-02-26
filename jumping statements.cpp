//jumping statements
//1.break
//wap print 1 to n use break
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		if(i==5)
		continue;
	}
	return 0;
}
