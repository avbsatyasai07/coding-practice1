#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[10];
	int s1,s2,s3,s4,s5;
};
int main(int argc,char *argv[])
{
	struct student s;
	int total;
	strcpy(s.name,argv[1]);
	s.s1=atoi(argv[2]);
	s.s2=atoi(argv[3]);
	s.s3=atoi(argv[4]);
	s.s4=atoi(argv[5]);
	s.s5=atoi(argv[6]);
	total=s.s1+s.s2+s.s3+s.s4+s.s5;
	printf("name\ts1\ts2\ts3\ts4\ts5\n");
	printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",s.name,s.s1,s.s2,s.s3,s.s4,s.s5,total);
	return 0;
}
