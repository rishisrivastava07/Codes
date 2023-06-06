#include<iostream>
using namespace std;
int sum(int a, int b); // --> acceptable //Function Prototype declared before main()
// int sum(int, int); // --> acceptable //Function Prototype declared before main()
void g(void);
int main()
{
    int num1, num2;
    cout<<"Enter 1st Number : "<<endl;
    cin>>num1;
    cout<<"Enter 2nd Number : "<<endl;
    cin>>num2;

    cout<<"The sum is : "<<sum(num1,num2); //actual parameters --> num1,num2
    g();
    return 0;
}

int sum(int a, int b) //formal parameters --> a,b
{
    int c = a + b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}