import java.util.*;

public class p_m6_checkEven {
    public static boolean isEven(int n){
        if(n%2==0)
            return true;
        
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        if(isEven(num)){
            System.out.println("Number is even");
        }
        else{
            System.out.println("Number is odd");
        }
        sc.close();
    }
}
