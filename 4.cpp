#include <stdio.h> 
#include<string.h> 
int main () { 
int len; 
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
printf("Greeting message: %s\n", greeting ); 
len=strlen(greeting); 
printf("length: %d\n",len );
}
