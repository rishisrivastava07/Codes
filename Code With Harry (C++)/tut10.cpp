#include<iostream>
using namespace std;

int main()
{
    /*Loops in C++
    There are 3 types of loops in C++
    1. For Loop
    2. while Loop
    3. do-while Loop
    */

    // For loop in C++
    /*
    for(initialization;condition;updation)
    {
            loop body (C++ Code)
    }
    */
    //for (int i = 1; i <= 100; i++)
    //{
    //     cout<<i<<endl;
    //}

    // While loop in C++
    /*
    while(condition)
    {
            C++ Statements;
    }
    */
    //int i = 1;
    //while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    //}
     /*
    do{
            C++ Statements;
    }while(condition);
    */
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);

    return 0;
}