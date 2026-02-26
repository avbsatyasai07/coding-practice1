import java.util.Scanner;
class PrimeNumber
{
public static void main(String args[])
{
int num;
Boolean isPrime=true;
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number:");
num=sc.nextInt();
for(int i=2;i<num;i++)
{
if(num%i==0)
{
isPrime=false;
break;
}
}
if(isPrime==true)
{
System.out.println("the given number"+num+"is prime number");
}
else
{
System.out.println("the given number "+num+"is not a prime number");
}
}
}