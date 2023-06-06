public class m7_invertedRotatedHalfPyramind {
    public static void inveretd_Pyramid(int n){
        for(int i = 1; i <= n; i++){
            for(int j = n-i; j > 0; j--){
                System.out.print(" ");
            }
            for(int k = 1; k <= i; k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        inveretd_Pyramid(5);
    }
}
