#include<iostream>
using namespace std;

// int product(int a, int b)
// {
//     donot use these below lines with inline functions.
//     static int c = 0; // this excutes for only once
//     c =c+1; // next time this function is run, the value of c will be retained.
//     return a*b+c;
// }

// inline int product(int a, int b)
// {
//     return a*b;
// }

float moneyReceived(int currencyMoney, float factor = 1.04) //factor = 1.04 is default arguements.
{   //default arguements should be written at right extreme ends.
    return currencyMoney * factor;
}

int main()
{
    // int a,b;
    // cout<<"Enter the two numbers : "<<endl;
    // cin>>a>>b;

    // cout<<"The Product of the two numbers is : "<<product(a,b)<<endl;
    // cout<<"The Product of the two numbers is : "<<product(a,b)<<endl;
    // cout<<"The Product of the two numbers is : "<<product(a,b)<<endl;
    // cout<<"The Product of the two numbers is : "<<product(a,b)<<endl;

    int money;
    cout<<"Enter the money : ";
    cin>>money;

    cout<<"If you have Rs. "<<money<<" in your bank account, you will receive Rs. "<<moneyReceived(money)<<" after 1 year"<<endl;
    cout<<"For VIP If you have Rs. "<<money<<" in your bank account, you will receive Rs. "<<moneyReceived(money, 1.10)<<" after 1 year"<<endl;
    return 0;
}