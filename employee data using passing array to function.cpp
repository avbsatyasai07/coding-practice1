#include<stdio.h>
#include<string.h>

struct employee//main struct
{
	char name[10];
	int id;
	char ph[11];
	struct adress//dep struct
{
	char city[20];
	int pin;
	int dno;
}a;
}e;
void display(employee);
int main()
{
	printf("\n enter name,id,ph:");
	scanf("%s %d%s",&e.name,&e.id,&e.ph);
		printf("\n enter city,pin,doorno:");
	scanf("%s %d%d",&e.a.city,&e.a.pin,&e.a.dno);
	display(e);
	
	return 0;
}
void display(employee)
{
	printf("name:%s\nid:%d\nphno:%s",e.name,e.id,e.ph);
	printf("\ncity:%s\npin:%d\ndoorno:%d",e.a.city,e.a.pin,e.a.dno);
}

