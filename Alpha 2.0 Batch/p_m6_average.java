import java.util.Scanner;

public class p_m6_average {
        public static float average(int a, int b, int c){
            return (float)((a+b+c)/3);
        }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        System.out.println("Average = " + (float)average(a,b,c));

        sc.close();
    }
}
