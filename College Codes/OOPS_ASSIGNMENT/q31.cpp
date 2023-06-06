#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    float real,imag;
public:
    Complex(float real = 0, float imag = 0){
        this->real = real;
        this->imag = imag;
    }
    void display(){
        cout << real << " + " << imag << " i " << endl; 
    }
    // void operator=(Complex &c){
    //     real = c.real;
    //     imag = c.imag;
    // }
    Complex operator+(Complex &c){
        Complex t;
        t.real = real + c.real;
        t.imag = imag + c.imag;
        return t;
    }
    Complex operator-(Complex &c){
        Complex t;
        t.real = real - c.real;
        t.imag = imag - c.imag;
        return t;
    }
    Complex operator*(Complex &c){
        Complex t;
        t.real = ((real * c.real) - (imag * c.imag));
        t.imag = ((real * c.imag) + (imag * c.real));
        return t;
    }
    Complex operator/(Complex &c){
        Complex t;
        t.real = (((real * c.real) + (imag * c.imag))/(pow(c.real,2)+pow(c.imag,2)));
        t.imag = (((real * c.imag) + (imag * c.real))/(pow(c.real,2)+pow(c.imag,2)));
        return t;
    }
};
int main(){
    Complex c1(4,7),c2(3,5);
    c1.display();
    c2.display();
    Complex c3;
    // c3 = c2;
    // c3.display();
    c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    c3 = c1 * c2;
    c3.display();
    c3 = c1 / c2;
    c3.display();
    return 0;
}