#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        // {
        //         a=a1;
        //         b=b1;
        //         c=c1;
        // }; 
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main()
{
    Employee rishi;
    // rishi.a = 123; // Shows error because of a is private
    rishi.d = 34;
    rishi.e = 45;
    rishi.setData(1,2,4); // a,b,c can be accessed through the function of that class.
    rishi.getData();

    return 0;
}