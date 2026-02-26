#include<stdio.h>
int display(int[]);

int main()
{
	int aage[5]={10,20,30,40,50};
	display(aage);
}
int display(int aage[])
{
	int i;
	for(i=0;i<5;i++)
	printf("%d\t",aage[i]);
}

