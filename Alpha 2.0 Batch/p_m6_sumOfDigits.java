import java.util.*;
public class p_m6_sumOfDigits {
    public static int sumOfDigits(int n){
        int res  = 0;
        while(n > 0){
            int rem = n % 10;
            res += rem;
            n /= 10;
        }
        return res;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Sum of digits of " + n + " is = " + sumOfDigits(n));
        sc.close();
    }
}
