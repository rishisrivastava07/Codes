import java.util.*;

public class m8_arrayCreating{
    public static void main(String agrs[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of an array");
        int size = sc.nextInt();

        int marks[] = new int[size];

        for(int i = 0; i < size; i++){
            marks[i] = sc.nextInt();
        }

        System.out.println("Printing the array");
        for(int i = 0; i < size; i++){
            System.out.print(marks[i] + " ");
        }
        sc.close();
    }
}