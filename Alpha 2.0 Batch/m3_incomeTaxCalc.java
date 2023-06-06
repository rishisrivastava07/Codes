import java.util.Scanner;

public class m3_incomeTaxCalc {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        double income;
        System.out.print("Enter your income = ");
        income = sc.nextDouble();

        float in_tax;

        if(income < 500000){
            System.out.println("No need to pay tax on income = "+ income);
        }
        else if(income >= 500000 && income < 1000000){
            in_tax = (float)(income * 0.2);
            System.out.println("You need to pay 20% tax = "+in_tax+ " on income = "+income );
        }
        else{
            in_tax = (float)(income * 0.3);
            System.out.println("You need to pay 30% tax = "+in_tax+ " on income = "+income );
        }
        sc.close();
    }
}
