#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter ID of Employee : ";
        cin >> id;
    }
    void getid(void)
    {
        cout << "The ID of Employee is : " << id << endl;
    }
};

int main()
{
    // Employee rishi,suman,anjali;
    // rishi.setid();
    // rishi.getid();
    int n;
    cout<<"Enter the number of employees you want to enter detials : ";
    cin>>n;
    Employee fb[n];
    for (int i = 0; i < n; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}