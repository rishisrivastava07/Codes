public class m7_floydTriangle {
    public static void floyd_Triangle(int n){
        int cnt = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(cnt + " ");
                cnt++;
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        floyd_Triangle(5);
    }
}
