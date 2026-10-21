import java.util.Scanner;

public class Arr {
    public static void main(String[] args) {

        // int[] arr = { 12, 5, 7, 1, 3, 91, 6 };
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
        }
        // System.out.println(arr[1]); // we can access at index
        int sum = 0;
        for (int num : arr) {
            sum += num;
            System.out.print(num + " ");
        }
        System.out.println();
        System.out.println("Total Sum of an array: " + sum);

        scanner.close();
    }
}
