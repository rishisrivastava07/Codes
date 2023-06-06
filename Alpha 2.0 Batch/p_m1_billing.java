import java.util.Scanner;

public class p_m1_billing {
    public static void main(String args[]){
        float item1,item2,item3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the price of Pencil ");
        item1 = sc.nextFloat();
        System.out.println("Enter the price of Pen ");
        item2 = sc.nextFloat();
        System.out.println("Enter the price of Eraser ");
        item3 = sc.nextFloat();

        float total_price = item1 + item2 + item3;
        float total_gst = (0.18f * total_price);

        System.out.print("Total amount (including 18% gst) = ");
        System.out.println(total_gst + total_price);
        sc.close();
    }
}
