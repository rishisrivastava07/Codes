#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When there is no copy constructors is found then compiler supplies its own copy constructors.

    Number(Number &obj) // Copy Constructor 
    {
        cout << "Copy Constructor is called :" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The Number for this object is : " << a << endl;
    }
};
int main()
{
    Number x(2), y, z, z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); // Copy Constructor invoked
    z1.display();

    z2 = x; // Copy Constructor doesnot invoked
    z2.display(); // When we only assign predefined constructor then the Copy Constructor doesnot invoked.

    Number z3 = x; // Copy Constructor invoked
    z3.display();

    return 0;
}