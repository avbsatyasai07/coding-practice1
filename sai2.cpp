#include<stdio.h>
union book
{
	char name[10];
	int pages;
	int prize;
	
};
int main()
{
	union book b1;
	printf("enter data of book:");
	scanf("%s %d %d",&b1.name,&b1.pages,&b1.prize);
	printf("name of book:%s\nnumber of pages:%d\nprize of book:%d",b1.name,b1.pages,b1.prize);
}
