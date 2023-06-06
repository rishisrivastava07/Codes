#include<iostream>
using namespace std;

int main()
{
    /*pointer ---> data type that holds the address
    of other data types*/
    int a=3;
    int* b = &a; 
    
    //' & ' --> (address of) operator, 
    cout<<"The Address of a is : "<<&a<<endl;
    cout<<"The Address of a is : "<<b<<endl;
    
    // ' * '--> (value of) Derefernce Operator
    cout<<"The Value at address b is : "<<*b<<endl;
     
    //Pointer to Pointer
    int** c = &b;
    cout<<"The Address of b is : "<<c<<endl;
    cout<<"The Address of b is : "<<&b<<endl;
    cout<<"The value at address c is : "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;
    
    return 0;
}