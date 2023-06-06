public class m8_printSubArrays {
    public static void print(int arr[], int st, int en){
        for(int i = st; i <= en; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void subArrays(int arr[]){
        for(int i = 0; i < arr.length; i++){
            int st = i;
            for(int j = 0; j < arr.length; j++){
                print(arr, st, j);
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int a[] = {2,4,6,8,10,12};
        subArrays(a);
    }
}
