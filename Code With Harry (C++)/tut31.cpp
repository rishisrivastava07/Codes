#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Constructor Overloading
    Complex(int x, int y) // Parametrized Constructors
    {
        a = x;
        b = y;
    }

    Complex(int x) // Parametrized Constructors
    {
        a = x;
        b = 0; // default value
    }
    Complex() // Default Constructors
    {
        a = 0; // default value
        b = 0; // default value
    }
    void printNumber()
    {
        cout << "The Point is : " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();
    Complex c2(4);
    c2.printNumber();
    Complex c3;
    c3.printNumber();

    return 0;
}