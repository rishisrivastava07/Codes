public class m11_palindrome {
    public static boolean isPalindrome(String st){
        for (int i = 0; i < st.length()/2; i++) {
            int n = st.length();
            if(st.charAt(i) != st.charAt(n-1-i)){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        String str = "racecar";

        if(isPalindrome(str)){
            System.out.println("Is Palindrome");
        }
        else{
            System.out.println("Not a Palindrome");
        }

    }
}
