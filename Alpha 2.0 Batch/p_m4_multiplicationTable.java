import java.util.Scanner;

public class p_m4_multiplicationTable {
    public static void main(String args[]){
        Scanner io = new Scanner (System.in);
        int n;
        System.out.println("Enter the number = ");
        n = io.nextInt();

        for(int i = 1; i <= 10; i++){
            System.out.println(n + " x " + i + " = " + (n*i));
        }
        io.close();
    }
}
