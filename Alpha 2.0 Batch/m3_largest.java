import java.util.Scanner;

public class m3_largest {
    public static void main(String args[]){
        int a,b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();

        if(a>b){
            System.out.println("A is larger");
        }
        else{
            System.out.println("B is larger");
        }
        sc.close();
    }
}
