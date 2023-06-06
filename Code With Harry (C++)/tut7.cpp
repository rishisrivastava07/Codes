#include<iostream>

using namespace std;
int c = 45; // global varibale declaration.
int main()
{
    //Built Data types
    // int a, b, c;
    // cout<<"\n Enter a 1st number : ";
    // cin>>a;
    // cout<<"\n Enter a 2nd number : ";
    // cin>>b;

    // c= a+b;

    // cout<<"\n The sum is : "<<c;
    // cout<<"\n The global c is : "<<::c; // we use scope resolution "::" to print global value.
    
    // Literals.....
    // float d = 34.4F;
    // long double e = 34.4L;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //Reference Variables......

    float x =455;
    float & y = x;

    cout<<x<<endl;
    cout<<y<<endl;
    
    //Typecasting......

    // int a = 45;
    // float b = 45.45;

    // cout<<"The value of a is : "<<float(a)<<endl;
    // cout<<"The value of a is : "<<(float)a<<endl;

    // cout<<"The value of b is : "<<int(b)<<endl;
    // cout<<"The value of b is : "<<(int)b<<endl; 

    // cout<<"The expression is "<<a+b<<endl;
    // cout<<"The expression is "<<a+int(b)<<endl;
    // cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
 
}