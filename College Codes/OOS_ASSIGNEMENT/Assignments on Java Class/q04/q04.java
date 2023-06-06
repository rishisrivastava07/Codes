/*
Name: Rishi Srivastava, Roll: 302211001002

Implement a class for stack of integers using an array. Please note that the operations defined
for a stack data structure are as follows: “push”, “pop”, “print”.
There should be a constructor to create an array of integers; the size of the array is provided by
the user.
Write a main() function to (i) create a stack to hold maximum of 30 integers; (ii) push the
numbers 10, 20, 30, 15, 9 to the stack; (iii) print the stack; (iii) pop thrice and (iv) print the stack
again.
*/
class Stack{
	int[] stack;
	int size;
	int top;

	Stack(int size){
		this.size = size;
		stack = new int[size];
		top = -1;
	}
	
	void push(int x){
		if(top >= stack.length){
			System.out.println("Stack Overflow");
			return;
		}

		stack[++top] = x;
	}

	int pop(){
		if(top < 0){
			System.out.println("Stack Underflow");
			return -1;
		}
		return stack[top--];
	}

	void print(){
		System.out.println("Elements present in stack ");
		
		for(int i = top; i >= 0; i --){
			System.out.print(stack[i] + " " );
		}
		System.out.println();
	}

	public static void main(String args[]){
		Stack s1 = new Stack(30);
		s1.push(10);
		s1.push(20);
		s1.push(30);
		s1.push(15);
		s1.push(9);
		
		s1.print();	// 9 15 30 20 10

		s1.pop();
		s1.pop();	
		s1.pop();

		s1.print();	// 20 10
	}
}

