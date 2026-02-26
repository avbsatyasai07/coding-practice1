// upper case of a string without string handling functions 

#include<stdio.h> 

int main() 

{ 

 

} 

 char str[40]; 

 int i; 

 

 printf("Enter string:\n"); 

 gets(str); 

 

 for(i=0;str[i]!='\0';i++) 

 { 

  if(str[i]>='a'&& str[i]<='z') 

  { 

   str[i] = str[i]-32; 

  } 

 } 

 

 printf("String in uppercase is:\n"); 

 puts(str); 

 

 return 0; 

} 
