public class m8_kadaneAlgorithm {
    public static void max_Sub_Array_Sum(int arr[]){
        // small positive + large negetive = value ( make it zero in result array )
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;

        for(int i = 0; i < arr.length; i++){
            currSum = currSum + arr[i];
            if(currSum < 0){
                currSum = 0;
            }

            if(maxSum < currSum)
                maxSum = currSum;
        }

        System.out.println("Maximum sum of a sub array is "+ maxSum);
    }
    public static void main(String[] args) {
        int arr[] = {-2,-3,4,-1,-2,1,5,-3};
        max_Sub_Array_Sum(arr);
    }
}
