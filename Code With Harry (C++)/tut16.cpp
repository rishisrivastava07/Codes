#include<iostream>
using namespace std;

void swap(int a, int b) //this swap will not change the value in main function
{
    int temp = a;
    a = b;
    b = temp;
}
void swapRefVar(int &a, int &b) //this swap will change the value in main function
{                               //using reference variable
    int temp = a;
    a = b;
    b = temp;
}
void swapPointers(int *a, int *b) //this swap will change the value in main function
{                                 //using pointers reference
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    cout<<"Enter two numbers :";
    cin>>x>>y;

    cout<<"Numbers before swapping : a = "<<x<<" and b = "<<y<<endl;

    swapPointers(&x,&y);

    cout<<"Numbers after swapping : a = "<<x<<" and b = "<<y<<endl;

    return 0;
}