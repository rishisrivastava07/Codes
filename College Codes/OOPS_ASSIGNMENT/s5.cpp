#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int);
    void disp();
    A* operator->();
};
A :: A(int x){
    a = x;
}
void A :: disp(){
    cout << " a = " << a << endl;
}
A* A :: operator->(){
    return this;
}
int main(){
    A ob = 10;
    // ob.disp();
    ob->disp();
    return 0;
}