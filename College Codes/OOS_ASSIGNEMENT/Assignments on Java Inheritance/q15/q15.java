/*
Name : Rishi Srivastava Roll No : 302211001002

Implement the classes for the following inheritance hierarchies.
Create an interface “Shape” that contains methods ‘area’, ‘draw’, ‘rotate’, ‘move’ etc. Now
create two classes “Circle” and “Rectangle” that implement this ‘Shape’ interface and implement
the methods ‘area’, ‘move’, etc. Write a main() function to create two “Circle” and three
“Rectangle”,then move them. Print the details of circles and rectangles before after moving them.
*/

import java.io.*;

abstract class Shape{
    abstract double area();
    abstract void draw();
    abstract void rotate(double deg);
    abstract void move(int a, int b); 
}

class Circle extends Shape{
    private float radius;
    private int x,y;

    Circle(){
        x = 0;
        y = 0;
        radius = 0;
    }
    Circle(float r, int a, int b){
        radius = r;
        x = a;
        y = b;
    }

    public double area(){
        return (Math.PI * radius * radius);
    }
    public void move(int a, int b){
        x += a;
        y += b;
        this.draw();
    }
    public void draw(){
        System.out.println("Centre at : (" + x + "," + y + ")");
    }
    public void rotate(double degree){
        double rad = Math.toRadians(degree);
        x = (int) (x*Math.cos(rad)+y*Math.sin(rad));
        y = (int) (-x*Math.sin(rad)+y*Math.cos(rad));
        this.draw();
    }
}
class Rectangle extends Shape{
    private float length, breadth;
    private int x,y;
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    Rectangle(float len, float bre, int a, int b){
        length = len;
        breadth = bre;
        x = a;
        y = b;
    }

    public double area(){
        return (length * breadth);
    }
    public void move(int a, int b){
        x += a;
        y += b;
        this.draw();
    }
    public void draw(){
        System.out.println("Centre at : (" + x + "," + y + ")");
    }
    public void rotate(double degree){
        double rad = Math.toRadians(degree);
        x = (int) (x*Math.cos(rad)+y*Math.sin(rad));
        y = (int) (-x*Math.sin(rad)+y*Math.cos(rad));
        this.draw();
    }
}

class Main{
    public static void main(String args[]) throws Exception{
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
        Circle[] cir = new Circle[2];
        Rectangle[] rec = new Rectangle[3];

        System.out.println("-----Circle-----");
        for(int i = 0; i < cir.length; i++){
            System.out.print("Enter the radius of circle = ");
            int r = Integer.parseInt(bfr.readLine());
            System.out.print("Enter the x - coordinate of circle = ");
            int x = Integer.parseInt(bfr.readLine());
            System.out.print("Enter the y - coordinate of circle = ");
            int y = Integer.parseInt(bfr.readLine());
            cir[i] = new Circle(r,x,y);
        }

        System.out.println("-----Rectangle-----");
        for(int i = 0; i < rec.length; i++){
            System.out.print("Enter the length of rectangle = ");
            int l = Integer.parseInt(bfr.readLine());
            System.out.print("Enter the breadth of rectangle = ");
            int b = Integer.parseInt(bfr.readLine());
            System.out.print("Enter the x - coordinate of circle = ");
            int x = Integer.parseInt(bfr.readLine());
            System.out.print("Enter the y - coordinate of circle = ");
            int y = Integer.parseInt(bfr.readLine());
            rec[i] = new Rectangle(l,b,x,y);
        }      

        cir[0].draw();
        System.out.println("Moving this circle at Point (10,20)"); 
        cir[0].move(10,20);
    
        rec[1].draw();
        System.out.println("Moving this circle at Point (10,6)");     
        rec[1].move(10,6);       
    }
} 
