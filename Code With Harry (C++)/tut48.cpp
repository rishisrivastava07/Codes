#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class Base1
{
    int data1;

public:
    Base1(int i1)
    {
        data1 = i1;
        cout << "Base1 class constructor is called. " << endl;
    }
    void printDatab1()
    {
        cout << "The value of data 1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i2)
    {
        data2 = i2;
        cout << "Base2 class constructor is called. " << endl;
    }
    void printDatab2()
    {
        cout << "The value of data 2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d):Base1(a), Base2(b)
        {
            derived1 = c;
            derived2 = d;
            cout << "Derived Class Constructor is called" << endl;
        }
        void printDatad()
        {
            printDatab1();
            printDatab2();

            cout << "The value of derived1 is : " << derived1 << endl;
            cout << "The value of derived2 is : " << derived2 << endl;
        }
};

int main()
{
    Derived obj(1, 2, 3, 4);
    // obj.printDatab1();
    // obj.printDatab2();
    obj.printDatad();
    return 0;
}