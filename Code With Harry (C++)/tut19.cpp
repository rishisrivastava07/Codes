#include<iostream>
using namespace std;
// function overloading.

double add(int a, int b, int c){
    cout<<"\n Using three arguements"<<endl;
    return a+b+c;
}
int add(int a, int b){
    cout<<"\n Using two arguements"<<endl;
    return a+b;
}

double vol(double r, double h){
    return(3.14*r*r*h);
}
double vol(double a){
    return(a*a*a);
}
double vol(double l, double b, double h){
    return(l*b*h);
}
int main()
{
    float l,b,h1,r,h2,a;
    // cout<<"Enter the three numbers :"<<endl;
    // cin>>a>>b>>c;

    // cout<<"The sum of two numbers : "<<add(a,b)<<endl;
    // cout<<"The sum of three numbers : "<<add(a,b,c)<<endl;
    cout<<"Enter the parameters of Rectangle (Length, Breadth, Height) : "<<endl;
    cin>>l>>b>>h1;
    cout<<"Enter the parameters of Cylinder (Radius, Height) : "<<endl;
    cin>>r>>h2;
    cout<<"Enter the parameters of Sqaure (Side) : "<<endl;
    cin>>a;

    cout<<"Volume of Rectangle : length = "<<l<<" breadth = "<<b<<" height = "<<h1<<" is : "<<vol(l,b,h1)<<endl;
    cout<<"Volume of Sqaure : Side = "<<a<<" is : "<<vol(a)<<endl;
    cout<<"Volume of Cylinder : radius = "<<r<<" height = "<<h2<<" is : "<<vol(r,h2)<<endl;
    
    return 0;
}