#include<iostream>
using namespace std;

int main()
{
    cout<<"This is Basic Selection Control Structure code"<<endl;
    // if else structure....
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    // if((age<10) && (age>5 )){
    //     cout<<"You are a Cub";
    // }
    // else if((age<18) && (age>10 )){
    //     cout<<"You are a Scout";
    // }
    // else if((age<25) && (age>18 )){
    //     cout<<"You are a Rover";
    // }
    // else if(age>25 ){
    //     cout<<"You are a Service Rover";
    // }
    
    // swtch case structure....
    switch (age)
    {
    case 18: 
    
            cout<<"you are a Senior Scout";
            break;

    case 10: 
    
            cout<<"you are a Senior Sixer";
            break;

    case 25: 
            
            cout<<"you are a Senior Rover";
            break;

    default: 
            
            cout<<"Unspecified input";
            break;

    }
    return 0;
}