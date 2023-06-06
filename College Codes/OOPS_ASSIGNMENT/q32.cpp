#include<iostream>
#include<cmath>
using namespace std;

class Quadratic{
    int a,b,c;
public:
    Quadratic(int coeff_of_xpow2 = 0,int coeff_of_xpow1 = 0,int coeff_of_xpow0 = 0){
        a = coeff_of_xpow2;
        b = coeff_of_xpow1;
        c = coeff_of_xpow0;
    }
    friend istream& operator>>(istream& in,Quadratic &q){
        in >> q.a >> q.b >> q.c;
        return in;
    }
    friend ostream& operator<<(ostream& out,Quadratic &q){
        out << q.a << " x^2 + " << q.b << " x + " << q.c << endl;
        return out;
    }
    Quadratic operator+(Quadratic &q){
        Quadratic t;
        t.a = a + q.a;
        t.b = b + q.b;
        t.c = c + q.c;
        return t;
    }
    int eval(Quadratic& q,int x){
        int res;
        res = q.a*x*x+q.b*x+q.c;
        return res;
    }
    void compute(Quadratic& q){
        float Discriminant, x1, x2, realPart, imaginaryPart;
        Discriminant = q.b * q.b - 4 * q.a * q.c;
        if(Discriminant > 0){
            cout << "Roots are real & not equal" << endl;
            x1 = (-q.b + sqrt(Discriminant))/(2 * q.a);
            x2 = (-q.b - sqrt(Discriminant))/(2 * q.a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if(Discriminant == 0){
            cout << "Roots are real & equal" << endl;
            x1 = x2 = -q.b/(2 * q.a);
            cout << "x1 = x2 = " << x1 << endl;
        }
        else{
            realPart = -q.b/(2*q.a);
            imaginaryPart =sqrt(-Discriminant)/(2*q.a);
            cout << "Roots are complex and different."  << endl;
            cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }
};

int main(){
    Quadratic q1,q2,q3;
    int x;
    cout << "Enter the coefficient of polynomial1 of degree 2 (ax^2+bx+c): ";
    cin >> q1;
    // cout << "Enter the coefficient of polynomial2 of degree 2 (ax^2+bx+c): ";
    // cin >> q2;
    // q3 = q1 + q2;
    // cout << q3 << endl;
    // cout << q1;
    // cout << "Enter the value of x = ";
    // cin >> x;
    // int res = q1.eval(q1,x);
    // cout<<" for x = "<< x <<" is : "<< res << endl;

    q1.compute(q1);

    return 0;
}