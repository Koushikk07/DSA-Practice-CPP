import java.util.Scanner;

public class Condition {

    public static void main() {
        Scanner scanner = new Scanner(System.in);
        int marks = scanner.nextInt();
        if (marks >= 90) {
            System.out.println("Grade S");
        } else if (marks >= 80) {
            System.out.println("Grade A");
        } else if (marks >= 70) {
            System.out.println("Grade B");
        } else if (marks >= 60) {
            System.out.println("Grade C");
        } else if (marks >= 50) {
            System.out.println("Grade D");
        } else if (marks >= 40) {
            System.out.println("Grade E");
        } else {
            System.out.println("Fail");
        }
        scanner.close();
    }
}