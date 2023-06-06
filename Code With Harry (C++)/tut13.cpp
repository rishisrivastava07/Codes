// Program on array.
// Class on ARray and pointers.

#include<iostream> 
using namespace std;

int main()
{
    //Array Example.
    int marks[] = {45, 56, 64, 35};

    int mathsMarks[4];
    mathsMarks[0] = 23;
    mathsMarks[1] = 57;
    mathsMarks[2] = 87;
    mathsMarks[3] = 90;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //You can change the value of an Array.
    mathsMarks[2]=67;
    // cout<<"These are maths marks"<<endl;
    // cout<<mathsMarks[0]<<endl;
    // cout<<mathsMarks[1]<<endl;
    // cout<<mathsMarks[2]<<endl;
    // cout<<mathsMarks[3]<<endl;

    // Using For Loop

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    // }

    // Using While Loop

    // int i = 0;
    // while(i<4)
    // {
    //     cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // Using Do While Loop

    // do{
    //     cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }while(i<4);

    int *p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}