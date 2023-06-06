import java.util.*;
public class p_m1_average {
    public static void main(String args[]){
        float n1,n2,n3;
        double average;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st number = ");
        n1 = sc.nextFloat();
        System.out.println("Enter 2nd number = ");
        n2 = sc.nextFloat();
        System.out.println("Enter 3rd number = ");
        n3 = sc.nextFloat();

        average = (float)((n1+n2+n3)/3);

        System.out.println(average);
        sc.close();
    }
}
