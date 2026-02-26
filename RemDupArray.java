/* write a java program to remove the duplicate elements in the array */

import java.util.Scanner;

public class RemDupArray {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter no of elements");
        int n = sc.nextInt();

        int[] arr = new int[n];
        int[] brr = new int[n];

        System.out.print("enter array elements");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("\ngiven array elements");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

        int newSize = 0;

        for (int i = 0; i < n; i++) {
            boolean isDup = false;

            for (int j = 0; j < newSize; j++) {
                if (arr[i] == brr[j]) {
                    isDup = true;
                    break;
                }
            }

            if (!isDup) {
                brr[newSize] = arr[i];
                newSize++;
            }
        }

        System.out.print("\nGiven array of elements after removing duplicates:");
        for (int i = 0; i < newSize; i++) {
            System.out.print(brr[i] + " ");
        }

        sc.close();
    }
}