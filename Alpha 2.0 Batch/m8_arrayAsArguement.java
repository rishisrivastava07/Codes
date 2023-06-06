// import java.util.*;

public class m8_arrayAsArguement {
    // call by reference
    public static void update(int marks[]) {
        for(int i = 0; i <marks.length; i++){
            marks[i] = (marks[i]+1);
        }
    }
    
    public static void main(String[] args) {
        int marks[] = {97,98,99};
        
        for(int i = 0; i <marks.length; i++){
            System.out.print(marks[i] + " ");
        }
        System.out.println();
        
        update(marks);
        System.out.println("After updating the marks of an Array");
        for(int i = 0; i <marks.length; i++){
                    System.out.print(marks[i] + " ");
                }
                System.out.println();

    }  
}
