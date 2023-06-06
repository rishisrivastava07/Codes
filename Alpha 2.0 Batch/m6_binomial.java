import java.util.Scanner;

public class m6_binomial {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int n,r;
        System.out.println("Enter the value of n " );
        n = io.nextInt();
        System.out.println("Enter the value of r " );
        r = io.nextInt();

        int res = ((fact(n))/(fact(r)*fact(n-r)));
        System.out.println(res);
        io.close();
    }

    public static int fact(int n){
        if(n == 1)
            return 1;

        return (n*fact(n-1));
    }
}
