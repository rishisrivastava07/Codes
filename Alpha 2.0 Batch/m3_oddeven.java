import java.util.Scanner;

public class m3_oddeven {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num;
        num = sc.nextInt();
        if( num % 2 == 0){
            System.out.println(num + " Entered number is even");
        }
        else{
            System.out.println(num + " Entered number is odd");
        }

        sc.close();
    }
}
