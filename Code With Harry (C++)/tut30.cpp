#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) //---> Parameterized Constructors
{
    a = x;
    b = y;
}
int main()
{
    // Implicit Call
    Complex a(3,4);
    a.printNumber();

    // Explicit Call
    Complex b = Complex(5,7);
    b.printNumber();

    return 0;
}