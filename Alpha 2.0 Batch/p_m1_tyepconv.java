public class p_m1_tyepconv {
    public static void main(String args[]){
        byte b = 4;
        char c = 'a';
        short s = 512;
        int i = 1000;
        float f = 3.14f;
        double d = 99.9954;

        double result = (f*b)+(i%c)-(d*s);

        System.out.println("Result " + result);
        System.out.println(f*b);
        System.out.println(i%c);
        System.out.println(d*s);

        int $ = 24;

        System.out.println($);
    }
}
