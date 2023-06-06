#include<iostream>
using namespace std;

// int fact(int num)
// {
//     int n =1;
//     while(num>1)
//     {
//         n = n*num;
//         num--;
//     }

//     return n;
// }

// int fact(int num){
//     if(num<=1){
//         return 1;
//     }
//     return num * fact(num - 1);
    
// }
// Step by step function recursion
// fact(4) = 4* fact(3);
// fact(4) = 4 * 3 * fact(2);
// fact(4) = 4 * 3 * 2 * fact(1);
// fact(4) = 4 * 3 * 2 * 1;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib (n-1);
}
int main()
{
    // factorial of a number:
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    // cout<<"The Factorial of a number "<<a<<" is : "<<fact(a);
    cout<<"The term at "<<a<<" position is : "<<fib(a);
    
    return 0;
}