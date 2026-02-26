import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        int negativeSubarrays = 0;

        for (int i = 0; i < n; i++) {
            int currentSum = 0;
            for (int j = i; j < n; j++) {
                currentSum += a[j];
                if (currentSum < 0) {
                    negativeSubarrays++;
                }
            }
        }
        
        System.out.println(negativeSubarrays);
        sc.close();
    }
}