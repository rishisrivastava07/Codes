/*
Name: Rishi Srivastava, Roll: 302211001002

Write a program to implement a class “student” with the following members.
Name of the student.
Marks of the student obtained in three subjects.
Function to assign initial values.
Function to compute total average.
Function to display the student’s name and the total marks.
Write an appropriate main() function to demonstrate the functioning of the above.
*/

class  Student{
	String name;
	int[] marks = new int[3];
	int total_marks;
	
	public void setMarks(int[] m){
		for(int i = 0; i < 3; i++)
			marks[i] = m[i];
	}

	public void setName(String nm){
		name = nm;
	}
	
	public double getTotalAverage(){
		double ans = 0.0;
		for(int i = 0; i < 3; i++){
			ans += marks[i];
		}
		ans = ans / 3.0;
		return ans;
	}
	
	public int tot_marks(){
		for(int i = 0; i < 3; i++){
			total_marks += marks[i];
		}
		return total_marks;
	}

	public void display(){
		System.out.println("Name of Student = " + name);
		System.out.println("Total marks obtained = " + tot_marks() + " out of 300 ");
	}
	
	public static void main(String args[]){
		Student s1 = new Student();
		s1.setName("Rishi");
		
		s1.setMarks(new int[]{99 , 81, 81});
		s1.display();
	}
}

