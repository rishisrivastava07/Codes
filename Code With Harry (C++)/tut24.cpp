#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // making static is to count the number of objects
                      // otherwise every object have its own count from 0.
                      // Cannot initialise the count here at any number
public:
    void setData(void)
    {
        cout << "\nEnter the id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID : " << id << " of Employee Number : " << count << endl;
    }
    static void getCount(void) //Static Members Functions.
    {
        cout << "The value of count is : " << count << endl;
    }
};
int Employee ::count = 1000; // Default value is Zero
                             // Class Variable
                             // we can initialize the value of count at desire count here
int main()
{
    // Count is the static data members of class Employee
    // rishi.id=1;
    // rishi.count=20; // cannot do this because these are private members.
    Employee rishi, rohan, soham;

    rishi.setData();
    rishi.getData();
    Employee::getCount(); // static member function 
                          // can access other static members only

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    soham.setData();
    soham.getData();
    Employee::getCount();

    return 0;
}