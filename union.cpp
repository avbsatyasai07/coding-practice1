#include<stdio.h>
#include<string.h>
union student
{
	char name[10];
	int roll;
	
};
int main()
{
	union student e1;
	strcpy(e1.name,"sai");
	e1.roll=012;
	printf(" name is:%s",e1.name);
	printf("\nroll no is:%d",e1.roll);
	return 0;
}
