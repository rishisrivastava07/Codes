/*
Name : Rishi Srivastava Roll No : 302211001002

Write a program to create two threads. Print “In main thread” in main thread and “In child
thread” in child thread.
*/

class Child extends Thread {
	public void run() {
		System.out.println("In Child Thread");
	}
}

class Threading {
	public static void main(String []args){
		Thread thread1 = Thread.currentThread();
		System.out.println("Name = "+ thread1.getName());
		System.out.println("In Main thread");
		Thread thread2 = new Thread(){
			public void run() {
				System.out.println("In Child Thread");
			}
		};
		System.out.println("Name = "+ thread2.getName());
		thread2.start();
	}
}
