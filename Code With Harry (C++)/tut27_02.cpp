#include <iostream>
using namespace std;

class Complex; // Forward Declaration.

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); // Declaration
    int sumImagComplex(Complex, Complex); // Declaration
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calc ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calc ::sumImagComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire Calculator class as friend.
    friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumbers()
    {
        cout << "The Complex Number : " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2) // definaton of sumRealComplex
{
    return (o1.a + o2.a);
}

int Calculator ::sumImagComplex(Complex o1, Complex o2) // definaton of sumImagComplex
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setData(1, 4);
    o1.printNumbers();

    o2.setData(2, 5);
    o2.printNumbers();

    Calculator calc;
    cout << "The sum of real part of complex number is : " << calc.sumRealComplex(o1, o2) << endl;
    cout << "The sum of imaginery part of complex number is : " << calc.sumImagComplex(o1, o2) << endl;

    return 0;
}