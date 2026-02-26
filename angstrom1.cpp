//18. WAP TO CHECK IF A NUMBER IS ARMSTRONG OR NOT
#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0; 
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is armstrong number",temp);
    }
    else
    {
       printf("not an armstrong number"); 
    }
    return 0;
}


