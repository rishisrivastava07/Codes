import java.util.Scanner;

public class m5_characterPattern {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int n = io.nextInt();
        char ch = 'A';
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                System.out.print((char)(ch) + " ");
                ch++;
            }
            System.out.println();
        }

        io.close();
    }
}
