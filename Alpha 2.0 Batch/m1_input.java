import java.util.*;

public class m1_input {
    public static void main(String args[]) {
        /*
         * next
         * nextLine
         * nextInt
         * nextByte
         * nextFloat
         * nextDouble
         * nextBoolean
         * nextShort
         * nextLong
        */

        Scanner sc = new Scanner(System.in);
        // String in1 = sc.next();   // upto space
        // System.out.println(in1);

        // String in2 = sc.nextLine();   // upto paragraph
        // System.out.println(in2);
        
        int num = sc.nextInt();
        System.out.println(num);
        
        
        float price = sc.nextFloat();
        System.out.println(price);

        sc.close();
    }
}
