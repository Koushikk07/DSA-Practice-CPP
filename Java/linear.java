import java.util.Scanner;

class LinearSearch {
    int size;
    int[] arr;

    public boolean search(int[] _arr, int target) {

        for (int num : _arr) {
            if (num == target) {
                return true;
            }
        }
        return false;
    }
}

public class linear {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int size = scanner.nextInt();
        int[] arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
        }

        /*
         * for (int i = 0; i < size; i++) {
         * System.out.print(arr[i]);
         * }
         * 
         * 
         */
        LinearSearch ls = new LinearSearch();
        boolean ans = ls.search(arr, 71);
        System.out.println(ans);

        int i = 0;
        while (i < size) {
            System.out.print(arr[i]);
            i++;
        }
        scanner.close();
    }
}
