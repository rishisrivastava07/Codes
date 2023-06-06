import java.util.*;

public class m1_product {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        float a,b;
        double product;

        System.out.println("Enter the first number ");
        a = sc.nextFloat();
        System.out.println("Enter the second number ");
        b = sc.nextFloat();

        product = a * b;
        System.out.println(product);
        sc.close();
    }
}
