import java.util.*;
// In a program,input the side of a square.You have to output the area of the square.
public class p_m1_area {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the side of a square");
        float n1 = sc.nextFloat();

        double area = n1 * n1;

        System.out.print("Area of a square = ");
        System.out.println(area);
        sc.close();
    }
}
