#include <iostream>
using namespace std;

// Syntax of Multiple Inheritence
// class Derived: visibility_mode base1, visibilty_mode base2
// {
//      Class body of class " Derived "
// };
class Base01
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base02
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base01, public Base02
{
public:
    void set_show()
    {
        cout << "The Value of Base 01 is : " << base1int<<endl;
        cout << "The Value of Base 02 is : " << base2int<<endl;
        cout << "The Value of Base 01 + Base 02 is : " << base1int + base2int<<endl;
    }
};

/*
The inherited derived class will be looking like this:
Data Members:
    base1int ----> protected
    base2int ----> protected
Member Functions :
    set_base1int() ----> public
    set_base2int() ----> public
    set_show() ----> public
*/
int main()
{
    Derived rishi;
    rishi.set_base1int (20);
    rishi.set_base2int (10);
    rishi.set_show();
    return 0;
}