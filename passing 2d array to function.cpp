#include<stdio.h>
int display(int[][3]);

int main()
{
	int aage[2][3]={{10,20,30},{40,50,60}};
	display(aage);
}
int display(int aage)
{
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;i<3;j++)
		printf("%d\t",aage[i][j]);
	}
	
}
