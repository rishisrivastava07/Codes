#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "The Value : " << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << "The Value : " << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(45);
    oc2.inData(67);

    cout << "The values before swapping : " << endl;
    cout << "The value of First Number : ";
    oc1.display();
    cout << "The value of Second Number : ";
    oc2.display();

    exchange(oc1, oc2);
    cout << "The values after swapping : " << endl;
    cout << "The value of First Number : ";
    oc1.display();
    cout << "The value of Second Number : ";
    oc2.display();

    return 0;
}