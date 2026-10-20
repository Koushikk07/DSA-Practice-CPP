import java.util.Scanner;

public class basics {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        /*
         * int num = scanner.nextInt();
         * System.out.println(num);
         */

        /*
         * implicit type casting
         * int num = 10;
         * double n2 = num;
         * System.out.println(n2);
         * System.out.println(num);
         */

        // Explicit

        /*
         * double num = 10.7;
         * int x = (int) num; // lossy conversion
         * System.out.println(num);
         * System.out.println(x);
         */

        /*
         * int[] arr = { 112, 34, 5, 42, 5 };
         * for (int num : arr) {
         * System.out.print(num + " ");
         * 
         * }
         */
        /*
         * String First_Name = scanner.next(); // nextLine for full line,
         * nextDouble,nextBoolean
         * String Second_Name = scanner.next();
         * 
         * System.out.println(First_Name + " " + Second_Name);
         */

        int size = scanner.nextInt();
        int[] arr = new int[size]; // arr size dec
        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
        }

        for (int num : arr) {
            System.out.println(num);
        }
        scanner.close();
    }
}