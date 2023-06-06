import java.util.Scanner;

public class m6_primeOrNot {
    public static boolean checkPrime(int n){
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n%i == 0){
                return true;
            }
        }
        return false;
    }

    public static void printRange(int low, int high){
        for(int i = low; i <= high; i++){
            if(!checkPrime(i)){
                System.out.println(i + " is prime");
            }
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();
        int low = sc.nextInt();
        int high = sc.nextInt();
        // if(checkPrime(n)){
        //     System.out.println(n + " It is not prime");
        // }
        // else{
        //     System.out.println(n + " It is prime");
        // }
        printRange(low,high);
        sc.close();
    }
}
