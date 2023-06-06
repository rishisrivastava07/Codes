#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.
public:
    Complex(void); // Constuctors Declaration.
    void printNumbers()
    {
        cout << "The Complex Number : " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // Defination of Constructors
{                       // Default Constructors
    a = 0;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumbers();
    return 0;
}

// Characteristics of Constructors.
// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address