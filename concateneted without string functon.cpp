// concenrate of two strings without string handling functions 

#include<stdio.h> 

int main() 

{ 

  char str1[100],str2[100]; 

  int i=0,j=0; 

  printf("\nEnter First String:"); 

  gets(str1); 

  printf("\nEnter Second String:"); 

  gets(str2); 

  while(str1[i]!='\0') 

  i++; 

  while(str2[j]!='\0') 

  { 

    str1[i]=str2[j]; 

    j++; 

    i++; 

 

} 
str1[i]='\0'; 

  printf("\nConcatenated String is %s",str1);

  } 
