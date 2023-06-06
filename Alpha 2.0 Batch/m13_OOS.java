public class m13_OOS{
    public static void main(String[] args) {
        BankAccount myAcc = new BankAccount();
        myAcc.username = "rishisrivastava";
        // myAcc.password = "asdfghjkl";
        myAcc.setPassword("asdfghjkl");
    }
}

class BankAccount{
    public String username;
    private String password;

    public void setPassword(String pwd){
        password = pwd;
    } 
} 