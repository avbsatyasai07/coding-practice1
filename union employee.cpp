#include<stdio.h>
#include<string.h>
union employee
{
	char name;
	int id;
	float salary;
	
};
int main()
{
	union employee e1;
	scanf("%s",&e1.name);
	printf("%s",e1.name);
}
