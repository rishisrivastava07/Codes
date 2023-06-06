#include <iostream>
using namespace std;

// Base class
class Employee
{
    // string name[20];
public:
    int ID;
    float salary;
    Employee() {}
    Employee(int a)
    {
        ID = a;
        salary = 50.0;
        cout << "ID: " << ID << endl;
    }
};
/*
Derived class
Syntax :

class {{Derived-class name}} : {{visibility-mode}} {{Base-class-name}}
Note:
1. Default Visibility mode is Private
2. Private Visibility Mode --> Public Members of the base class become the private members of derived class
3. Public Visibility Mode --> Public Members of the base class become the public members of derived class
4. Private members are never inherited.
*/

class Programmer : public Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        ID = inpId;
    }
    void getData(){
        cout<<"ID is : "<<ID<<endl;
    }
};

int main()
{
    Employee e1(1);
    cout << e1.salary << endl;
    Employee e2(2);
    cout << e2.salary << endl;

    Programmer skillF(10);
    skillF.getData();
    cout<<skillF.ID<<endl;
    cout<<skillF.languageCode<<endl;

    return 0;
}