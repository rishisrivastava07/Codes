#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "The Base Class variable : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "The Base Class variable : " << var_base << endl;
        cout << "The Derived Class variable : " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    DerivedClass *derived_class_pointer;
    
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class
    base_class_pointer->var_base = 34;

    // base_class_pointer->var_derived = 134;  //Will throw an error

    base_class_pointer->display();


    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_derived = 134;
    derived_class_pointer->var_base = 124;

    derived_class_pointer->display();

    return 0;
}
/*
Polymorphism:
“Poly” means several and “morphism” means form. So we can say that
polymorphism is something that has several forms or we can say it as
one name and multiple forms.

//--> 01. Compile Time Polymorphism

In compile-time polymorphism, it is already known which function will run.
Compile-time polymorphism is also called early binding, which means that
you are already bound to the function call and you know that this function
is going to run. There are two types of compile-time polymorphism:

Function Overloading
This is a feature that lets us create more than one function and
the functions have the same names but their parameters need to be
different. If function overloading is done in the program and
function calls are made the compiler already knows that which
functions to execute.

Operator Overloading
This is a feature that lets us define operators working for some
specific tasks. For example, we can overload the operator “+” and
define its functionality to add two strings. Operator loading is
also an example of compile-time polymorphism because the compiler
already knows at the compile time which operator has to perform the task.

//--> 02. Run Time Polymorphism

In the run-time polymorphism, the compiler doesn’t know already what will
 happen at run time. Run time polymorphism is also called late binding.
 The run time polymorphism is considered slow because function calls are
 decided at run time. Run time polymorphism can be achieved from the virtual
 function.

Virtual Function
A function that is in the parent class but redefined in the child class is
called a virtual function. “virtual” keyword is used to declare a virtual function.
*/
/*
Polymorphism in C++ can be of two types:
1. Compile Time Polymorphism -
    - Compile Time Polymorphism in C++ can be achieved by using:
        1.1 Function Overloading
        1.2 Operator Overloading
2. Run Time Polymorphism -
    - Run Time Polymorphism in C++ can be achieved by using:
        2.1 Virtual Functions
*/