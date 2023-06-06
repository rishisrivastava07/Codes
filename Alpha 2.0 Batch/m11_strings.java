import java.util.Scanner;

public class m11_strings{
    public static void main(String[] args) {
        // char arr[] = {'a','b','c','d'};
        // String str = "abcd";
        // String str2 = new String("xyz");

        // Strings are IMMUTABLE
        Scanner sc = new Scanner(System.in);
        // String name;
        // name = sc.next();   // takes single word
        // name = sc.nextLine();
        // System.out.println(name);

        String fullName = "Tony Stark";
        // System.out.println(fullName.length());

        //concatenation
        // String firstname = "Rishi";
        // String lastName = "Srivastava";
        // String fullName = firstname + " " + lastName;
        // System.out.println(fullName);

        System.out.println(fullName.charAt(2)); 
        sc.close();
    }
}