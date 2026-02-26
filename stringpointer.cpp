//string pointer
#include<stdio.h>
int main()
{
	char *fruit[]={"grapes","apple","mango","strawberry","pineapple"};
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%s",fruit[i]);
		
	}
	return 0;
}
