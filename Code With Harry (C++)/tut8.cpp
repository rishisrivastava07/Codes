#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    /*const int a = 34;
    cout<<"The value of a is "<<a<<endl;
    // a = 45;  // This will show an error because a is assigned as a constant.
    cout<<"The value of a after assigning is : "<<a; */

    //Manipulators in CPP......
    /*int a = 3, b=78, c = 1233;

    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value ofc without setw is : "<<c<<endl;

    cout<<"The value of a with setw is : "<<setw(4)<<a<<endl; // took 4 character space
    cout<<"The value of b with setw is : "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is : "<<setw(4)<<c<<endl;*/

    //Operator Precedor.....

    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);

    cout<<c;

    return 0;
}