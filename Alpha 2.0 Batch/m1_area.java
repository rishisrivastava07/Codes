import java.util.Scanner;
public class m1_area {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        float r, area;
        System.out.println("Enter the radius ");
        r = sc.nextFloat();

        area = 3.14f * r * r;

        System.out.println(area);

        sc.close();
    }
}
