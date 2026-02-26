//wap a program to check string is palindrome or not using string functions
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("enter the string:");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(!strcmp(s1,s2))
	puts("string is palindrom:");
	else
	puts("string is not a palindrom");
	return 0;
}
