/*
Name : Rishi Srivastava Roll No : 302211001002

Create a base class “Automobile”. An Automobile contains data members ‘make’, ‘type’,
‘maxSpeed’, ‘price’, ‘mileage’, ‘registrationNumber’ etc. with their reader/writer methods. Now
create two sub-classes “Track” and “Car”. Track has data members ‘capacity’, ‘hoodType’,
‘noOfWheels’ etc. Car has data members ‘noOfDoors’, ‘seatingCapacity’ and their reader/writer
methods. Create a main() function to demonstrate this.
*/

import java.io.*;

class Automobile{
    private String make, type;
    private int maxspeed;
    private double price;
    private int mileage;
    private long registrationNumber;

    Automobile(){
        make = "default-maker";
        type = "default-type";
        maxspeed = 0;
        price = 0.0;
        mileage = 0;
        registrationNumber = 0;
    }
    Automobile(String mk, String type, int speed, double price, int mlge, long regNo){
        make = mk;
        this.type = type;
        maxspeed = speed;
        this.price = price;
        mileage = mlge;
        registrationNumber = regNo;
    }
    void Automobile_Details(){
        System.out.println("Automobile_Details :- ");
        System.out.println("Manufacturer = " + make);
        System.out.println("Type = " + type);
        System.out.println("Maximum Speed (in Kmph) = " + maxspeed);
        System.out.println("Price (on-road) = " + price);
        System.out.println("Mileage = " + mileage);
        System.out.println("Registration Number = " + registrationNumber);
        System.out.println();
    }
}

class Track extends Automobile{
    private long capacity;
    private String hoodType;
    private int noOfWheels;

    Track(){
        
    }

    Track(String mk, String type, int speed, double price, int mlge, long regNo, long cap, String hoodType, int now){
        super(mk,type,speed,price,mlge,regNo);
        capacity = cap;
        this.hoodType = hoodType;
        noOfWheels = now;
    }
    void Automobile_Details(){
        System.out.println("Truck Details :-");
        super.Automobile_Details();
        System.out.println("Capacity = " + capacity);
        System.out.println("Hood Type = " + hoodType);
        System.out.println("No of wheels = " + noOfWheels);
        System.out.println();
    }

}
class Car extends Automobile{
    private int seatingCapacity;
    private int noOfDoors;

    Car(){
        
    }

    Car(String mk, String type, int speed, double price, int mlge, long regNo, int seatsCap, int nod){
        super(mk,type,speed,price,mlge,regNo);
        seatingCapacity = seatsCap;
        noOfDoors = nod;
    }

    void Automobile_Details(){
        System.out.println("Car Details :- ");
        super.Automobile_Details();
        System.out.println("Seating Capacity = " + seatingCapacity);
        System.out.println("No of Doors " + noOfDoors);
        System.out.println();
    }
}

class Main{
    public static void main(String[] args) throws Exception {
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));

        Track[] tracks = new Track[2];
        Car[] cars = new Car[3];

        System.out.println("Enter the details of Truck :- ");
        for(int i = 0; i < 2; i++){
            System.out.println("Enter details of Truck " + (i+1) + " :- ");
            System.out.print("Manufacturer Name = ");
            String maker = bfr.readLine();
            System.out.print("Type of Truck = ");
            String type = bfr.readLine();
            System.out.print("Maximum Speed = ");
            int speed = Integer.parseInt(bfr.readLine());
            System.out.print("Price = ");
            double price = Double.parseDouble(bfr.readLine());
            System.out.print("Mileage = ");
            int mileage = Integer.parseInt(bfr.readLine());
            System.out.print("Registration Number = ");
            long regNo = Long.parseLong(bfr.readLine());
            System.out.print("Capacity = ");
            long capacity = Long.parseLong(bfr.readLine());
            System.out.print("Hood type = ");
            String hoodType = bfr.readLine();
            System.out.print("No of Wheels = ");
            int now = Integer.parseInt(bfr.readLine());

            tracks[i] = new Track(maker, type, speed, price, mileage, regNo, capacity, hoodType, now);
        }

        System.out.println("Enter the details of Cars :- ");
        for(int i = 0; i < 3; i++){
            System.out.println("Enter details of Cars " + (i+1) + " :- ");
            System.out.print("Manufacturer Name = ");
            String maker = bfr.readLine();
            System.out.print("Type of Car = ");
            String type = bfr.readLine();
            System.out.print("Maximum Speed = ");
            int speed = Integer.parseInt(bfr.readLine());
            System.out.print("Price = ");
            double price = Double.parseDouble(bfr.readLine());
            System.out.print("Mileage = ");
            int mileage = Integer.parseInt(bfr.readLine());
            System.out.print("Registration Number = ");
            long regNo = Long.parseLong(bfr.readLine());
            System.out.print("Seating Capacity = ");
            int seatCap = Integer.parseInt(bfr.readLine());
            System.out.print("No of Doors = ");
            int nod = Integer.parseInt(bfr.readLine());

            cars[i] = new Car(maker, type, speed, price, mileage, regNo, seatCap, nod);
        }

        System.out.println();
        System.out.println("------------Cars Details -------------");
        for (int i = 0; i < cars.length; i++) {
            cars[i].Automobile_Details();
        }

        System.out.println();
        System.out.println("------------Trucks Details -------------");
        for (int i = 0; i < tracks.length; i++) {
            tracks[i].Automobile_Details();
        }
    }
}
