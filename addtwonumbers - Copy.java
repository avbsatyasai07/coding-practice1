import java.util.Scanner;
class addtwonumbers
{
             public static void main(String args[])
{
int i,j,sum=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter first no:");
i=sc.nextInt();
System.out.println("enter second no:");
j=sc.nextInt();
sum=i+j;
System.out.println("the sum of " + i + " and " + j + " is "+sum);
}
}