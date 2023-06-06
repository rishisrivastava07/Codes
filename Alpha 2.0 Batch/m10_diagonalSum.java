public class m10_diagonalSum {
    public static int diagonalSum(int arr[][]){
        int n = arr.length;
        int m = arr[0].length;
        int sum = 0;
        if(n == m){
            // primary diagonal
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(i == j){
                        sum += arr[i][j];
                    }
                }
            }
        }
        else{
            return -1;
        }
        return sum;
    }
    public static void main(String[] args) {
        int matrix[][] = {{1,2,3,4},
                          {5,6,7,8},
                          {9,10,11,12},
                          {13,14,15,16}};
        
        System.out.println(diagonalSum(matrix));

    }
}
