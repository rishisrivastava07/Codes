import java.util.Scanner;

public class m1_typeConversion {
    public static void main(String args[]){
        /*
         * type compatible
         * destination type > source type
         * byte->short->int->float->long->double
        */
        int a = 25;
        long b = a;

        // long a = 25;
        // int b = a;   // not possible due to higher order 

        System.out.println(b);
        Scanner sc = new Scanner(System.in);

        float number = sc.nextInt();    // allowed
        System.out.println(number);
        sc.close();

    }
}
