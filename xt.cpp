#include<stdio.h> 
int calculation (int num [ ]); 
int num [ ]={10,20,25,30,40,45}; 
int main( ) 
{ 
} 
int result; 
result=calculation (int num); 
printf("Result=%d",result); 
return 0; 
int calculation(int num[ ]) 
{ 
int i,sum=0; 
for (i=0;i<6;i++) 
{ 
sum=sum+num [i]; 
} 
return sum; 
} 
