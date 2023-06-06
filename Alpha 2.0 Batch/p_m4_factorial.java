import java.util.Scanner;

public class p_m4_factorial {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int num;
        System.out.println("Enter the number = ");
        num = io.nextInt();
        int counter = num;
        int factorial = 1;
        while(counter > 0){
            factorial *= counter;
            counter--;
        }
        System.out.println("Factorial of "+num+" is "+factorial);
        io.close();
    }
}
