//Sturcture

#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep; // with the help of typedef we can name the struct employee with a nickname.

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
}; // we can use only one at a time in union money.
   // memory is being shared between this 3.

int main()
{
    enum meal{ breakfast, lunch, dinner}; // it will store as a number in this.
    meal m1 = dinner;
    cout<<(m1==2); // it will print false '0'
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union money m1;
    // m1.rice = 34;
    // m1.pounds = 1200;
    // cout<<m1.pounds; 
    // if we try to print rice value it will give garbage value

    // ep rishi;   
    // rishi.eId = 001;
    // rishi.favChar = 'c';
    // rishi.salary = 12000000;

    // cout<<rishi.eId<<endl;
    // cout<<rishi.favChar<<endl;
    // cout<<rishi.salary<<endl;

    return 0;
}