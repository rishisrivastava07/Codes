import java.util.*;

public class m1_sum {
    public static void main(String args[]) {
        // int a = 10;
        // int b = 5;
        int a,b;
        int sum = 0;

        Scanner sc = new Scanner(System.in); 

        System.out.println("Enter the first number ");
        a = sc.nextInt();
        System.out.println("Enter the second number ");
        b = sc.nextInt();
        sum = a + b;

        System.out.println(sum);
        sc.close();
    }
}
