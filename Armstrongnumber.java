import java.util.Scanner;

public class Armstrongnumber {
    public static void main(String[] args) {
        int num, sum = 0, digit = 0, temp;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();

        temp = num;

        // Count number of digits
        while (temp > 0) {
            digit++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp > 0) {
            int rem = temp % 10;
            sum += Math.pow(rem, digit);
            temp /= 10;
        }

        if (sum == num) {
            System.out.println(num + " is an Armstrong number.");
        } else {
            System.out.println(num + " is not an Armstrong number.");
        }
    }
}