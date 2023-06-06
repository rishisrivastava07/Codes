public class m8_minSubArray {
    public static void minSubArray(int arr[]){
        int currSum = 0;
        int minSum = Integer.MIN_VALUE;
    
        for(int i = 0; i < arr.length; i++ ){
            int st = i;
            for(int j = i; j < arr.length; j++){
                int en = j;
                currSum = 0;
                for(int k = st; k <= en; k++){
                    currSum += arr[k];
                }
                System.out.println(currSum);
                if(currSum < minSum){
                    minSum = currSum;
                }
            }
        }
        System.out.println("Minimum sum of a sub array = " + minSum);
    }
    public static void main(String[] args) {
        int arr[] = {2,4,6,8,10};
        minSubArray(arr);
    }
}
