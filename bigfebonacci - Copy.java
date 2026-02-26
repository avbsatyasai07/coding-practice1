import java.math.BigInteger;
import java.util.Scanner;


public class Fibonacci public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        BigInteger n = sc.nextBigInteger();

        BigInteger a = BigInteger.ZERO;
        BigInteger b = BigInteger.ONE;

        if (n.compareTo(BigInteger.ZERO) <= 0) {
            System.out.println("Enter a positive number.");
            return;
        }

        System.out.println("Fibonacci Series:");

        for (BigInteger i = BigInteger.ZERO; i.compareTo(n) < 0; i = i.add(BigInteger.ONE)) {
            System.out.println(a);
            BigInteger temp = a.add(b);
            a = b;
            b = temp;
        }
    }
}