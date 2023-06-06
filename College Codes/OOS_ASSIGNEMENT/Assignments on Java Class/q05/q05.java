/*
Name: Rishi Srivastava, Roll: 302211001002

Write a class “BankAccount” with the following instance variables:
AccountNumber (an integer), balance a floating-point number), and “ownerName” (a String).
Write proper constructor for this class. Also write methods balance, add (to deposit an amount),
and subtract (to withdraw an amount) and implement them. Now create another class
“AccountManager” that contains an array of BankAccount. Write methods create (to create an
account), delete(to terminate an account), deposit (to deposit an amount to an account) and
withdraw (to withdraw an amount from an account). Also write a class “Bank”, add main()
function that creates an AccountManager and add 5 accounts. Now print the details of all
accounts in this Bank.
*/

import java.io.*;

class BankAccount{
    protected int AccountNumber;
    private float balance;
    private String ownerName;
    public static int accNo = 1000;

    BankAccount(String name, float bal){
        AccountNumber = accNo++;
        ownerName = name;
        balance = bal;
    }

    protected void add(float bal){
        balance += bal;
    }
    
    protected void substract(float bal){
        if(balance < bal){
            System.out.println("Insufficient Balance");
        }
        balance -= bal;
    }

    protected void AccountDetails(){
        System.out.println("---- Account Details ----");
        System.out.println("Account Number = " + AccountNumber);
        System.out.println("Holder Name = " + ownerName);
        System.out.println("Balance =  Rs." + balance);
    }
}

class AccountManager{
    BankAccount[] accounts;
    int counter;

    AccountManager(int noOfAccs){
        accounts = new BankAccount[noOfAccs];
        counter = 0;
    }

    public void create(String name, float amount){
        accounts[counter++] = new BankAccount(name, amount);
    }

    public void delete(int AccNo){
        int i = 0;
        for(; i < counter; i++){
            if(accounts[i].AccountNumber == AccNo){
                while(i < counter-1){
					accounts[i] = accounts[i+1];
					i++;
				} 
				counter--;
				break;
            }
        }
        System.out.println(" ----- Account deleted -----");
    }

    public void deposit(int AccNo, float amount){
        int i = 0;
        for(; i < counter; i++){
            if(accounts[i].AccountNumber == AccNo){
                accounts[i].add(amount);
            }
        }
        System.out.println("----- Rs. " + amount + " /- credited -----");
    }

    public void withdraw(int AccNo, float amount){
        int i = 0;
        for(; i < counter; i++){
            if(accounts[i].AccountNumber == AccNo){
                accounts[i].substract(amount);
            }
        }
        System.out.println("----- Rs. " + amount + " /- debited -----");
    }
    public void details(int AccNo){
        int i = 0;
        for(; i < counter; i++){
            if(accounts[i].AccountNumber == AccNo){
                accounts[i].AccountDetails();
                break;
            }
        }  
    }
}

class Bank{
    public static void main(String[] args) throws Exception{
        AccountManager accs = new AccountManager(5);

        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));

        
        while(true){
            System.out.println("---- Operations ----");
            System.out.println("1. Create Account");
            System.out.println("2. Delete Account");
            System.out.println("3. Deposit Amount");
            System.out.println("4. Withdraw Amount");
            System.out.println("5. Account Details");
            System.out.println("6. Exit");
    
            System.out.print("Enter your choice = ");
            int choice = Integer.parseInt(bfr.readLine());
            
            switch(choice){
                case 1:
                    System.out.println("Create an Account :-");
                    System.out.print("Enter the name = ");
                    String nameCreate = bfr.readLine();
                    System.out.print("Enter the Balance = ");
                    float balanceCreate = Float.parseFloat(bfr.readLine());

                    accs.create(nameCreate, balanceCreate);
                    break;
                case 2:
                    System.out.println("Delete an Account :-");
                    System.out.print("Enter the Account Number = ");
                    int accNoDelete = Integer.parseInt(bfr.readLine());
                    accs.delete(accNoDelete);
                    break;
                case 3:
                    System.out.println("Deposit in an Account :-");
                    System.out.print("Enter the Account Number = ");
                    int accNoDeposit = Integer.parseInt(bfr.readLine());
                    System.out.print("Enter the Amount = ");
                    float balanceDeposit = Float.parseFloat(bfr.readLine());
                    accs.deposit(accNoDeposit,balanceDeposit);
                    break;
                case 4:
                    System.out.println("Withdraw in an Account :-");
                    System.out.print("Enter the Account Number = ");
                    int accNoWithdraw = Integer.parseInt(bfr.readLine());
                    System.out.print("Enter the Amount = ");
                    float balanceWithdraw = Float.parseFloat(bfr.readLine());
                    accs.withdraw(accNoWithdraw ,balanceWithdraw);
                    break;
                case 5:
                    System.out.println("Details of an Account :-");
                    System.out.print("Enter the Account Number = ");
                    int accNoDetails = Integer.parseInt(bfr.readLine());
                    accs.details(accNoDetails);
                    break;
                case 6 : 
                    System.exit(0);
                default:
                    System.out.println("Wrong Choice !!");
                    break;
            }
        }
    }
}
