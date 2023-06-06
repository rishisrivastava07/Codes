import java.util.Scanner;

public class m6_binaryToDecimal {
    public static int binToDec(int bin){
        int temp = bin;
        int dec = 0;
        int i = 0;

        while(temp != 0){
            int rem = temp % 10;
            dec = (int) (dec + rem * Math.pow(2, i));
            temp = temp / 10;
            i++;
        }
        return dec;
    }
    public static void main(String args[]){
        Scanner io = new Scanner(System.in);

        int binary = io.nextInt();
        System.out.println(binary + " in decimal = " + binToDec(binary)); 
        io.close();
    }
}
