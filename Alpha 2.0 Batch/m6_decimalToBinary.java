import java.util.Scanner;

public class m6_decimalToBinary {
    public static int decToBin(int dec){
        int binNum = 0;
        // int temp = dec;
        int pow = 0;
        while(dec > 0){
            int rem = dec % 2;
            binNum = binNum + (rem * (int) Math.pow(10, pow));
            pow ++;
            dec = dec / 2;
        }
        return binNum;
    }
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);
        int dec = io.nextInt();

        System.out.println(dec + " binary representation  = " + decToBin(dec));
        io.close();
    }
}
