import java.util.Scanner;

public class m1_typecasting {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int marks = (int)(99.99f);
        System.out.println(marks);
        
        // possible lossy conversion from float to int
        // float a = 25.12f;
        // int b = a;
        // System.out.println(b);

        float a = 25.12f;
        int b = (int) a;
        System.out.println(b);

        sc.close();
    }
}
