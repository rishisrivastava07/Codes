#include <iostream>
using namespace std;

class Base
{
protected: // can be inherited to derived class
    int a;

private:
    int b;
};
/* 
For a protected member:
                        Public Derivation   Private Derivation    Protected Derivation
Private members           Not Inherited        Not Inherited          Not Inherited
Protected members           Protected          	 Private                Protected
Public members               Public	             Private                Protected
*/

class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // will  not work because A is protected in both Base and Derived Class.
    return 0;
}