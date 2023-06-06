import java.util.Scanner;

public class m3_calc {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int choice;
        float num1, num2;

        System.out.print("Enter two numbers = ");
        num1 = sc.nextFloat();
        num2 = sc.nextFloat();

        System.out.println("------------- Calculator -------------");
        System.out.println("1. Addition");
        System.out.println("2. Substraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Remaindar");
        choice = sc.nextInt();

        switch(choice){
            case 1 : System.out.println("------ Addition ------");
                     System.out.println("Addition of "+num1+ " and "+num2+ " = "+ (num1+num2));
                     break;
            case 2 : System.out.println("------ Substraction ------");
                     System.out.println("Substraction of "+num1+ " and "+num2+ " = "+ (num1-num2));
                     break; 
            case 3 : System.out.println("------ Multiplication ------");
                     System.out.println("Multiplication of "+num1+ " and "+num2+ " = "+ (num1*num2));
                     break;
            case 4 : System.out.println("------ Division ------");
                     System.out.println("Division of "+num1+ " and "+num2+ " = "+ (num1/num2));
                     break;       
            case 5 : System.out.println("------ Remaindar ------");
                     System.out.println("Remaindar of "+num1+ " and "+num2+ " = "+ (num1%num2));
                     break; 
            default : System.out.println("entered wrong choice");
                     break;                                   
        }
        sc.close();
    }
}
