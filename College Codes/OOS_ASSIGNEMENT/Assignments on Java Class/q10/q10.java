/*
Name: Rishi Srivastava, Roll: 302211001002

Implement a class for a “Student”. Information about a student includes name, roll no and an
array of five subject names. The class should have suitable constructor and get/set methods.
Implement a class “TabulationSheet”. A tabulation sheet contains roll numbers and marks of
each student for a particular subject. This class should have a method for adding the marks and
roll no of a student.
Implement a class “MarkSheet”. A mark sheet contains marks of all subjects for a particular
student. This class should have a method to add name of a student and marks in each subject.
Write a main() function to create three “Student” objects, Five “Tabulationsheet” objects for Five
subjects and three “Marksheet” object for three students. Print the mark sheets.
*/
import java.io.*;

class Student{
    protected String name;
    protected int rollNo;
    private int[] marks = new int[5];
    protected int totalMarks;

    Student(){
        name = "no-name";
        rollNo = 0;
        for (int i = 0; i < 5; i++) {
            marks[i] = 0;
            totalMarks += marks[i];
        }
    }

    Student(String n, int roll, int[] m){
        name = n;
        rollNo = roll;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
            totalMarks += marks[i];
        }
    }

    public void StudentDetails(){
        System.out.println("---- Student Details ----");
        System.out.println("Name = " + name);
        System.out.println("Roll No = " + rollNo);
        System.out.println("Total Marks = " + totalMarks);
    }
}

class TabulationSheet{
   int roll[];
   String subName;
   float marks[];

   TabulationSheet(){
      subName = "noSubject";
      roll = new int[1];
      marks = new float[1];
   }

   TabulationSheet(String n,int r[],float m[]){
      subName = n;
      roll = r;
      marks = m;
   }
   
   void addTab(int r, float m){
      int ne[] = new int[roll.length + 1]; 
  
        for (int i = 0; i < roll.length; i++) 
            ne[i] = roll[i]; 
  
        ne[roll.length] = r; 
  
      roll = ne;
        
      float nm[] = new float[marks.length + 1]; 
  
        for (int i = 0; i < marks.length; i++) 
            nm[i] = roll[i]; 
  
        nm[marks.length] = m; 
  
      marks = nm;
   }
}
class MarkSheet{

    Student student;
    float marks[] = new float[5];

    MarkSheet(){
        student = new Student();
    }

    MarkSheet(Student student,float m[]){
        this.student = student;
        for(int i = 0; i < m.length; i++){
            marks[i] = m[i];
        }
    }

    void printDetails(){
        student.StudentDetails();
        for(int i = 0; i < marks.length; i++)
        {
            System.out.println("Marks " + (i+1) + " : " + marks[i]);
        }
        System.out.println();
    }
        
    void addMarks(String name, float m[])
    {
        student.name = name;
        for(int i = 0; i < m.length; i++){
            marks[i] = m[i];
        }
    }

    public static void main(String[] args) throws Exception{
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
        Student student[] = new Student[3];
        int[] marks = new int[5];
        
        System.out.println("Student Details :-");
        for(int i = 0; i < 3; i++){
            System.out.print("Enter the Name = ");
            String name = bfr.readLine();
            System.out.print("Enter the Roll No = ");
            int roll= Integer.parseInt(bfr.readLine());
            System.out.println("Enter your marks :- ");
            for(int j = 0; j < 5; j++){
                System.out.print("Enter the marks of Subject " + (j+1) + " = ");
                marks[i] = Integer.parseInt(bfr.readLine());
            }
            student[i] = new Student(name,roll,marks);
        }
        
        TabulationSheet tsheet[] = new TabulationSheet[5];
        int[] rolls;
        int marks1[] = new int[5];
        
        System.out.println("Tabulation Sheet Details :-");
        for(int i = 0; i < 5; i++)
        {
            System.out.print("Enter the Subject Name = ");
            String subName = bfr.readLine();
            System.out.println("Enter no of rollno :- ");
            int noRollNos = Integer.parseInt(bfr.readLine());
            rolls = new int[noRollNos];
            
            for(int j = 0; j < noRollNos; j++){
                System.out.print("Enter the roll of Student " + (j+1) + " = ");
                rolls[i] = Integer.parseInt(bfr.readLine());
            }
            
            System.out.println("Enter your marks :- ");
            for(int j = 0; j < 5; j++){
                System.out.print("Enter the marks of Subject " + (j+1) + " = ");
                marks1[i] = Integer.parseInt(bfr.readLine());
            }
            tsheet[i] = new TabulationSheet(subName, marks1, null);
        }

        MarkSheet msheet[] = new MarkSheet[3];
        float marks2[] = new float[5];
        
        System.out.println("Marksheet Details :-");
        for(int i = 0; i < 3; i++){
            System.out.println("Enter no of Marks in Sheet :- ");
            int noOfMarks = Integer.parseInt(bfr.readLine());
            marks2 = new float[noOfMarks];
            
            for(int j = 0; j < noOfMarks; j++){
                System.out.print("Enter the marks of Student " + (j+1) + " = ");
                marks2[i] = Float.parseFloat(bfr.readLine());
            }
            msheet[i] = new MarkSheet(student[i], marks2);
            msheet[i].printDetails();
        }
    }
}
