#include <iostream>
using namespace std;

class Bank
{
    int P;
    int T;
    float R;
    float A;

public:
    Bank(void) {}
    Bank(int p, int t, float r);
    Bank(int p, int t, int r);
    void showData(void);
};

Bank ::Bank(int p, int t, int r)
{
    P = p;
    T = t;
    R = float(r) / 100;
    A = P;

    for (int i = 0; i < t; i++)
    {
        A = A * (1 + R);
    }
}
Bank ::Bank(int p, int t, float r)
{
    P = p;
    T = t;
    R = r;
    A = P;

    for (int i = 0; i < t; i++)
    {
        A = A * (1 + r);
    }
}
void Bank ::showData(void)
{
    cout << "Principal : " << P << endl
         << "Time : " << T << endl
         << "Rate : " << R << endl
         << "Amount : " << A << endl;
}
int main()
{
    Bank b1, b2, b3;
    int p, y, R;
    float r;

    b3.showData();

    cout << "Enter the value of P Y R : " << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.showData();

    cout << "Enter the value of P Y R : " << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.showData();

    return 0;
}