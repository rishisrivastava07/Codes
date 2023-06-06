import java.util.Scanner;

public class m3_ifelse {
    public static void main(String args[]){
        int age;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age");
        age = sc.nextInt();

        if(age >= 18){
            System.out.println("You are an adult");
        }
        else if(age < 18 && age > 0){
            System.out.println("You are still a teenager");
        }
        else{
            System.out.println("Your entered age is wrong");
        }
        sc.close();
    }
}
