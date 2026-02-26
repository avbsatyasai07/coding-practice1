import java.util.*;

public class Solution {

    public static void main(String[] args) {
       
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        // 1. Create an array 'a' capable of holding 'n' integers
        int[] a = new int[n];

        // 2. Loop through the input to save values into the array
        for (int i = 0; i < n; i++) {
            a[i] = scan.nextInt();
        }

        scan.close();

        // Prints each sequential element in array a
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}
