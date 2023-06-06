import java.util.Scanner;
public class m5_halfPyramind {
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int n = io.nextInt();
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                System.out.print(j+1 + " " );
            }
            System.out.println();
        }

        io.close();
    }
}
