/*
Name : Rishi Srivastava Roll No : 302211001002

Create two threads and call them EvenThread and OddThread. EvenThread will print number
as 2 4 6 8 10... and OddThread will print number as 1 3 5…. Now synchronize these two thread
to get the output as 1 2 3 4 5 6 7 8.
*/

class ThreadingMain{
    public static void main(String[] args)
    {
        Print p = new Print(8);
        Thread thread1 = new Thread(new Runnable() {
            public void run(){
                p.printEvenNumber();
            }
        });
        Thread thread2 = new Thread(new Runnable() {
            public void run(){
                p.printOddNumber();
            }
        });

        thread1.start();
        thread2.start();
    }
}
class Print {
	int counter = 1;
	int N;
    Print(int N){
        this.N = N;
    }
	public void printOddNumber(){
		synchronized (this){
			while (counter < N) {
				while (counter % 2 == 0) {
					try {
						wait();
					}
					catch (
						InterruptedException e) {
						e.printStackTrace();
					}
				}
				System.out.print(counter + " ");
				counter++;
				notify();
			}
		}
	}
    
	public void printEvenNumber()
	{
		synchronized (this)
		{
			while (counter < N) {
				while (counter % 2 == 1) {
					try {
						wait();
					}
					catch (
						InterruptedException e) {
						e.printStackTrace();
					}
                }
				System.out.print(
					counter + " ");
				counter++;
				notify();
			}
		}
	}
}
