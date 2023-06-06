import java.util.Scanner;

public class m4_revNum {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        // int num = 1234;
        int rev_num = 0;
        while(num != 0){
            int rem = (num % 10);
            rev_num = (rev_num * 10) + rem;
            num /= 10;
        }
        System.out.println("Reverse Number = " + rev_num);
        sc.close();
    }
}
