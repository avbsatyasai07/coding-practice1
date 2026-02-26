#include <stdio.h>
#include <string.h> 

struct student {
    int roll;
    char name[20];
};

int main() {
    typedef struct student Student; 
    Student s1; 
    s1.roll = 200;
    strcpy(s1.name, "sai"); 
    printf("%s\n", s1.name);
    return 0;
}

