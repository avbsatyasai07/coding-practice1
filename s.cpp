#include <stdio.h> 
#include <stdlib.h> 
int main(int argc, char *argv[]) { 
if (argc != 5) { 
printf("Usage: %s <Name> <Mark1> <Mark2> <Mark3>\n", argv[0]); 
return 1; 
} 
char *name = argv[1]; 
int mark1 = atoi(argv[2]); 
int mark2 = atoi(argv[3]); 
int mark3 = atoi(argv[4]); 
int total = mark1 + mark2 + mark3; 
printf("Student Name: %s\n", name); 
printf("Mark 1: %d\n", mark1); 
printf("Mark 2: %d\n", mark2); 
printf("Mark 3: %d\n", mark3); 
printf("Total Marks: %d\n", total); 
return 0; 
}


