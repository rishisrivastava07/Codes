#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
        cout << "The Complex number is : " << real << " + " << imaginary <<"i"<< endl;
    }
    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    }
};
int main()
{
    // Complex c1;
    // Complex* ptr = &c1;
    // Complex* ptr = new Complex;
    // c1.setData(2, 3);
    // c1.getData();

    // (*ptr).setData(2, 3); is exactly same as arrow operator.
    // ptr->setData(1,3); // iss pointer ko de-refernce kro aur iska set data run kro
    // (*ptr).getData();
    // ptr->getData(); // iss pointer ko de-refernce kro aur iska get data run kro
    
    //Array of Objects
    Complex *ptr1  = new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();
    
    return 0;
}