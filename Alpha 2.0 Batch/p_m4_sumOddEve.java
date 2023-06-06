import java.util.Scanner;

public class p_m4_sumOddEve {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int n,num;
        System.out.println("Enter the number of integers you want to input : ");
        n = io.nextInt();
        long sum_odd = 0;
        long sum_even = 0;
        for(int i = 0; i < n; i++){
            num = io.nextInt();
            if(num%2==0){
                sum_even += num;
            }
            else{
                sum_odd += num;
            }
        }
        System.out.println("Sum of odd integers = " + sum_odd);
        System.out.println("Sum of even integers = " + sum_even);
        io.close();
    }
}
