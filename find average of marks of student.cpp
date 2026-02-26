//wap to read member of structure as marks dynamically find average
#include<stdio.h>
struct student
{
	int marks;
};
int main()
{
	struct student s[10];
	printf("enter the student marks");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&s[i].marks);
	}
	printf("\n display the marks");
	for(i=0;i<10;i++)
	{
		printf("%d\t",s[i].marks);
		
	}
	int sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+s[i].marks;
		
	}
	printf("sum is:%d",sum);
	float avg;
	avg=sum/i;
	printf("\n average is %.2f",avg);
	return 0;
}
