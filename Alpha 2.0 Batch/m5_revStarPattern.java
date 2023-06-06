import java.util.Scanner;

public class m5_revStarPattern {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int n = io.nextInt();

        for(int i = 0; i < n; i++){
            for(int j = n; j > i; j--){
                System.out.print(" * ");
            }
            System.out.println();
        }
        io.close();
    }
}
