import java.util.Scanner;

public class m6_factorial {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int n = io.nextInt();

        System.out.println("Factorial of "+n+" is "+ fact(n));
        io.close();
    }

    public static int fact(int n){
        if(n == 1){
            return 1;
        }
        return(n * fact(n-1));
    }
}
