package lab3;
import java.util.Scanner;
public class arrays {
    static void sorting(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j =0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("ENTER THE NO OF ELEMNTS : ");
        int n = scan.nextInt();
        int[] arr = new int[n];
        System.out.print("ENTER THE ELEMENTS IN THE ARRAY : ");
        for(int i=0;i<n;i++){
            arr[i] =scan.nextInt();
        }
        sorting(arr,n);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}