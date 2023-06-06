/*
Name : Rishi Srivastava Roll No : 302211001002

Imagine a toll booth and a bridge. Cars passing by the booth are expected to pay an amount
of Rs. 50/- as toll tax. Mostly they do but sometimes a car goes by without paying. The toll booth
keeps track of the number of the cars that have passed without paying, total number of cars
passed by, and the total amount of money collected. Execute this with a class called “Tollbooth”
and print out the result as follows:
The total number of cars passed by without paying.
Total number of cars passed by.
Total cash collected.
*/

import java.io.*;

class TollBooth{
    int totalNoOfCars;
	int noOfCars;
	int unpaidTaxes;
	double revenueGenerated,paidTax;
	
	TollBooth(double tax){
		paidTax = tax;
		noOfCars = 0;
		unpaidTaxes = 0;
		revenueGenerated = 0;
	}

	void passBridge(boolean payTax){
        totalNoOfCars++;
		if(payTax){
			revenueGenerated += paidTax;
			noOfCars++;
		}
        else{
            unpaidTaxes++;
            
        } 
	}

	void disp(){
		System.out.println("Total No of Cars Passed : " + totalNoOfCars);
		System.out.println("Total No of Cars Passed (paying taxes) : " + noOfCars);
		System.out.println("Total No of Cars Passed (without paying taxes) : " + unpaidTaxes);
		System.out.println("Total Revenue Generated : " + revenueGenerated);
	}
}

class Main{
    public static void main(String args[]) throws Exception{

        TollBooth tb = new TollBooth(50);

        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));

        while(true){
            System.out.println("1. Pay tax : ");
            System.out.println("2. Not Pay tax  : ");
            System.out.println("3. Details : ");
            System.out.println("4. Exit : ");
            System.out.print("Enter your choice : ");
            int choice = Integer.parseInt(bfr.readLine());
            switch(choice){
            case 1:
                tb.passBridge(true);
                break;
            case 2: 
                tb.passBridge(false);
                break;	
            case 3:
                tb.disp();
                break;
            case 4:
                System.exit(1);	
            default:
                System.out.println("Invalid choice");
            }
        }
    }
}

