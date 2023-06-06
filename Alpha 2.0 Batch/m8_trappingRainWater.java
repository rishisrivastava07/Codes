public class m8_trappingRainWater {
    public static int trapwater(int height[]){
        // calculate lmax[]
        int lMax[] = new int[height.length];
        lMax[0] = height[0];
        for(int i = 1; i < height.length; i++){
            lMax[i] = Math.max(lMax[i-1], height[i]);
        }        
        // calculate rmax[]
        int rMax[] = new int[height.length];
        rMax[height.length - 1] = height[height.length - 1];
        for(int i = height.length - 2; i > 0; i--){
            rMax[i] = Math.max(rMax[i+1], height[i]);
        }

        int value = 0;
        for(int i = 0; i < height.length; i++){
            int waterLevel = (Math.min(lMax[i], rMax[i]));
            if((waterLevel - height[i])>0){
                value += (waterLevel - height[i]);
            }
        }
        return value;
    }
    public static void main(String[] args) {
        int arr[] = {4,2,0,6,3,2,5};
        // int leftMaxBoundary[] = {4,4,4,6,6,6,6};
        // int rightMaxBoundary[] = {6,6,6,6,5,5,5};
        int val = trapwater(arr);
        System.out.println("Trap Rain Water = " + val);
    }
}
