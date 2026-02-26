#include<stdio.h>
int display(int,int,int);

int main()
{
	int aage[5]={10,20,30,40,50};
	display(aage[0],aage[1],aage[2]);
}
int display(int age0,int age1,int age2)
{
	printf("age of first person is%d",age0);
	printf("\nage of second person is%d",age1);
	printf("\nage of third person is%d",age2);
}
