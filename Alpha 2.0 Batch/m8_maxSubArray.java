public class m8_maxSubArray {
    public static void maxSubArray(int arr[]) {
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int prefix[] = new int[arr.length];
        
        prefix[0] = 0;
        for(int i = 1; i < prefix.length; i++){
            prefix[i] = prefix[i-1]+ arr[i];
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.println("Pass "+ (i+1));
            int st = i;
            for (int j = i; j < arr.length; j++) {
                int en = j;
                currSum = st == 0 ? prefix[en] : prefix[en] - prefix[st-1];
                // for(int k = st; k <= en; k++){
                //     currSum += arr[k];
                // }
                System.out.println(currSum);
                if(currSum > maxSum){
                    maxSum = currSum;
                }
            }
        }
        System.out.println("maximum sum = " + maxSum);
    }

    public static void main(String[] args) {
        // int a[] = { 2, 4, 6, 8, 10};
        // int a[] = {1, -2, 6, -1, 3};
        int a[] = {-2,3,4,-1,-2,1,5,-3};
        maxSubArray(a);
    }
}
