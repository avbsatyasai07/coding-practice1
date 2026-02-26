/*#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter value:");
	scanf("%d",&n);
	goto table;
	printf("GOOD MORINING");
	table:
		printf("\n%d*%d=%d",n,i,n*i);
		i++;
		if(i<=3)
		goto table;
}*/
/*#include<stdio.h>
int main()
{
int n;
printf("enter n value");
scanf("%d",&n);
printf("\nthe number is:%d",n);
return 0;
}*/
//wap to count dgits
/*m,count=0;
printf("en#include<stdio.h>
int main()
{
int n,reter n value:");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	count++;//count=count+1
	n=n/10;//n/=10
	
}
printf("count of digits in number is:%d",count);
return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter n value:");
	scanf("%d",&n);
	while(n!0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digits of a number is:%d",sum);
	return 0;
}


}
#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("enter n value:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	
	}
	printf("revers of digits of a number is:%d",rev);
}
//palindrome

#include<stdio.h>
int main()
{
	int n,rem,rev=0,temp;
	printf("enter n value:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		print("%d",temp);
	}
	else
	{
		printf("%d not a palindrom",temp);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	printf("%d",n*n*n);
	return 0;
}
//armstrong for only 3 digits
	
#include<stdio.h>
int main()
{
	int n,temp,rem,sum=0;
	printf("enter n value:");
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
		printf("armstrong number");
	}
	else
	{
		printf("not an armstrong");
	}
	return 0;
}
//wap to find factorial of a number
#include<stdio.h>
int main()
{
	int n, fact=1,i;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1,1<=n,i++)
	{
		fact=fact*i;
		
	}
	printf("factorial of number is %d", fact);
	return 0;
}
//wap to check number is prime or not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count=count+1;
	}
	if(count==2)
	{
		printf("number is prime");
	}
	else
	{
		printf("not a prime number");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		count=count+1;
	}
	if(count==1)
	{
		printf("number is prime");
	}
	else
	{
		printf("not a prime number");
	}
	return 0;
}*/
//wap to check year is leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("leap year");
		
	}
	else
	{
		printf("not leap year");
	}
}
