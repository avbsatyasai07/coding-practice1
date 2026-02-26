//traversing of string using 2nd methode(using NULL)
#include<stdio.h>
#include<string.h>
int main()
{
	char s[6]="satya";
	int i=0;
	int vowels=0,consonants=0;
	while(s[i]!=NULL)
	{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U')
			{
				vowels++;
			}
			
			else
			{
				consonants++;
				
			}
			i++;
	}
	printf("the number of vowels %d",vowels);
	printf("\nthe number of consonents %d",consonants);
}
