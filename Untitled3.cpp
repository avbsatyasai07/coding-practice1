#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);                    //prime:2factorials only
    for(i=2;i<n;i++) //here count=2;if i=2 count=1 cause 1 is multiple for evry num;if i=2;i<n then count 0
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("not a prime");
    }
}

