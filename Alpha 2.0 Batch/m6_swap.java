import java.util.Scanner;

public class m6_swap{
    public static void swapping(int a, int b){
        int t = a;
        a = b;
        b = t;
    }
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int a, b;
        a = io.nextInt();
        b = io.nextInt();

        System.out.println("A = " + a + " B = " + b);
        swapping(a,b);
        System.out.println("A = " + a + " B = " + b);

        io.close();
    }
}