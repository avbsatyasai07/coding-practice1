// LOWER CASE of a string without string handling function 

#include<stdio.h> 

int main() 

{ 

 char str[40]; 

 int i; 

 

 printf("Enter string:\n"); 

 gets(str); 

 

 for(i=0;str[i]!='\0';i++) 

 { 

  if(str[i]>='A'&& str[i]<='Z') 

  { 

   str[i] = str[i]+32; 

  } 

 } 

 printf("String in lowercase is:\n"); 

 puts(str); 

  

 return 0; 
}
