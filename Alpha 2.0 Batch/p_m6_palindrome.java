import java.util.*;

public class p_m6_palindrome {
    public static boolean checkPalindrome(int n){
        int t = n;
        int res = 0;
        while(n > 0){
            int rem = n % 10;
            res = (res * 10) + rem;
            n = n / 10;
        }
        if( t == res ){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int num = io.nextInt();

        if(checkPalindrome(num)){
            System.out.println("Yes the number is Palindrome");
        }
        else{
            System.out.println("No the number is not a palindrome");
        }
        io.close();
    }
}
