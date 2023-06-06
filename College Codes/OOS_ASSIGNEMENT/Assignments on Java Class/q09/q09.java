/*
Name: Rishi Srivastava, Roll: 302211001002

Write a Java class “Employee” containing information name, id, address, salary etc. Write
necessary constructor and read/write methods.
Create a class “Dept” that has a name, location etc. The “Dept” contains a number of
“Employee”. Write methods “add” and “remove” to add and remove an employee to/from this
department.
Write a main() function and create “Information Technology” department. Add five employees
and print yearly expenditure for this department.
*/

import java.io.*;

class Employee{
    private String name;
    protected int id;
    private String address;
    private float salary;
    public static int inr = 1001;

    Employee(){
        name = "no-name";
        id = inr++;
        address = "no-name";
        salary = 0;
    }

    Employee(String name, String address, float sal){
        id = inr++;
        this.name = name;
        this.address = address;
        salary = sal;
    }

    float getSalary(){
        return salary;
    }

    public void EmployeeDetails(){
        System.out.println("---- Employee Details ----");
        System.out.println("Name = " + name);
        System.out.println("ID = " + id);
        System.out.println("Address = " + address);
        System.out.println("Salary = " + salary);
    }
}

class Dept{
    private String deptName;
    private String location;
    private Employee[] emps;
    private int counter;

    Dept(int size, String deptName, String location){
        emps = new Employee[size];
        counter = 0;
        this.deptName= deptName;
        this.location = location;
    }

    public void add(String name, String address, float sal){
        emps[counter++] = new Employee(name, address, sal);
    }

    public void remove(int id){
        for(int i = 0; i < counter; i++){
            if(emps[i].id == id){
                while(i < counter-1){
					emps[i] = emps[i+1];
					i++;
				} 
				counter--;
				break;
            }
        }
    }

    public void details(int idDetails){
        int i = 0;
        for(; i < counter; i++){
            if(emps[i].id == idDetails){
                emps[i].EmployeeDetails();
                break;
            }
        }  
    }

    public int getCounter(){
        return counter;
    }

    public static void main(String[] args) throws Exception{
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter size of Department :");
	    int n = Integer.parseInt(bfr.readLine());
        System.out.print("Enter name of Department :");
	    String deptName = bfr.readLine();
        System.out.print("Enter location of Department :");
	    String location = bfr.readLine();
        
        Dept department = new Dept(n, deptName, location);
        
        while(true){
            System.out.println("---- Operations ----");
            System.out.println("1. Add an Employee in Department");
            System.out.println("2. Remove an Employee in Department");
            System.out.println("3. Print an Employee Detail in Department");
            System.out.println("4. Yearly Expenditure of Employee Detail in Department");
            System.out.println("5. Exit");
            System.out.print("Enter your choice = ");
            int choice  = Integer.parseInt(bfr.readLine());
            switch(choice){
                case 1:
                    System.out.println("Add an Employee in Department");
                    System.out.print("Name = ");
                    String name = bfr.readLine();
                    System.out.print("Address = ");
                    String addr = bfr.readLine();
                    System.out.print("Salary = ");
                    float sal = Float.parseFloat(bfr.readLine());

                    department.add(name, addr, sal);
                    break;
                case 2:
                    System.out.println("Remove an Employee in Department");
                    System.out.print("ID = ");
                    int idDel = Integer.parseInt(bfr.readLine());

                    department.remove(idDel);
                    break;
                case 3:
                    System.out.println("Details of an Employee:-");
                    System.out.print("Enter the ID = ");
                    int idDetails = Integer.parseInt(bfr.readLine());
                    department.details(idDetails);
                    break;
                case 4:
                    System.out.println("Yearly Expenditure");
                    double exp = 0.0;
                    for(int i = 0; i < department.getCounter(); i++){
                        exp = exp + (department.emps[i].getSalary());
                    }
                    System.out.println("Amount = " + exp);
                    break;
                case 5:
                    System.exit(0);
                default:
                    System.out.println("Wrong Choice !!");
            }
        }
    }
}
