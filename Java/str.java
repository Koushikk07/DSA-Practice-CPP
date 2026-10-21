import java.util.Scanner;

public class str {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String name = scanner.nextLine();

        String _first_name = scanner.next();
        String _second_name = scanner.next();

        System.out.println("First Name: " + _first_name);
        System.out.println("Second Name: " + _second_name);
        System.out.println("Is First Name Equals to Second Name: " + _first_name.equals(_second_name));
        /*
         * System.out.println("Full Name: " + _first_name + " " + _second_name);
         */
        System.out.println("Name: " + name);
        System.out.println("Length: " + name.length());
        System.out.println("CharAt index 4 : " + name.charAt(4));
        System.out.println("Substring Begin: " + name.substring(0));
        System.out.println("Substring Begin and End: " + name.substring(8, 15));

        // for loop
        int n = name.length();
        System.out.print("String Printed by Loop: ");
        for (int i = 0; i < n; i++) {
            System.out.print(name.charAt(i));

        }

        scanner.close();

    }
}
