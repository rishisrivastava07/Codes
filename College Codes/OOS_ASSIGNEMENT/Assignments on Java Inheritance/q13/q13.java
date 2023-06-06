/*
Name : Rishi Srivastava Roll No : 302211001002

Implement a class for a “Person”. Person has data members ‘age’, ’weight’, ‘height’,
‘dateOfBirth’, ‘address’ with proper reader/write methods etc. Now create two subclasses
“Employee” and “Student”. Employee will have additional data member ‘salary’,
‘dateOfJoining’, ‘experience’ etc. Student has data members ‘roll’, ‘listOfSubjects’, their marks
and methods ‘calculateGrade’. Again create two sub-classes “Technician” and “Professor” from
Employee. Professor has data members ‘courses’, ‘listOfAdvisee’ and their add/remove
methods. Write a main() function to demonstrate the creation of objects of different classes and
their method calls.
*/

import java.io.*;

class Person {
    private int age;
    private float weight;
    private float height;
    private int[] dateOfBirth = new int[3];
    private String address;

    Person(){
        age = 0;
        weight = 0;
        height = 0;
        dateOfBirth[0] = 01;
        dateOfBirth[1] = 01;
        dateOfBirth[2] = 1970;
        address = "no-address";
    }

    Person(int age, float weight, float height, int[] dob, String addr){
        this.age = age;
        this.weight = weight;
        this.height = height;

        for(int i = 0; i < 3; i++){
            dateOfBirth[i] = dob[i];
        }

        address = addr;
    }
    void display_details(){
        System.out.println("Person details :-");
        System.out.println("Age = " + age);
        System.out.println("Weight = " + weight);
        System.out.println("Height = " + height);
        System.out.print("Date of Birth = ");
        for(int i = 0; i < 3; i++){
            if(i <= 1){
                System.out.print(dateOfBirth[i] + "/");
            }
            else{
                System.out.println(dateOfBirth[i]);
            }
        }
        System.out.println("Address = " + address);
    }
}

class Employee extends Person{
    private double salary;
    private int[] dateOfJoining = new int[3];
    private String experience;

    Employee(){
        
    }

    Employee(int age, float weight, float height, int[] dob, String addr, double salary,int[] doj, String exp){
        super(age,weight,height,dob,addr);
        this.salary = salary;
        for(int i = 0; i < 3; i++){
            dateOfJoining[i] = doj[i];
        }
        experience = exp;
    }
    public void display_details(){
        super.display_details();
        System.out.println("Person (Employee) :-");
        System.out.println("Salary = " + salary);
        System.out.print("Date of Joining = ");
        for(int i = 0; i < 3; i++){
            if(i <= 1){
                System.out.print(dateOfJoining[i] + "/");
            }
            else{
                System.out.println(dateOfJoining[i]);
            }
        }
        System.out.println("Experience = " + experience);
    }
}

class Student extends Person{
    private int roll;
    private String[] listOfSubjects;
    private int[] marks;
    private int losLength, mLength;

    Student(){
        
    }

    Student(int age, float weight, float height, int[] dob, String addr, int roll, String[] los, int[] m){
        super(age,weight,height,dob,addr);
        this.roll = roll;
        losLength = los.length;
        mLength = m.length;
        listOfSubjects = new String[losLength];
        marks = new int[mLength];
        for(int i = 0; i < losLength; i++){
            listOfSubjects[i] = los[i];
        }
        for(int i = 0; i < mLength; i++){
            marks[i] = m[i];
        }
    }

    String calculateGradeCard(){
        float final_marks = 0;
        for(int i = 0; i < mLength; i++){
            final_marks += marks[i];
        }

        final_marks /= mLength;

        if(final_marks > 90){
            return "A+";
        }
        else if(final_marks > 80 && final_marks <= 90){
            return "A";
        }
        else if(final_marks > 70 && final_marks <= 80){
            return "B+";
        }
        else if(final_marks > 60 && final_marks <= 70){
            return "B";
        }
        else if(final_marks > 50 && final_marks <= 60){
            return "C";
        }
        else{
            return "D";
        }
    }

    public void display_details(){
        super.display_details();
        System.out.println("Person (Student) :-");
        System.out.println("Roll no = " + roll);
        System.out.print("List of Subjects = ");
        for(int i = 0; i < losLength; i++){
            if(i == (losLength-1)){
                System.out.println(listOfSubjects[i]);
            }
            else{
                System.out.print(listOfSubjects[i] + ", ");
            }
        }
        System.out.println("Grade obtained = " + calculateGradeCard());
    }
}

class Technician extends Employee{

    Technician(){
        
        
    }
    Technician(int age, float weight, float height, int[] dob, String addr, double salary,int[] doj, String exp){
        super(age,weight,height,dob,addr,salary,doj,exp);
    }

    public void display_details(){
        super.display_details();
        System.out.println("Person (Employee (Technician)) :-");
        System.out.println("No details of Technician");

    }
}
class Professor extends Employee{
    String[] courses;
    String[] listofAdvisee;

    Professor(){
        
        
    }
    Professor(int age, float weight, float height, int[] dob, String addr, double salary,int[] doj, String exp, String[] cour, String[] loa){
        super(age,weight,height,dob,addr,salary,doj,exp);
        courses = new String[cour.length];
        listofAdvisee = new String[loa.length];

        for(int i = 0; i < cour.length; i++){
            courses[i] = cour[i];
        }
        for(int i = 0; i < loa.length; i++){
            listofAdvisee[i] = loa[i];
        }
    }

    public void display_details(){
        super.display_details();
        System.out.println("Person (Employee (Professor)) :-");
        System.out.print("List of Courses = ");
        for(int i = 0; i < courses.length; i++){
            if(i == (courses.length-1)){
                System.out.println(courses[i]);
            }
            else{
                System.out.print(courses[i] + ", ");
            }
        }
        System.out.print("List of Advisees = ");
        for(int i = 0; i < listofAdvisee.length; i++){
            if(i == (listofAdvisee.length-1)){
                System.out.println(listofAdvisee[i]);
            }
            else{
                System.out.print(listofAdvisee[i] + ", ");
            }
        }
    }
}

class Main{
    public static void main(String[] args) throws Exception {
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
        int[] dob = new int[3];
        int[] doj = new int[3];
        String[] los = {"Graph Theory and Combinatorics","Object Oriented Systems","Mathematics - II","Graphics and Geometric Modelling","Software Engineering", "Computer Networks"};
        int[] marks = new int[los.length];
        String[] cour = {"BE", "ME","Bsc","BA","MSc","MA","Phd"};
        String[] loa = {"Munmun Bhattacharya", "Somenath Dhibar", "Rohini Basak", "Utpal Kumar Roy", "Uttam Kumar Roy", "Bhaskar Sardar","Bibhas Chandra Dhara","Tohida Rehman"};

        System.out.println("Enter the details of Person :-");
        System.out.print("Age (in yrs) = ");
        int age = Integer.parseInt(bfr.readLine());
        System.out.print("Weight (in kgs) = ");
        float weight = Float.parseFloat(bfr.readLine());
        System.out.print("Height (in mts) = ");
        float height = Float.parseFloat(bfr.readLine());
        System.out.print("Date of Birth (DD/MM/YYYY) = ");
        for(int i = 0; i < 3; i++){
            dob[i] = Integer.parseInt(bfr.readLine());
        }
        System.out.print("Address = ");
        String addr = bfr.readLine();

        System.out.println("Enter the details of Person (Employee) :-");
        System.out.print("Salary (monthly) = ");
        double salary = Double.parseDouble(bfr.readLine());
        System.out.print("Date of Joining (DD/MM/YYYY) = ");
        for(int i = 0; i < 3; i++){
            doj[i] = Integer.parseInt(bfr.readLine());
        }
        System.out.print("Experience (in months)= ");
        String exp = bfr.readLine();



        System.out.println("Enter the details of Person (Student) :-");
        System.out.print("Roll no = ");
        int roll = Integer.parseInt(bfr.readLine());
        System.out.println("Enter your marks = ");
        for(int i = 0; i < los.length; i++){
            System.out.print("Enter your marks of subject " + (i+1) + " = ");
            marks[i] = Integer.parseInt(bfr.readLine());
        }

        Professor p = new Professor(age, weight, height, dob, addr, salary, doj, exp, cour, loa);
        Student s = new Student(age, weight, height, dob, addr, roll, los, marks);

        p.display_details();
        System.out.println();
        s.display_details();
    }
}

