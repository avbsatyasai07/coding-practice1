#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,n,c=0;
	printf("enter the string"
	);
	gets(s);
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]==s[n-i-1])
		c++;
	}
	if(c==i)
	printf("string is palindrom");
	else
	printf("string is not a palindrom");
	return 0;
}
