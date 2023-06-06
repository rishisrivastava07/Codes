/*
Name: Rishi Srivastava, Roll: 302211001002

Write a class to represent complex numbers with necessary constructors. Write member
functions to add, multiply two complex numbers.
There should be three constructors: (i) to initialize real and imaginary parts to 0; (ii) to initialize
imaginary part to 0 but to initialize the real part to user defined value; (iii) to initialize the real
part and the imaginary part to user defined values.
Also, write a main() function to (i) create two complex numbers 3+2i and 4-2i; (ii) to print the
sum and product of those numbers.
*/

class Complex{
    private float real;
    private float imaginary;

    Complex(){
        real = 0;
        imaginary = 0;
    }
    Complex(float real){
        this.real = real;
        imaginary = 0;
    }
    Complex(float real, float imag){
        this.real = real;
        imaginary = imag;
    }

    protected Complex add(Complex c){
        Complex t = new Complex();
        t.real = real + c.real;
        t.imaginary = imaginary + c.imaginary;
        return t;
    }
    protected Complex multiply(Complex c){
        Complex t = new Complex();
        t.real = ((real * c.imaginary) - (imaginary * c.real));
        t.imaginary = ((real * c.real) + (imaginary * c.imaginary));
        return t;
    }

    protected void display(){
        if(imaginary >= 0){
            System.out.println("Complex Number = ( " + real + " + i " + imaginary + " )");
        }
        else{
            System.out.println("Complex Number = ( " + real + " - i " + (imaginary * (-1)) + " )");
        }
    }
    public static void main(String[] args) {
        Complex c1 = new Complex(3, 2);
        Complex c2 = new Complex(4, -2);

        c1.display();
        c2.display();

        Complex c3 = new Complex();
        c3 = c1.add(c2);
        c3.display();
        
        Complex c4 = new Complex();
        c4 = c1.multiply(c2);
        c4.display();
    }
}
