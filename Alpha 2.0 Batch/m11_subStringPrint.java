public class m11_subStringPrint {
    public static String SubString(String str, int st, int en){
        String subStr = "";
        for(int i = st; i < en; i++){
            subStr += str.charAt(i);
        }
        return subStr;
    }
    public static void main(String[] args) {
        String str = "Hello World";

        String subString = SubString(str,0,4);
        System.out.println(subString);
    }
}
