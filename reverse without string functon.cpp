// reverse of a string without string handling functions 

#include<stdio.h> 
 

int main() 

{ 

    char s1[100]; 

     

    int len=0,i=0; 

    printf("Enter the string:"); 

   // printf("Reverse of a string"); 

    //printf("Enter the string:"); 

    scanf("%[^\n]s",s1); 

    while(s1[i]!='\0') 

    { 

      len=len+1; 

      i++; 

    } 

    printf("Reverse of a string\n"); 

    for(i=len-1;i>=0;i--) 

    { 

        printf("%c",s1[i]); 

    } 

} 
