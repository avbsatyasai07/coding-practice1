#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	float cgpa;
	char sec;
	char name[7];
};
int main()
{
	struct student s[5];
	printf("enter data of stdents");
	for(int i=0;i<5;i++)
	{
	printf("\nstdent:%d",i);
	scanf("%s %d %f %c",&s[i].name,&s[i].roll,&s[i].cgpa,&s[i].sec);
	}
for(int i=0;i<5;i++)
{
	printf("\nstdent%d:\n",i);
	printf("name:%s\nrollno:%d\nsec:%c\ncgpa:%.2f\n",s[i].name,s[i].roll,s[i].sec,s[i].cgpa);
}
	return 0;
}

