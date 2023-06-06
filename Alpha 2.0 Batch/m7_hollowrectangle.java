import java.util.*;
public class m7_hollowrectangle {
    public static void hollowRect(int rows, int cols){
        //for outer loop
        for(int i = 1; i <= rows; i++){
            //for inner loop
            for(int j = 1; j <= cols; j++){
                // cell - (i,j)
                if(i == 1 || i == rows || j == 1 || j == cols){
                    // boundary cells
                    System.out.print(" * ");
                }
                else{
                    System.out.print("   ");
                }
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();
        
        hollowRect(row,col);
        // hollowRect(3,4);
        sc.close();
    }
}
