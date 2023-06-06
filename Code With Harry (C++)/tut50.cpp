#include<iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int* ptr = &a; 
    // *ptr = 999;

    // * ptr stores the address of the varible a.
    // *ptr ---> ek container hai address store krne ka
    // &a ---> ek address hai variable ka

    cout<<"The value of a is : "<<*(ptr)<<endl;  

    //*(ptr) --> de referencing ptr or address of a.
    // address se value niklne ko de referencing bolte hai
    
    // new keyword

    float* p = new float (20.23); //--> any variables can be used
    cout<<"The value at the address p is : "<<*(p)<<endl;

    int* arr = new int [3];
    arr[0] = 10;
    *(arr+1) = 12;
    arr[2] = 14;

    // delete[] arr;
    
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<*(arr+1)<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    
    return 0;
}