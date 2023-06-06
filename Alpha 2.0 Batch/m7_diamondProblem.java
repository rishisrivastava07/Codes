public class m7_diamondProblem {
    public static void diamondPattern(int n){
        for(int i = 1; i <= n; i++ ){
            for(int j = n-i; j > 0; j--){
                System.out.print("   ");
            }
            for(int k = 1; k <= ((2*i)-1); k++){
                System.out.print(" * ");
            }
            System.out.println();
        }
        for(int i = n-1; i > 0; i-- ){
            for(int j = n-i; j > 0; j--){
                System.out.print("   ");
            }
            for(int k = 1; k <= ((2*i)-1); k++){
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        diamondPattern(4);
    }
}
