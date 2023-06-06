public class m11_shortestPath {
    public static int dist(int x, int y){
        int ans = 0;

        ans =(int)(Math.sqrt((int)(Math.pow(x, 2)) +(int)(Math.pow(y, 2))));

        return ans;
    }
    public static int shortestPath(String dir){
        int disp = 0;
        int x = 0;
        int y = 0;

        for (int i = 0; i < dir.length(); i++) {
            if(dir.charAt(i) == 'N'){
                y += 1;
            }
            else if(dir.charAt(i) == 'S'){
                y -= 1;
            }
            else if(dir.charAt(i) == 'E'){
                x += 1;
            }
            else{
                x -= 1;
            }
            disp = dist(x,y);
        }
        return disp;
    }
    public static void main(String[] args) {
        String directions = "WNEENESENNN";
        int result = shortestPath(directions);
        System.out.println(result);
    }
}
