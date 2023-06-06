#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
            this->a = a; // this pointer is used
            // this is a keyword which is a pointer points to the object which invokes the member function.
            // return *this;
        }
        void getData(){
            cout<<"The value of a is : "<<a<<endl;
        }
}; 
int main()
{
    A a;
    a.setData(4);
    // a.setData(4).getData();
    a.getData();
    return 0;
}