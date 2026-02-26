//string to pointer
#include<stdio.h>
int main()
{
	char st[]="sai";
	char *p;
	int i;
	p=st;
	printf("string is:%s",p);
	printf("\n");
	for(i=0;st[i]!='\0';i++)
	{
		printf("%c",*p);
		p++
	;}
}
