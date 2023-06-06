/*
Name : Rishi Srivastava Roll No : 302211001002

Write a class for “Account” containing data members ‘accountNumber’, ‘holderName’,
‘balance’ and add constructors and necessary accessor/modifier functions for these data
members. Now create two class “SavingsAccount” and “CurrentAccount” extending from this

class. SavingsAccount will have a member variable ‘interestRate’ and member function
‘calculateYearlyInterest’. Write another class “Manager” that contains a list Account. Also write
a main() function to create an instance of Manager class. Add two SavingsAccount and three
CurrentAccount to Manager. Calculate interest of each SavingsAccount. Print the details of all
accounts.
*/

import java.io.*;

class Account{
    private int accountNumber;
    private String holderName;
    protected double balance;
    public static int accNo = 1;

    protected Account(){
        accountNumber = accNo++;
        holderName = "no-name";
        balance = 0.0;
    }
    protected Account(String name, double balance){
        holderName = name;
        this.balance = balance;
        accountNumber = accNo++;
    }

    void print_details(){
        System.out.println("Account Number = " + accountNumber);
        System.out.println("Bank Account Holder Name = " + holderName);
        System.out.println("Account Balance = " + String.format("%.2f", balance));
    }

}

class SavingsAccount extends Account{
    private float interestRate;
    private double interestAmount;

    SavingsAccount(String name, double balance){
        super(name,balance);
        interestRate = (float) 0.03;
        calculateYearlyInterest();
    }

    void calculateYearlyInterest(){
        interestAmount = (double)(balance * interestRate * 1);
        balance += interestAmount;
    }
    
    void print_details(){
        super.print_details();
        System.out.println("Interest amount = " + String.format("%.2f", interestAmount));
    }
}

class CurrentAccount extends Account{
    CurrentAccount(String name, double balance){
        super(name,balance);
    }
    void print_details(){
        super.print_details();
    }
}

class Manager{
    public static void main(String[] args) throws Exception {
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));

        SavingsAccount[] sa = new SavingsAccount[2];
        CurrentAccount[] ca = new CurrentAccount[3];

        System.out.println("Bank Details (For Savings Account ) :");
        for(int i = 0; i < 2; i++){
            System.out.print("Bank Holder Name = ");
            String name = bfr.readLine();
            System.out.print("Enter the Balance = ");
            double balance = Double.parseDouble(bfr.readLine());
            sa[i] = new SavingsAccount(name, balance);
        }

        System.out.println("Bank Details (For Current Account ) :");
        for(int i = 0; i < 3; i++){
            System.out.print("Bank Holder Name = ");
            String name = bfr.readLine();
            System.out.print("Enter the Balance = ");
            double balance = Double.parseDouble(bfr.readLine());
            ca[i] = new CurrentAccount(name, balance);
        }

        for(int i = 0; i < 2; i++){
            sa[i].print_details();
        }
        for(int i = 0; i < 3; i++){
            ca[i].print_details();
        }
    }
}
