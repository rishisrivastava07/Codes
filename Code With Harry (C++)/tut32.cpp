#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    // Simple(int a, int b)
    // {
    //     data1 = a;
    //     data2 = b;
    // }
    Simple(int a, int b = 9) // default value of data2 is set = 9
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void Simple ::printData(void)
{
    cout << "The value of Data is : " << data1 << " and " << data2 << endl;
}
int main()
{
    // Simple s(1, 3);
    Simple s(1,4);
    s.printData();

    return 0;
}