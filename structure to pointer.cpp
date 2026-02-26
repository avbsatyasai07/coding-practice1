//wap to create  structure to pointer
#include<stdio.h>
#include<string.h>
struct employee
{
	char name[10];
	int id;
	float salary;
};
int main()
{
	struct employee e1;
	strcpy(e1.name,"sai");
	e1.id=4960;
	e1.salary=80000;
	struct employee *p;
	p=&e1;
	
	printf("information of employee is:");
	printf("\nname: %s \n id is:%d\n salary is:%.2f",p->name,p->id,p->salary);
}
