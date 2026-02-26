#include<stdio.h>
struct data
{
	int d:4;
	int m:5;
	int y;
};
int main()
{
	struct data doj ={6,10,200};
	printf("\n");
	printf("%d %d %d",doj.d,doj.m,doj.y);  
	printf("\n");
	printf("size of bit field  %d ",sizeof(doj));
}
