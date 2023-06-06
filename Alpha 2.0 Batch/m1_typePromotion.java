public class m1_typePromotion {
    public static void main(String args[]){
        
        // byte , short, char --> automatically converts to int but vice versa not possible
        
        // char a = 'a';
        // char b = 'b';
        // char c = b - a;  // as b - a returns int value which cannot be stored in char
        // System.out.println((int)a);
        // System.out.println((int)b);
        // System.out.println(b-a);
        
        // if one operand is (long < float < double) then other is also converted to this type 

        int a = 25;
        float b = 10.25f;
        long c = 100;
        double d = 124.5245;

        double ans = a + b + c + d;
        System.out.println(ans);
    }
}
