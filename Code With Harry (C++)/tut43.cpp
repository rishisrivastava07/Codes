#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet(); // Resolve Ambiguity in multiple classes
    }
};
class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};
class D : public B
{
    // This new say() method will override Base Class 'B'
public:
    void say()
    {
        cout << "Hello my beautiful world" << endl;
    }
};

int main()
{
    // Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // Derived derivedobj;
    // base1obj.greet();
    // base2obj.greet();
    // derivedobj.greet();

    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}