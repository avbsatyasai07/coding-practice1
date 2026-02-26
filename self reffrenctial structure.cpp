//wap to create a self referenceial structure
#include<stdio.h>
struct student
{
	int marks;
	int id;
	struct student *link;
};
int main()
{
	struct student s1;
	s1.marks=50;
	s1.id=4930;
	s1.link=NULL;
	struct student s2;
	s2.marks=80;
	s2.id=5001;
	s2.link=NULL;
	
	s1.link=&s2;
	printf("marks is:%d",s1.link->marks);
	printf("\nid is:%d",s1.link->id);
	return 0;
	
		
}
