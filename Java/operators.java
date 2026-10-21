import java.util.Scanner;

public class operators {
    public static void main(String[] args) {
        // arthematic
        Scanner scanner = new Scanner(System.in);
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int add = num1 + num2;
        int sub = num1 - num2;
        int mul = num1 * num2;
        int div = num1 / num2;
        int mod = num1 % num2;
        System.out.println("ADDITION OF " + num1 + " + " + num2 + " : " + add);
        System.out.println("MULTIPLICATION OF " + num1 + " * " + num2 + " : " + mul);
        System.out.println("SUBTRACTION OF " + num1 + " - " + num2 + " : " + sub);
        System.out.println("DIVISION OF " + num1 + " / " + num2 + " : " + div);
        System.out.println("MOD OF " + num1 + " % " + num2 + " : " + mod);
        System.out.println(num1 + " == " + num2 + " : " + (num1 == num2));
        System.out.println(num1 + " != " + num2 + " : " + (num1 != num2));
        System.out.println(num1 + " >= " + num2 + " : " + (num1 >= num2));
        System.out.println(num1 + " <= " + num2 + " : " + (num1 <= num2));
        System.out.println(num1 + " < " + num2 + " : " + (num1 < num2));
        System.out.println(num1 + " > " + num2 + " : " + (num1 > num2));

        System.out.println("PRE INCREMENT " + ++num1);
        System.out.println("AFTER PRE INCREMENT " + num1);
        System.out.println("POST INCREMENT " + num1++);
        System.out.println("AFTER POST INCREMENT " + num1);

        scanner.close();
    }
}
