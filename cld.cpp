#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	printf("the arguments count:%d",argc);
	int i;
	for(i=0;i<argc;i++)
	{
	
	printf("\n%s",argv[i]);
	}
	int add=atoi(argv[1])+atoi(argv[2]);
	printf("\nsum is:%d",add);
}
