#include<stdio.h>
#include<string.h>
struct date
{
	int d;
	int m;
	int y;
};
struct student
{
	char name[10];
	int roll;
	struct date d;
}s;
int main()
{
	printf("enter data of stdents");
	printf("\n enter name roll no:");
	scanf("%s %d",&s.name,&s.roll);
	printf("enter date of birth of student:");
	scanf("%d %d %d",&s.d.d,&s.d.m,&s.d.y);
	printf("\nstudent data is:");
	printf("name:%s\nrollno:%d\ndob:%d/%d/%d",s.name,s.roll,s.d.d,s.d.m,s.d.y);
	
	return 0;
}

