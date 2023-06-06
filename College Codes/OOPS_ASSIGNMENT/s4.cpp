#include<iostream>
using namespace std;

class A{
    int a;
    const int c = 10;
    public:

    A(int x):c(2*x){
        a = x;
    }
    void disp() const{
        cout << " a = " << a << " & c = " << c << endl;
    }
};

int main(){
    A ob(4);
    ob.disp();
}